/*
 * Copyright (c) 2006-2009,2011-2013 Apple Inc. All Rights Reserved.
 * 
 * @APPLE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */

/*!
	@header SecKey
	The functions provided in SecKey.h implement and manage a particular
    type of keychain item that represents a key.  A key can be stored in a
    keychain, but a key can also be a transient object.
*/

#ifndef _SECURITY_SECKEY_H_
#define _SECURITY_SECKEY_H_

#include <Security/SecBase.h>
#include <CoreFoundation/CFDictionary.h>
#include <CoreFoundation/CFData.h>
#include <CoreFoundation/CFSet.h>
#include <CoreFoundation/CFError.h>
#include <sys/types.h>

__BEGIN_DECLS

CF_ASSUME_NONNULL_BEGIN
CF_IMPLICIT_BRIDGING_ENABLED

/* Padding Types (iPhone OS 2.0 and later only). */
typedef CF_OPTIONS(uint32_t, SecPadding)
{
    kSecPaddingNone      = 0,
    kSecPaddingPKCS1     = 1, // For EC, defaults to a signature in x9.62 DER encoding.
    kSecPaddingOAEP      = 2,

    /* For SecKeyRawSign/SecKeyRawVerify only,
     ECDSA signature is raw byte format {r,s}, big endian.
     First half is r, second half is s */
    kSecPaddingSigRaw  = 0x4000,

    /* For SecKeyRawSign/SecKeyRawVerify only, data to be signed is an MD2
       hash; standard ASN.1 padding will be done, as well as PKCS1 padding
       of the underlying RSA operation. */
    kSecPaddingPKCS1MD2  = 0x8000,  /* Unsupported as of iOS 5.0 */

    /* For SecKeyRawSign/SecKeyRawVerify only, data to be signed is an MD5
       hash; standard ASN.1 padding will be done, as well as PKCS1 padding
       of the underlying RSA operation. */
    kSecPaddingPKCS1MD5  = 0x8001,  /* Unsupported as of iOS 5.0 */

    /* For SecKeyRawSign/SecKeyRawVerify only, data to be signed is a SHA1
       hash; standard ASN.1 padding will be done, as well as PKCS1 padding
       of the underlying RSA operation. */
    kSecPaddingPKCS1SHA1 = 0x8002,

    /* For SecKeyRawSign/SecKeyRawVerify only, data to be signed is a SHA224
     hash; standard ASN.1 padding will be done, as well as PKCS1 padding
     of the underlying RSA operation. */
    kSecPaddingPKCS1SHA224 = 0x8003,

    /* For SecKeyRawSign/SecKeyRawVerify only, data to be signed is a SHA256
     hash; standard ASN.1 padding will be done, as well as PKCS1 padding
     of the underlying RSA operation. */
    kSecPaddingPKCS1SHA256 = 0x8004,

    /* For SecKeyRawSign/SecKeyRawVerify only, data to be signed is a SHA384
     hash; standard ASN.1 padding will be done, as well as PKCS1 padding
     of the underlying RSA operation. */
    kSecPaddingPKCS1SHA384 = 0x8005,

    /* For SecKeyRawSign/SecKeyRawVerify only, data to be signed is a SHA512
     hash; standard ASN.1 padding will be done, as well as PKCS1 padding
     of the underlying RSA operation. */
    kSecPaddingPKCS1SHA512 = 0x8006,
};


/*!
	@function SecKeyGetTypeID
	@abstract Returns the type identifier of SecKey instances.
	@result The CFTypeID of SecKey instances.
*/
CFTypeID SecKeyGetTypeID(void)
    __OSX_AVAILABLE_STARTING(__MAC_10_3, __IPHONE_2_0);

/*!
    @enum Dictionary key constants for SecKeyGeneratePair API.
    @discussion Predefined key constants used to get or set values
		in a dictionary.
    @constant kSecPrivateKeyAttrs The value for this key is a CFDictionaryRef
	containing attributes specific for the private key to be generated.
    @constant kSecPublicKeyAttrs The value for this key is a CFDictionaryRef
	containing attributes specific for the public key to be generated.
*/
extern const CFStringRef kSecPrivateKeyAttrs
    __OSX_AVAILABLE_STARTING(__MAC_10_8, __IPHONE_2_0);
extern const CFStringRef kSecPublicKeyAttrs
    __OSX_AVAILABLE_STARTING(__MAC_10_8, __IPHONE_2_0);

/*!
    @function SecKeyGeneratePair
    @abstract Generate a private/public keypair.
    @param parameters A dictionary containing one or more key-value pairs.
	See the discussion sections below for a complete overview of options.
    @param publicKey On return, a SecKeyRef reference to the public key.
    @param privateKey On return, a SecKeyRef reference to the private key.
    @result A result code. See "Security Error Codes" (SecBase.h).
    @discussion In order to generate a keypair the parameters dictionary must
	at least contain the following keys:

	  * kSecAttrKeyType with a value being kSecAttrKeyTypeRSA or any other
		kSecAttrKeyType defined in SecItem.h
      * kSecAttrKeySizeInBits with a value being a CFNumberRef or CFStringRef
	    containing the requested key size in bits.  Example sizes for RSA
		keys are: 512, 768, 1024, 2048.

	  The values below may be set either in the top-level dictionary or in a
	  dictionary that is the value of the kSecPrivateKeyAttrs or
	  kSecPublicKeyAttrs key in the top-level dictionary.  Setting these
	  attributes explicitly will override the defaults below.  See SecItem.h
	  for detailed information on these attributes including the types of
      the values.

      * kSecAttrLabel default NULL
	  * kSecAttrIsPermanent if this key is present and has a Boolean
	    value of true, the key or key pair will be added to the default
	    keychain.
      * kSecAttrTokenID if this key should be generated on specified token.  This
        attribute can contain CFStringRef and can be present only in the top-level
        parameters dictionary.
      * kSecAttrApplicationTag default NULL
      * kSecAttrEffectiveKeySize default NULL same as kSecAttrKeySizeInBits
      * kSecAttrCanEncrypt default false for private keys, true for public keys
      * kSecAttrCanDecrypt default true for private keys, false for public keys
      * kSecAttrCanDerive default true
      * kSecAttrCanSign default true for private keys, false for public keys
      * kSecAttrCanVerify default false for private keys, true for public keys
      * kSecAttrCanWrap default false for private keys, true for public keys
      * kSecAttrCanUnwrap default true for private keys, false for public keys

*/
OSStatus SecKeyGeneratePair(CFDictionaryRef parameters, SecKeyRef * _Nullable CF_RETURNS_RETAINED publicKey,
    SecKeyRef * _Nullable CF_RETURNS_RETAINED privateKey) __OSX_AVAILABLE_STARTING(__MAC_10_7, __IPHONE_2_0);


/*!
    @function SecKeyRawSign
    @abstract Given a private key and data to sign, generate a digital
    signature. 
    @param key Private key with which to sign.
    @param padding See Padding Types above, typically kSecPaddingPKCS1SHA1.
    @param dataToSign The data to be signed, typically the digest of the
    actual data.
    @param dataToSignLen Length of dataToSign in bytes.
    @param sig Pointer to buffer in which the signature will be returned.
    @param sigLen IN/OUT maximum length of sig buffer on input, actualy
    length of sig on output.
    @result A result code. See "Security Error Codes" (SecBase.h).
    @discussion If the padding argument is kSecPaddingPKCS1, PKCS1 padding
    will be performed prior to signing. If this argument is kSecPaddingNone,
    the incoming data will be signed "as is".

    When PKCS1 padding is performed, the maximum length of data that can
    be signed is the value returned by SecKeyGetBlockSize() - 11.

    NOTE: The behavior this function with kSecPaddingNone is undefined if the
    first byte of dataToSign is zero; there is no way to verify leading zeroes
    as they are discarded during the calculation. 

    If you want to generate a proper PKCS1 style signature with DER encoding
    of the digest type - and the dataToSign is a SHA1 digest - use
    kSecPaddingPKCS1SHA1. 
 */
OSStatus SecKeyRawSign(
    SecKeyRef           key,
	SecPadding          padding,
	const uint8_t       *dataToSign,
	size_t              dataToSignLen,
	uint8_t             *sig,
	size_t              *sigLen)
    __OSX_AVAILABLE_STARTING(__MAC_10_7, __IPHONE_2_0);


/*!
    @function SecKeyRawVerify
    @abstract Given a public key, data which has been signed, and a signature,
    verify the signature. 
    @param key Public key with which to verify the signature.
    @param padding See Padding Types above, typically kSecPaddingPKCS1SHA1.
    @param signedData The data over which sig is being verified, typically
    the digest of the actual data.
    @param signedDataLen Length of signedData in bytes.
    @param sig Pointer to the signature to verify.
    @param sigLen Length of sig in  bytes.
    @result A result code. See "Security Error Codes" (SecBase.h).
    @discussion If the padding argument is kSecPaddingPKCS1, PKCS1 padding
    will be checked during verification. If this argument is kSecPaddingNone,
    the incoming data will be compared directly to sig.

    If you are verifying a proper PKCS1-style signature, with DER encoding
    of the digest type - and the signedData is a SHA1 digest - use
    kSecPaddingPKCS1SHA1.
 */ 
OSStatus SecKeyRawVerify(
    SecKeyRef           key,
	SecPadding          padding,
	const uint8_t       *signedData,
	size_t              signedDataLen,
	const uint8_t       *sig,
	size_t              sigLen)
    __OSX_AVAILABLE_STARTING(__MAC_10_7, __IPHONE_2_0);


/*!
    @function SecKeyEncrypt
    @abstract Encrypt a block of plaintext. 
    @param key Public key with which to encrypt the data.
    @param padding See Padding Types above, typically kSecPaddingPKCS1.
    @param plainText The data to encrypt.
    @param plainTextLen Length of plainText in bytes, this must be less
    or equal to the value returned by SecKeyGetBlockSize().
    @param cipherText Pointer to the output buffer.
    @param cipherTextLen On input, specifies how much space is available at
    cipherText; on return, it is the actual number of cipherText bytes written.
    @result A result code. See "Security Error Codes" (SecBase.h).
    @discussion If the padding argument is kSecPaddingPKCS1 or kSecPaddingOAEP,
    PKCS1 (respectively kSecPaddingOAEP) padding will be performed prior to encryption.
    If this argument is kSecPaddingNone, the incoming data will be encrypted "as is".
    kSecPaddingOAEP is the recommended value. Other value are not recommended 
    for security reason (Padding attack or malleability).

    When PKCS1 padding is performed, the maximum length of data that can
    be encrypted is the value returned by SecKeyGetBlockSize() - 11.

    When memory usage is a critical issue, note that the input buffer
    (plainText) can be the same as the output buffer (cipherText). 
 */
OSStatus SecKeyEncrypt(
    SecKeyRef           key,
	SecPadding          padding,
	const uint8_t		*plainText,
	size_t              plainTextLen,
	uint8_t             *cipherText,
	size_t              *cipherTextLen)
    __OSX_AVAILABLE_STARTING(__MAC_10_7, __IPHONE_2_0);


/*!
    @function SecKeyDecrypt
    @abstract Decrypt a block of ciphertext. 
    @param key Private key with which to decrypt the data.
    @param padding See Padding Types above, typically kSecPaddingPKCS1.
    @param cipherText The data to decrypt.
    @param cipherTextLen Length of cipherText in bytes, this must be less
    or equal to the value returned by SecKeyGetBlockSize().
    @param plainText Pointer to the output buffer.
    @param plainTextLen On input, specifies how much space is available at
    plainText; on return, it is the actual number of plainText bytes written.
    @result A result code. See "Security Error Codes" (SecBase.h).
    @discussion If the padding argument is kSecPaddingPKCS1 or kSecPaddingOAEP,
    the corresponding padding will be removed after decryption. 
    If this argument is kSecPaddingNone, the decrypted data will be returned "as is".

    When memory usage is a critical issue, note that the input buffer
    (plainText) can be the same as the output buffer (cipherText). 
 */
OSStatus SecKeyDecrypt(
    SecKeyRef           key,                /* Private key */
	SecPadding          padding,			/* kSecPaddingNone,
                                               kSecPaddingPKCS1,
                                               kSecPaddingOAEP */
	const uint8_t       *cipherText,
	size_t              cipherTextLen,		/* length of cipherText */
	uint8_t             *plainText,	
	size_t              *plainTextLen)		/* IN/OUT */
    __OSX_AVAILABLE_STARTING(__MAC_10_7, __IPHONE_2_0);

/*!
    @function SecKeyGetBlockSize
    @abstract Returns size of the block for specified key, in bytes.
    @param key The key for which the block length is requested.
    @result The block length of the key in bytes.
    @discussion If for example key is an RSA key the value returned by 
    this function is the size of the modulus.
 */
size_t SecKeyGetBlockSize(SecKeyRef key)
    __OSX_AVAILABLE_STARTING(__MAC_10_7, __IPHONE_2_0);

/*!
 @function SecKeyCreateRandomKey
 @abstract Generates a new public/private key pair.
 @param parameters A dictionary containing one or more key-value pairs.
	See the discussion sections below for a complete overview of options.
 @param error On error, will be populated with an error object describing the failure.
 See "Security Error Codes" (SecBase.h).
 @return Newly generated private key.  To get associated public key, use SecKeyCopyPublicKey().
 @discussion In order to generate a keypair the parameters dictionary must
	at least contain the following keys:

 * kSecAttrKeyType with a value being kSecAttrKeyTypeRSA or any other
 kSecAttrKeyType defined in SecItem.h
 * kSecAttrKeySizeInBits with a value being a CFNumberRef or CFStringRef
 containing the requested key size in bits.  Example sizes for RSA
 keys are: 512, 768, 1024, 2048.

 The values below may be set either in the top-level dictionary or in a
 dictionary that is the value of the kSecPrivateKeyAttrs or
 kSecPublicKeyAttrs key in the top-level dictionary.  Setting these
 attributes explicitly will override the defaults below.  See SecItem.h
 for detailed information on these attributes including the types of
 the values.

 * kSecAttrLabel default NULL
 * kSecAttrIsPermanent if this key is present and has a Boolean value of true,
   the key or key pair will be added to the default keychain.
 * kSecAttrTokenID if this key should be generated on specified token.  This
   attribute can contain CFStringRef and can be present only in the top-level
   parameters dictionary.
 * kSecAttrApplicationTag default NULL
 * kSecAttrEffectiveKeySize default NULL same as kSecAttrKeySizeInBits
 * kSecAttrCanEncrypt default false for private keys, true for public keys
 * kSecAttrCanDecrypt default true for private keys, false for public keys
 * kSecAttrCanDerive default true
 * kSecAttrCanSign default true for private keys, false for public keys
 * kSecAttrCanVerify default false for private keys, true for public keys
 * kSecAttrCanWrap default false for private keys, true for public keys
 * kSecAttrCanUnwrap default true for private keys, false for public keys
 */
SecKeyRef _Nullable SecKeyCreateRandomKey(CFDictionaryRef parameters, CFErrorRef *error)
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);

/*!
	@function SecKeyCreateWithData
	@abstract Create a SecKey from a well-defined external representation.
	@param keyData CFData representing the key. The format of the data depends on the type of key being created.
	@param attributes Dictionary containing attributes describing the key to be imported. The keys in this dictionary
 	are kSecAttr* constants from SecItem.h.  Mandatory attributes are:
	 * kSecAttrKeyType
	 * kSecAttrKeyClass
	 * kSecAttrKeySizeInBits
	@param error On error, will be populated with an error object describing the failure.
 	See "Security Error Codes" (SecBase.h).
	@result A SecKey object representing the key, or NULL on failure.
	@discussion This function does not add keys to any keychain, but the SecKey object it returns can be added
 	to keychain using the SecItemAdd function.
	The requested data format depend on the type of key (kSecAttrKeyType) being created:
	 * kSecAttrKeyTypeRSA               PKCS#1 format
	 * kSecAttrKeyTypeECSECPrimeRandom  SEC1 format (www.secg.org)
 */
SecKeyRef _Nullable SecKeyCreateWithData(CFDataRef keyData, CFDictionaryRef attributes, CFErrorRef *error)
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);

/*!
	@function SecKeyCopyExternalRepresentation
	@abstract Create an external representation for the given key suitable for the key's type.
	@param key The key to be exported.
	@param error On error, will be populated with an error object describing the failure.
 	See "Security Error Codes" (SecBase.h).
	@result A CFData representing the key in a format suitable for that key type.
	@discussion This function may fail if the key is not exportable (e.g., bound to a smart card or Secure Enclave).
	The format in which the key will be exported depends on the type of key:
	* kSecAttrKeyTypeRSA                 PKCS#1 format
	* kSecAttrKeyTypeECSECPrimeRandom    SEC1 format (www.secg.org)
 */
CFDataRef _Nullable SecKeyCopyExternalRepresentation(SecKeyRef key, CFErrorRef *error)
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);

/*!
	@function SecKeyCopyAttributes
	@abstract Retrieve keychain attributes of a key.
	@param key The key whose attributes are to be retrieved.
	@result Dictionary containing attributes of the key. The keys that populate this dictionary are defined
 	and discussed in SecItem.h.
	@discussion The attributes provided by this function are:
	* kSecAttrCanEncrypt
	* kSecAttrCanDecrypt
	* kSecAttrCanDerive
	* kSecAttrCanSign
	* kSecAttrCanVerify
	* kSecAttrKeyClass
	* kSecAttrKeyType
	* kSecAttrKeySizeInBits
	* kSecAttrTokenID
	* kSecAttrApplicationLabel
	Other values returned in that dictionary are RFU.
 */
CFDictionaryRef _Nullable SecKeyCopyAttributes(SecKeyRef key)
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);

/*!
	@function SecKeyCopyPublicKey
	@abstract Retrieve the public key from a key pair or private key.
	@param key The key from which to retrieve a public key.
	@result The public key or NULL if public key is not available for specified key.
	@discussion Fails if key does not contain a public key or no public key can be computed from it.
 */
SecKeyRef _Nullable SecKeyCopyPublicKey(SecKeyRef key)
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);

/*!
	@enum SecKeyAlgorithm
	@abstract Available algorithms for performing cryptographic operations with SecKey object.  String representation
	of constant can be used for logging or debugging purposes, because they contain human readable names of the algorithm.

	@constant kSecKeyAlgorithmRSASignatureRaw
	Raw RSA sign/verify operation, size of input data must be the same as value returned by SecKeyGetBlockSize().

 	@constant kSecKeyAlgorithmRSASignatureDigestPKCS1v15Raw
 	RSA sign/verify operation, assumes that input data is digest and OID and digest algorithm as specified in PKCS# v1.5.
	This algorithm is typically not used directly, instead use algorithm with specified digest, like
 	kSecKeyAlgorithmRSASignatureDigestPKCS1v15SHA256.

	@constant kSecKeyAlgorithmRSASignatureDigestPKCS1v15SHA1
	RSA signature with PKCS#1 padding, input data must be SHA-1 generated digest.

	@constant kSecKeyAlgorithmRSASignatureDigestPKCS1v15SHA224
	RSA signature with PKCS#1 padding, input data must be SHA-224 generated digest.

	@constant kSecKeyAlgorithmRSASignatureDigestPKCS1v15SHA256
	RSA signature with PKCS#1 padding, input data must be SHA-256 generated digest.

	@constant kSecKeyAlgorithmRSASignatureDigestPKCS1v15SHA384
	RSA signature with PKCS#1 padding, input data must be SHA-384 generated digest.

	@constant kSecKeyAlgorithmRSASignatureDigestPKCS1v15SHA512
	RSA signature with PKCS#1 padding, input data must be SHA-512 generated digest.

	@constant kSecKeyAlgorithmRSASignatureMessagePKCS1v15SHA1
	RSA signature with PKCS#1 padding, SHA-1 digest is generated from input data of any size.

	@constant kSecKeyAlgorithmRSASignatureMessagePKCS1v15SHA224
	RSA signature with PKCS#1 padding, SHA-224 digest is generated from input data of any size.

	@constant kSecKeyAlgorithmRSASignatureMessagePKCS1v15SHA256
	RSA signature with PKCS#1 padding, SHA-256 digest is generated from input data of any size.

	@constant kSecKeyAlgorithmRSASignatureMessagePKCS1v15SHA384
	RSA signature with PKCS#1 padding, SHA-384 digest is generated from input data of any size.

	@constant kSecKeyAlgorithmRSASignatureMessagePKCS1v15SHA512
	RSA signature with PKCS#1 padding, SHA-512 digest is generated from input data of any size.

	@constant kSecKeyAlgorithmECDSASignatureRFC4754
	ECDSA algorithm, signature is concatenated r and s, big endian, data is message digest.

	@constant kSecKeyAlgorithmECDSASignatureDigestX962
	ECDSA algorithm, signature is in DER x9.62 encoding, input data is message digest.

	@constant kSecKeyAlgorithmECDSASignatureDigestX962SHA1
	ECDSA algorithm, signature is in DER x9.62 encoding, input data is message digest created by SHA1 algorithm.

	@constant kSecKeyAlgorithmECDSASignatureDigestX962SHA1
	ECDSA algorithm, signature is in DER x9.62 encoding, input data is message digest created by SHA224 algorithm.

	@constant kSecKeyAlgorithmECDSASignatureDigestX962SHA1
	ECDSA algorithm, signature is in DER x9.62 encoding, input data is message digest created by SHA256 algorithm.

	@constant kSecKeyAlgorithmECDSASignatureDigestX962SHA1
	ECDSA algorithm, signature is in DER x9.62 encoding, input data is message digest created by SHA384 algorithm.

	@constant kSecKeyAlgorithmECDSASignatureDigestX962SHA1
	ECDSA algorithm, signature is in DER x9.62 encoding, input data is message digest created by SHA512 algorithm.

	@constant kSecKeyAlgorithmECDSASignatureMessageX962SHA1
	ECDSA algorithm, signature is in DER x9.62 encoding, SHA-1 digest is generated from input data of any size.

	@constant kSecKeyAlgorithmECDSASignatureMessageX962SHA224
	ECDSA algorithm, signature is in DER x9.62 encoding, SHA-224 digest is generated from input data of any size.

	@constant kSecKeyAlgorithmECDSASignatureMessageX962SHA256
	ECDSA algorithm, signature is in DER x9.62 encoding, SHA-256 digest is generated from input data of any size.

	@constant kSecKeyAlgorithmECDSASignatureMessageX962SHA384
	ECDSA algorithm, signature is in DER x9.62 encoding, SHA-384 digest is generated from input data of any size.

	@constant kSecKeyAlgorithmECDSASignatureMessageX962SHA512
	ECDSA algorithm, signature is in DER x9.62 encoding, SHA-512 digest is generated from input data of any size.

	@constant kSecKeyAlgorithmRSAEncryptionRaw
	Raw RSA encryption or decryption, size of data must match RSA key modulus size.  Note that direct
	use of this algorithm without padding is cryptographically very weak, it is important to always introduce
	some kind of padding.  Input data size must be less or equal to the key block size and returned block has always
	the same size as block size, as returned by SecKeyGetBlockSize().

	@constant kSecKeyAlgorithmRSAEncryptionPKCS1
	RSA encryption or decryption, data is padded using PKCS#1 padding scheme.  This algorithm should be used only for
	backward compatibility with existing protocols and data. New implementations should choose cryptographically
	stronger algorithm instead (see kSecKeyAlgorithmRSAEncryptionOAEP).  Input data must be at most
 	"key block size - 11" bytes long and returned block has always the same size as block size, as returned
	by SecKeyGetBlockSize().

	@constant kSecKeyAlgorithmRSAEncryptionOAEPSHA1
	RSA encryption or decryption, data is padded using OAEP padding scheme internally using SHA1. Input data must be at most
	"key block size - 42" bytes long and returned block has always the same size as block size, as returned
	by SecKeyGetBlockSize().  Use kSecKeyAlgorithmRSAEncryptionOAEPSHA1AESGCM to be able to encrypt and decrypt arbitrary long data.

	@constant kSecKeyAlgorithmRSAEncryptionOAEPSHA224
	RSA encryption or decryption, data is padded using OAEP padding scheme internally using SHA224. Input data must be at most
	"key block size - 58" bytes long and returned block has always the same size as block size, as returned
	by SecKeyGetBlockSize().  Use kSecKeyAlgorithmRSAEncryptionOAEPSHA224AESGCM to be able to encrypt and decrypt arbitrary long data.

	@constant kSecKeyAlgorithmRSAEncryptionOAEPSHA256
	RSA encryption or decryption, data is padded using OAEP padding scheme internally using SHA256. Input data must be at most
	"key block size - 66" bytes long and returned block has always the same size as block size, as returned
	by SecKeyGetBlockSize().  Use kSecKeyAlgorithmRSAEncryptionOAEPSHA256AESGCM to be able to encrypt and decrypt arbitrary long data.

	@constant kSecKeyAlgorithmRSAEncryptionOAEPSHA384
	RSA encryption or decryption, data is padded using OAEP padding scheme internally using SHA384. Input data must be at most
	"key block size - 98" bytes long and returned block has always the same size as block size, as returned
	by SecKeyGetBlockSize().  Use kSecKeyAlgorithmRSAEncryptionOAEPSHA384AESGCM to be able to encrypt and decrypt arbitrary long data.

	@constant kSecKeyAlgorithmRSAEncryptionOAEPSHA512
	RSA encryption or decryption, data is padded using OAEP padding scheme internally using SHA512. Input data must be at most
	"key block size - 130" bytes long and returned block has always the same size as block size, as returned
	by SecKeyGetBlockSize().  Use kSecKeyAlgorithmRSAEncryptionOAEPSHA512AESGCM to be able to encrypt and decrypt arbitrary long data.

	@constant kSecKeyAlgorithmRSAEncryptionOAEPSHA1AESGCM
 	Randomly generated AES session key is encrypted by RSA with OAEP padding.  User data are encrypted using session key in GCM
 	mode with all-zero 16 bytes long IV (initialization vector).  Finally 16 byte AES-GCM tag is appended to ciphertext.
	256bit AES key is used if RSA key is 4096bit or bigger, otherwise 128bit AES key is used.  Raw public key data is used
 	as authentication data for AES-GCM encryption.

	@constant kSecKeyAlgorithmRSAEncryptionOAEPSHA224AESGCM
 	Randomly generated AES session key is encrypted by RSA with OAEP padding.  User data are encrypted using session key in GCM
 	mode with all-zero 16 bytes long IV (initialization vector).  Finally 16 byte AES-GCM tag is appended to ciphertext.
	256bit AES key is used if RSA key is 4096bit or bigger, otherwise 128bit AES key is used.  Raw public key data is used
 	as authentication data for AES-GCM encryption.

	@constant kSecKeyAlgorithmRSAEncryptionOAEPSHA256AESGCM
 	Randomly generated AES session key is encrypted by RSA with OAEP padding.  User data are encrypted using session key in GCM
 	mode with all-zero 16 bytes long IV (initialization vector).  Finally 16 byte AES-GCM tag is appended to ciphertext.
	256bit AES key is used if RSA key is 4096bit or bigger, otherwise 128bit AES key is used.  Raw public key data is used
 	as authentication data for AES-GCM encryption.

	@constant kSecKeyAlgorithmRSAEncryptionOAEPSHA384AESGCM
 	Randomly generated AES session key is encrypted by RSA with OAEP padding.  User data are encrypted using session key in GCM
 	mode with all-zero 16 bytes long IV (initialization vector).  Finally 16 byte AES-GCM tag is appended to ciphertext.
	256bit AES key is used if RSA key is 4096bit or bigger, otherwise 128bit AES key is used.  Raw public key data is used
 	as authentication data for AES-GCM encryption.

	@constant kSecKeyAlgorithmRSAEncryptionOAEPSHA512AESGCM
 	Randomly generated AES session key is encrypted by RSA with OAEP padding.  User data are encrypted using session key in GCM
 	mode with all-zero 16 bytes long IV (initialization vector).  Finally 16 byte AES-GCM tag is appended to ciphertext.
	256bit AES key is used if RSA key is 4096bit or bigger, otherwise 128bit AES key is used.  Raw public key data is used
 	as authentication data for AES-GCM encryption.

 	@constant kSecKeyAlgorithmECIESEncryptionStandardX963SHA1AESGCM
	ECIES encryption or decryption.  This algorithm does not limit the size of the message to be encrypted or decrypted.
	Encryption is done using AES-GCM with key negotiated by kSecKeyAlgorithmECDHKeyExchangeStandardX963SHA1.  AES Key size
	is 128bit for EC keys <=256bit and 256bit for bigger EC keys.  Ephemeral public key data is used as sharedInfo for KDF,
	and static public key data is used as authenticationData for AES-GCM processing.  AES-GCM uses 16 bytes long TAG and
 	all-zero 16 byte long IV (initialization vector).

 	@constant kSecKeyAlgorithmECIESEncryptionStandardX963SHA224AESGCM
	ECIES encryption or decryption.  This algorithm does not limit the size of the message to be encrypted or decrypted.
	Encryption is done using AES-GCM with key negotiated by kSecKeyAlgorithmECDHKeyExchangeStandardX963SHA1.  AES Key size
	is 128bit for EC keys <=256bit and 256bit for bigger EC keys.  Ephemeral public key data is used as sharedInfo for KDF,
	and static public key data is used as authenticationData for AES-GCM processing.  AES-GCM uses 16 bytes long TAG and
 	all-zero 16 byte long IV (initialization vector).

 	@constant kSecKeyAlgorithmECIESEncryptionStandardX963SHA256AESGCM
	ECIES encryption or decryption.  This algorithm does not limit the size of the message to be encrypted or decrypted.
	Encryption is done using AES-GCM with key negotiated by kSecKeyAlgorithmECDHKeyExchangeStandardX963SHA1.  AES Key size
	is 128bit for EC keys <=256bit and 256bit for bigger EC keys.  Ephemeral public key data is used as sharedInfo for KDF,
	and static public key data is used as authenticationData for AES-GCM processing.  AES-GCM uses 16 bytes long TAG and
 	all-zero 16 byte long IV (initialization vector).

 	@constant kSecKeyAlgorithmECIESEncryptionStandardX963SHA384AESGCM
	ECIES encryption or decryption.  This algorithm does not limit the size of the message to be encrypted or decrypted.
	Encryption is done using AES-GCM with key negotiated by kSecKeyAlgorithmECDHKeyExchangeStandardX963SHA1.  AES Key size
	is 128bit for EC keys <=256bit and 256bit for bigger EC keys.  Ephemeral public key data is used as sharedInfo for KDF,
	and static public key data is used as authenticationData for AES-GCM processing.  AES-GCM uses 16 bytes long TAG and
 	all-zero 16 byte long IV (initialization vector).

 	@constant kSecKeyAlgorithmECIESEncryptionStandardX963SHA512AESGCM
	ECIES encryption or decryption.  This algorithm does not limit the size of the message to be encrypted or decrypted.
	Encryption is done using AES-GCM with key negotiated by kSecKeyAlgorithmECDHKeyExchangeStandardX963SHA1.  AES Key size
	is 128bit for EC keys <=256bit and 256bit for bigger EC keys.  Ephemeral public key data is used as sharedInfo for KDF,
	and static public key data is used as authenticationData for AES-GCM processing.  AES-GCM uses 16 bytes long TAG and
 	all-zero 16 byte long IV (initialization vector).

 	@constant kSecKeyAlgorithmECIESEncryptionCofactorX963SHA1AESGCM
	ECIES encryption or decryption.  This algorithm does not limit the size of the message to be encrypted or decrypted.
	Encryption is done using AES-GCM with key negotiated by kSecKeyAlgorithmECDHKeyExchangeCofactorX963SHA1.  AES Key size
	is 128bit for EC keys <=256bit and 256bit for bigger EC keys.  Ephemeral public key data is used as sharedInfo for KDF,
	and static public key data is used as authenticationData for AES-GCM processing.  AES-GCM uses 16 bytes long TAG and
 	all-zero 16 byte long IV (initialization vector).

 	@constant kSecKeyAlgorithmECIESEncryptionCofactorX963SHA224AESGCM
	ECIES encryption or decryption.  This algorithm does not limit the size of the message to be encrypted or decrypted.
	Encryption is done using AES-GCM with key negotiated by kSecKeyAlgorithmECDHKeyExchangeCofactorX963SHA1.  AES Key size
	is 128bit for EC keys <=256bit and 256bit for bigger EC keys.  Ephemeral public key data is used as sharedInfo for KDF,
	and static public key data is used as authenticationData for AES-GCM processing.  AES-GCM uses 16 bytes long TAG and
 	all-zero 16 byte long IV (initialization vector).

 	@constant kSecKeyAlgorithmECIESEncryptionCofactorX963SHA256AESGCM
	ECIES encryption or decryption.  This algorithm does not limit the size of the message to be encrypted or decrypted.
	Encryption is done using AES-GCM with key negotiated by kSecKeyAlgorithmECDHKeyExchangeCofactorX963SHA1.  AES Key size
	is 128bit for EC keys <=256bit and 256bit for bigger EC keys.  Ephemeral public key data is used as sharedInfo for KDF,
	and static public key data is used as authenticationData for AES-GCM processing.  AES-GCM uses 16 bytes long TAG and
 	all-zero 16 byte long IV (initialization vector).

 	@constant kSecKeyAlgorithmECIESEncryptionCofactorX963SHA384AESGCM
	ECIES encryption or decryption.  This algorithm does not limit the size of the message to be encrypted or decrypted.
	Encryption is done using AES-GCM with key negotiated by kSecKeyAlgorithmECDHKeyExchangeCofactorX963SHA1.  AES Key size
	is 128bit for EC keys <=256bit and 256bit for bigger EC keys.  Ephemeral public key data is used as sharedInfo for KDF,
	and static public key data is used as authenticationData for AES-GCM processing.  AES-GCM uses 16 bytes long TAG and
 	all-zero 16 byte long IV (initialization vector).

 	@constant kSecKeyAlgorithmECIESEncryptionCofactorX963SHA512AESGCM
	ECIES encryption or decryption.  This algorithm does not limit the size of the message to be encrypted or decrypted.
	Encryption is done using AES-GCM with key negotiated by kSecKeyAlgorithmECDHKeyExchangeCofactorX963SHA1.  AES Key size
	is 128bit for EC keys <=256bit and 256bit for bigger EC keys.  Ephemeral public key data is used as sharedInfo for KDF,
	and static public key data is used as authenticationData for AES-GCM processing.  AES-GCM uses 16 bytes long TAG and
 	all-zero 16 byte long IV (initialization vector).

	@constant kSecKeyAlgorithmECDHKeyExchangeCofactor
	Compute shared secret using ECDH cofactor algorithm, suitable only for kSecAttrKeyTypeECSECPrimeRandom keys.
	This algorithm does not accept any parameters, length of output raw shared secret is given by the length of the key.

	@constant kSecKeyAlgorithmECDHKeyExchangeCofactorX963SHA1
	Compute shared secret using ECDH cofactor algorithm, suitable only for kSecAttrKeyTypeECSECPrimeRandom keys
	and apply ANSI X9.63 KDF with SHA1 as hashing function.  Requires kSecKeyKeyExchangeParameterRequestedSize and allows
	kSecKeyKeyExchangeParameterSharedInfo parameters to be used.

	@constant kSecKeyAlgorithmECDHKeyExchangeCofactorX963SHA224
	Compute shared secret using ECDH cofactor algorithm, suitable only for kSecAttrKeyTypeECSECPrimeRandom keys
	and apply ANSI X9.63 KDF with SHA224 as hashing function.  Requires kSecKeyKeyExchangeParameterRequestedSize and allows
	kSecKeyKeyExchangeParameterSharedInfo parameters to be used.

	@constant kSecKeyAlgorithmECDHKeyExchangeCofactorX963SHA256
	Compute shared secret using ECDH cofactor algorithm, suitable only for kSecAttrKeyTypeECSECPrimeRandom keys
	and apply ANSI X9.63 KDF with SHA256 as hashing function.  Requires kSecKeyKeyExchangeParameterRequestedSize and allows
	kSecKeyKeyExchangeParameterSharedInfo parameters to be used.

	@constant kSecKeyAlgorithmECDHKeyExchangeCofactorX963SHA384
	Compute shared secret using ECDH cofactor algorithm, suitable only for kSecAttrKeyTypeECSECPrimeRandom keys
	and apply ANSI X9.63 KDF with SHA384 as hashing function.  Requires kSecKeyKeyExchangeParameterRequestedSize and allows
	kSecKeyKeyExchangeParameterSharedInfo parameters to be used.

	@constant kSecKeyAlgorithmECDHKeyExchangeCofactorX963SHA512
	Compute shared secret using ECDH cofactor algorithm, suitable only for kSecAttrKeyTypeECSECPrimeRandom keys
	and apply ANSI X9.63 KDF with SHA512 as hashing function.  Requires kSecKeyKeyExchangeParameterRequestedSize and allows
	kSecKeyKeyExchangeParameterSharedInfo parameters to be used.

	@constant kSecKeyAlgorithmECDHKeyExchangeStandard
	Compute shared secret using ECDH algorithm without cofactor, suitable only for kSecAttrKeyTypeECSECPrimeRandom keys.
	This algorithm does not accept any parameters, length of output raw shared secret is given by the length of the key.

	@constant kSecKeyAlgorithmECDHKeyExchangeStandardX963SHA1
	Compute shared secret using ECDH algorithm without cofactor, suitable only for kSecAttrKeyTypeECSECPrimeRandom keys
	and apply ANSI X9.63 KDF with SHA1 as hashing function.  Requires kSecKeyKeyExchangeParameterRequestedSize and allows
	kSecKeyKeyExchangeParameterSharedInfo parameters to be used.

	@constant kSecKeyAlgorithmECDHKeyExchangeStandardX963SHA224
	Compute shared secret using ECDH algorithm without cofactor, suitable only for kSecAttrKeyTypeECSECPrimeRandom keys
	and apply ANSI X9.63 KDF with SHA224 as hashing function.  Requires kSecKeyKeyExchangeParameterRequestedSize and allows
	kSecKeyKeyExchangeParameterSharedInfo parameters to be used.

	@constant kSecKeyAlgorithmECDHKeyExchangeStandardX963SHA256
	Compute shared secret using ECDH algorithm without cofactor, suitable only for kSecAttrKeyTypeECSECPrimeRandom keys
	and apply ANSI X9.63 KDF with SHA256 as hashing function.  Requires kSecKeyKeyExchangeParameterRequestedSize and allows
	kSecKeyKeyExchangeParameterSharedInfo parameters to be used.

	@constant kSecKeyAlgorithmECDHKeyExchangeStandardX963SHA384
	Compute shared secret using ECDH algorithm without cofactor, suitable only for kSecAttrKeyTypeECSECPrimeRandom keys
	and apply ANSI X9.63 KDF with SHA384 as hashing function.  Requires kSecKeyKeyExchangeParameterRequestedSize and allows
	kSecKeyKeyExchangeParameterSharedInfo parameters to be used.

	@constant kSecKeyAlgorithmECDHKeyExchangeStandardX963SHA512
	Compute shared secret using ECDH algorithm without cofactor, suitable only for kSecAttrKeyTypeECSECPrimeRandom keys
	and apply ANSI X9.63 KDF with SHA512 as hashing function.  Requires kSecKeyKeyExchangeParameterRequestedSize and allows
	kSecKeyKeyExchangeParameterSharedInfo parameters to be used.
  */

typedef CFStringRef SecKeyAlgorithm CF_STRING_ENUM
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);

extern const SecKeyAlgorithm kSecKeyAlgorithmRSASignatureRaw
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);

extern const SecKeyAlgorithm kSecKeyAlgorithmRSASignatureDigestPKCS1v15Raw
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);

extern const SecKeyAlgorithm kSecKeyAlgorithmRSASignatureDigestPKCS1v15SHA1
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);
extern const SecKeyAlgorithm kSecKeyAlgorithmRSASignatureDigestPKCS1v15SHA224
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);
extern const SecKeyAlgorithm kSecKeyAlgorithmRSASignatureDigestPKCS1v15SHA256
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);
extern const SecKeyAlgorithm kSecKeyAlgorithmRSASignatureDigestPKCS1v15SHA384
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);
extern const SecKeyAlgorithm kSecKeyAlgorithmRSASignatureDigestPKCS1v15SHA512
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);

extern const SecKeyAlgorithm kSecKeyAlgorithmRSASignatureMessagePKCS1v15SHA1
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);
extern const SecKeyAlgorithm kSecKeyAlgorithmRSASignatureMessagePKCS1v15SHA224
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);
extern const SecKeyAlgorithm kSecKeyAlgorithmRSASignatureMessagePKCS1v15SHA256
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);
extern const SecKeyAlgorithm kSecKeyAlgorithmRSASignatureMessagePKCS1v15SHA384
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);
extern const SecKeyAlgorithm kSecKeyAlgorithmRSASignatureMessagePKCS1v15SHA512
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);

extern const SecKeyAlgorithm kSecKeyAlgorithmECDSASignatureRFC4754
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);

extern const SecKeyAlgorithm kSecKeyAlgorithmECDSASignatureDigestX962
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);
extern const SecKeyAlgorithm kSecKeyAlgorithmECDSASignatureDigestX962SHA1
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);
extern const SecKeyAlgorithm kSecKeyAlgorithmECDSASignatureDigestX962SHA224
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);
extern const SecKeyAlgorithm kSecKeyAlgorithmECDSASignatureDigestX962SHA256
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);
extern const SecKeyAlgorithm kSecKeyAlgorithmECDSASignatureDigestX962SHA384
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);
extern const SecKeyAlgorithm kSecKeyAlgorithmECDSASignatureDigestX962SHA512
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);

extern const SecKeyAlgorithm kSecKeyAlgorithmECDSASignatureMessageX962SHA1
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);
extern const SecKeyAlgorithm kSecKeyAlgorithmECDSASignatureMessageX962SHA224
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);
extern const SecKeyAlgorithm kSecKeyAlgorithmECDSASignatureMessageX962SHA256
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);
extern const SecKeyAlgorithm kSecKeyAlgorithmECDSASignatureMessageX962SHA384
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);
extern const SecKeyAlgorithm kSecKeyAlgorithmECDSASignatureMessageX962SHA512
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);

extern const SecKeyAlgorithm kSecKeyAlgorithmRSAEncryptionRaw
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);
extern const SecKeyAlgorithm kSecKeyAlgorithmRSAEncryptionPKCS1
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);
extern const SecKeyAlgorithm kSecKeyAlgorithmRSAEncryptionOAEPSHA1
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);
extern const SecKeyAlgorithm kSecKeyAlgorithmRSAEncryptionOAEPSHA224
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);
extern const SecKeyAlgorithm kSecKeyAlgorithmRSAEncryptionOAEPSHA256
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);
extern const SecKeyAlgorithm kSecKeyAlgorithmRSAEncryptionOAEPSHA384
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);
extern const SecKeyAlgorithm kSecKeyAlgorithmRSAEncryptionOAEPSHA512
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);

extern const SecKeyAlgorithm kSecKeyAlgorithmRSAEncryptionOAEPSHA1AESGCM
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);
extern const SecKeyAlgorithm kSecKeyAlgorithmRSAEncryptionOAEPSHA224AESGCM
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);
extern const SecKeyAlgorithm kSecKeyAlgorithmRSAEncryptionOAEPSHA256AESGCM
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);
extern const SecKeyAlgorithm kSecKeyAlgorithmRSAEncryptionOAEPSHA384AESGCM
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);
extern const SecKeyAlgorithm kSecKeyAlgorithmRSAEncryptionOAEPSHA512AESGCM
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);

extern const SecKeyAlgorithm kSecKeyAlgorithmECIESEncryptionStandardX963SHA1AESGCM
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);
extern const SecKeyAlgorithm kSecKeyAlgorithmECIESEncryptionStandardX963SHA224AESGCM
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);
extern const SecKeyAlgorithm kSecKeyAlgorithmECIESEncryptionStandardX963SHA256AESGCM
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);
extern const SecKeyAlgorithm kSecKeyAlgorithmECIESEncryptionStandardX963SHA384AESGCM
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);
extern const SecKeyAlgorithm kSecKeyAlgorithmECIESEncryptionStandardX963SHA512AESGCM
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);

extern const SecKeyAlgorithm kSecKeyAlgorithmECIESEncryptionCofactorX963SHA1AESGCM
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);
extern const SecKeyAlgorithm kSecKeyAlgorithmECIESEncryptionCofactorX963SHA224AESGCM
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);
extern const SecKeyAlgorithm kSecKeyAlgorithmECIESEncryptionCofactorX963SHA256AESGCM
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);
extern const SecKeyAlgorithm kSecKeyAlgorithmECIESEncryptionCofactorX963SHA384AESGCM
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);
extern const SecKeyAlgorithm kSecKeyAlgorithmECIESEncryptionCofactorX963SHA512AESGCM
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);

extern const SecKeyAlgorithm kSecKeyAlgorithmECDHKeyExchangeStandard
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);
extern const SecKeyAlgorithm kSecKeyAlgorithmECDHKeyExchangeStandardX963SHA1
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);
extern const SecKeyAlgorithm kSecKeyAlgorithmECDHKeyExchangeStandardX963SHA224
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);
extern const SecKeyAlgorithm kSecKeyAlgorithmECDHKeyExchangeStandardX963SHA256
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);
extern const SecKeyAlgorithm kSecKeyAlgorithmECDHKeyExchangeStandardX963SHA384
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);
extern const SecKeyAlgorithm kSecKeyAlgorithmECDHKeyExchangeStandardX963SHA512
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);

extern const SecKeyAlgorithm kSecKeyAlgorithmECDHKeyExchangeCofactor
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);
extern const SecKeyAlgorithm kSecKeyAlgorithmECDHKeyExchangeCofactorX963SHA1
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);
extern const SecKeyAlgorithm kSecKeyAlgorithmECDHKeyExchangeCofactorX963SHA224
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);
extern const SecKeyAlgorithm kSecKeyAlgorithmECDHKeyExchangeCofactorX963SHA256
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);
extern const SecKeyAlgorithm kSecKeyAlgorithmECDHKeyExchangeCofactorX963SHA384
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);
extern const SecKeyAlgorithm kSecKeyAlgorithmECDHKeyExchangeCofactorX963SHA512
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);

/*!
	@function SecKeyCreateSignature
	@abstract Given a private key and data to sign, generate a digital signature.
	@param key Private key with which to sign.
	@param algorithm One of SecKeyAlgorithm constants suitable to generate signature with this key.
	@param dataToSign The data to be signed, typically the digest of the actual data.
	@param error On error, will be populated with an error object describing the failure.
 	See "Security Error Codes" (SecBase.h).
	@result The signature over dataToSign represented as a CFData, or NULL on failure.
	@discussion Computes digital signature using specified key over input data.  The operation algorithm
	further defines the exact format of input data, operation to be performed and output signature.
 */
CFDataRef _Nullable SecKeyCreateSignature(SecKeyRef key, SecKeyAlgorithm algorithm, CFDataRef dataToSign,
                                           CFErrorRef *error)
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);

/*!
	@function SecKeyVerifySignature
	@abstract Given a public key, data which has been signed, and a signature, verify the signature.
	@param key Public key with which to verify the signature.
	@param algorithm One of SecKeyAlgorithm constants suitable to verify signature with this key.
	@param signedData The data over which sig is being verified, typically the digest of the actual data.
	@param signature The signature to verify.
	@param error On error, will be populated with an error object describing the failure.
 	See "Security Error Codes" (SecBase.h).
	@result True if the signature was valid, False otherwise.
	@discussion Verifies digital signature operation using specified key and signed data.  The operation algorithm
	further defines the exact format of input data, signature and operation to be performed.
 */
Boolean SecKeyVerifySignature(SecKeyRef key, SecKeyAlgorithm algorithm, CFDataRef signedData, CFDataRef signature, CFErrorRef *error)
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);

/*!
	@function SecKeyCreateEncryptedData
	@abstract Encrypt a block of plaintext.
	@param key Public key with which to encrypt the data.
	@param algorithm One of SecKeyAlgorithm constants suitable to perform encryption with this key.
	@param plaintext The data to encrypt. The length and format of the data must conform to chosen algorithm,
	typically be less or equal to the value returned by SecKeyGetBlockSize().
	@param error On error, will be populated with an error object describing the failure.
 	See "Security Error Codes" (SecBase.h).
	@result The ciphertext represented as a CFData, or NULL on failure.
	@discussion Encrypts plaintext data using specified key.  The exact type of the operation including the format
	of input and output data is specified by encryption algorithm.
 */
CFDataRef _Nullable SecKeyCreateEncryptedData(SecKeyRef key, SecKeyAlgorithm algorithm, CFDataRef plaintext, CFErrorRef *error)
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);

/*!
	@function SecKeyCreateDecryptedData
	@abstract Decrypt a block of ciphertext.
	@param key Private key with which to decrypt the data.
	@param algorithm One of SecKeyAlgorithm constants suitable to perform decryption with this key.
	@param ciphertext The data to decrypt. The length and format of the data must conform to chosen algorithm,
	typically be less or equal to the value returned by SecKeyGetBlockSize().
	@param error On error, will be populated with an error object describing the failure.
 	See "Security Error Codes" (SecBase.h).
	@result The plaintext represented as a CFData, or NULL on failure.
	@discussion Decrypts ciphertext data using specified key.  The exact type of the operation including the format
	of input and output data is specified by decryption algorithm.
 */
CFDataRef _Nullable SecKeyCreateDecryptedData(SecKeyRef key, SecKeyAlgorithm algorithm, CFDataRef ciphertext, CFErrorRef *error)
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);

/*!
	@enum SecKeyKeyExchangeParameter SecKey Key Exchange parameters
	@constant kSecKeyKeyExchangeParameterRequestedSize Contains CFNumberRef with requested result size in bytes.
	@constant kSecKeyKeyExchangeParameterSharedInfo Contains CFDataRef with additional shared info
	for KDF (key derivation function).
 */
typedef CFStringRef SecKeyKeyExchangeParameter CF_STRING_ENUM
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);
extern const SecKeyKeyExchangeParameter kSecKeyKeyExchangeParameterRequestedSize
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);
extern const SecKeyKeyExchangeParameter kSecKeyKeyExchangeParameterSharedInfo
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);

/*!
	@function SecKeyCopyKeyExchangeResult
	@abstract Perform Diffie-Hellman style of key exchange operation, optionally with additional key-derivation steps.
	@param algorithm One of SecKeyAlgorithm constants suitable to perform this operation.
	@param publicKey Remote party's public key.
	@param parameters Dictionary with parameters, see SecKeyKeyExchangeParameter constants.  Used algorithm
	determines the set of required and optional parameters to be used.
	@param error Pointer to an error object on failure.
	See "Security Error Codes" (SecBase.h).
	@result Result of key exchange operation as a CFDataRef, or NULL on failure.
 */
CFDataRef _Nullable SecKeyCopyKeyExchangeResult(SecKeyRef privateKey, SecKeyAlgorithm algorithm, SecKeyRef publicKey, CFDictionaryRef parameters, CFErrorRef *error)
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);

/*!
	@enum SecKeyOperationType
 	@abstract Defines types of cryptographic operations available with SecKey instance.

	@constant kSecKeyOperationTypeSign
	Represents SecKeyCreateSignature()

	@constant kSecKeyOperationTypeVerify
	Represents SecKeyVerifySignature()

	@constant kSecKeyOperationTypeEncrypt
	Represents SecKeyCreateEncryptedData()

	@constant kSecKeyOperationTypeDecrypt
	Represents SecKeyCreateDecryptedData()

	@constant kSecKeyOperationTypeKeyExchange
	Represents SecKeyCopyKeyExchangeResult()
 */
typedef CF_ENUM(CFIndex, SecKeyOperationType) {
    kSecKeyOperationTypeSign        = 0,
    kSecKeyOperationTypeVerify      = 1,
    kSecKeyOperationTypeEncrypt     = 2,
    kSecKeyOperationTypeDecrypt     = 3,
    kSecKeyOperationTypeKeyExchange = 4,
} __OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);

/*!
	@function SecKeyIsAlgorithmSupported
	@abstract Checks whether key supports specified algorithm for specified operation.
	@param key Key to query
	@param operation Operation type for which the key is queried
	@param algorithm Algorithm which is queried
	@return True if key supports specified algorithm for specified operation, False otherwise.
 */
Boolean SecKeyIsAlgorithmSupported(SecKeyRef key, SecKeyOperationType operation, SecKeyAlgorithm algorithm)
__OSX_AVAILABLE(10.12) __IOS_AVAILABLE(10.0) __TVOS_AVAILABLE(10.0) __WATCHOS_AVAILABLE(3.0);

CF_IMPLICIT_BRIDGING_DISABLED
CF_ASSUME_NONNULL_END

__END_DECLS

#endif /* !_SECURITY_SECKEY_H_ */
