#pragma once


#if defined(ACCELERATE_NEW_LAPACK)

#include "lapack_types.h"
#include "lapack_version.h"

#if __has_include(<os/availability.h>)
#   include <os/availability.h>
#else // __has_include(<os/availability.h>)
#   undef API_AVAILABLE
#   define API_AVAILABLE(...) /* Nothing */
#endif // __has_include(<os/availability.h>)


#ifdef __cplusplus
extern "C" {
#endif


void
chla_transtype_(char * _Nonnull ret_val, __LAPACK_int ret_value_len,
                 const __LAPACK_int * _Nonnull trans)
__LAPACK_ALIAS(chla_transtype)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));

__LAPACK_bool
sisnan_(
  const float * _Nonnull sin)
__LAPACK_ALIAS(sisnan)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



__LAPACK_bool
disnan_(
  const double * _Nonnull din)
__LAPACK_ALIAS(disnan)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



__LAPACK_int
ilatrans_(
  const char * _Nonnull trans)
__LAPACK_ALIAS(ilatrans)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



__LAPACK_int
ilaprec_(
  const char * _Nonnull prec)
__LAPACK_ALIAS(ilaprec)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



__LAPACK_int
ilauplo_(
  const char * _Nonnull uplo)
__LAPACK_ALIAS(ilauplo)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



__LAPACK_int
iladiag_(
  const char * _Nonnull diag)
__LAPACK_ALIAS(iladiag)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



float
slamch_(
  const char * _Nonnull cmach)
__LAPACK_ALIAS(slamch)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






double
dlamch_(
  const char * _Nonnull cmach)
__LAPACK_ALIAS(dlamch)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));









void
slabad_(
  float * _Nonnull small,
  float * _Nonnull large)
__LAPACK_ALIAS(slabad)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
scombssq_(
  float * _Nullable v1,
  const float * _Nullable v2)
__LAPACK_ALIAS(scombssq)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dcombssq_(
  double * _Nullable v1,
  const double * _Nullable v2)
__LAPACK_ALIAS(dcombssq)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlabad_(
  double * _Nonnull small,
  double * _Nonnull large)
__LAPACK_ALIAS(dlabad)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






__LAPACK_bool
slaisnan_(
  const float * _Nonnull sin1,
  const float * _Nonnull sin2)
__LAPACK_ALIAS(slaisnan)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



__LAPACK_bool
dlaisnan_(
  const double * _Nonnull din1,
  const double * _Nonnull din2)
__LAPACK_ALIAS(dlaisnan)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



float
slamc3_(
  const float * _Nonnull a,
  const float * _Nonnull b)
__LAPACK_ALIAS(slamc3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



float
slapy2_(
  const float * _Nonnull x,
  const float * _Nonnull y)
__LAPACK_ALIAS(slapy2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



double
dlamc3_(
  const double * _Nonnull a,
  const double * _Nonnull b)
__LAPACK_ALIAS(dlamc3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



double
dlapy2_(
  const double * _Nonnull x,
  const double * _Nonnull y)
__LAPACK_ALIAS(dlapy2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cladiv_(
  __LAPACK_float_complex * _Nonnull ret,
  const __LAPACK_float_complex * _Nonnull x,
  const __LAPACK_float_complex * _Nonnull y)
__LAPACK_ALIAS(cladiv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zladiv_(
  __LAPACK_double_complex * _Nonnull ret,
  const __LAPACK_double_complex * _Nonnull x,
  const __LAPACK_double_complex * _Nonnull y)
__LAPACK_ALIAS(zladiv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slamc4_(
  __LAPACK_int * _Nonnull emin,
  const float * _Nonnull start,
  const __LAPACK_int * _Nonnull base)
__LAPACK_ALIAS(slamc4)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slasq2_(
  const __LAPACK_int * _Nonnull n,
  float * _Nullable z,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slasq2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
clacgv_(
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable x,
  const __LAPACK_int * _Nonnull incx)
__LAPACK_ALIAS(clacgv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slaruv_(
  __LAPACK_int * _Nullable iseed,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable x)
__LAPACK_ALIAS(slaruv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlamc4_(
  __LAPACK_int * _Nonnull emin,
  const double * _Nonnull start,
  const __LAPACK_int * _Nonnull base)
__LAPACK_ALIAS(dlamc4)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlasq2_(
  const __LAPACK_int * _Nonnull n,
  double * _Nullable z,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlasq2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlaruv_(
  __LAPACK_int * _Nullable iseed,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable x)
__LAPACK_ALIAS(dlaruv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ilaver_(
  __LAPACK_int * _Nonnull vers_major,
  __LAPACK_int * _Nonnull vers_minor,
  __LAPACK_int * _Nonnull vers_patch)
__LAPACK_ALIAS(ilaver)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlacgv_(
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable x,
  const __LAPACK_int * _Nonnull incx)
__LAPACK_ALIAS(zlacgv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






__LAPACK_bool
lsamen_(
  const __LAPACK_int * _Nonnull n,
  const char * _Nonnull ca,
  const char * _Nonnull cb)
__LAPACK_ALIAS(lsamen)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



__LAPACK_int
icmax1_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable cx,
  const __LAPACK_int * _Nonnull incx)
__LAPACK_ALIAS(icmax1)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));









__LAPACK_int
ieeeck_(
  const __LAPACK_int * _Nonnull ispec,
  const float * _Nonnull zero,
  const float * _Nonnull one)
__LAPACK_ALIAS(ieeeck)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






__LAPACK_int
izmax1_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable zx,
  const __LAPACK_int * _Nonnull incx)
__LAPACK_ALIAS(izmax1)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






float
scsum1_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable cx,
  const __LAPACK_int * _Nonnull incx)
__LAPACK_ALIAS(scsum1)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));









float
slapy3_(
  const float * _Nonnull x,
  const float * _Nonnull y,
  const float * _Nonnull z)
__LAPACK_ALIAS(slapy3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));















double
dlapy3_(
  const double * _Nonnull x,
  const double * _Nonnull y,
  const double * _Nonnull z)
__LAPACK_ALIAS(dlapy3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



double
dzsum1_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable cx,
  const __LAPACK_int * _Nonnull incx)
__LAPACK_ALIAS(dzsum1)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));









void
slamc1_(
  __LAPACK_int * _Nonnull beta,
  __LAPACK_int * _Nonnull t,
  __LAPACK_bool * _Nonnull rnd,
  __LAPACK_bool * _Nonnull ieee1)
__LAPACK_ALIAS(slamc1)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
slasrt_(
  const char * _Nonnull id,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable d,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slasrt)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));









void
csrscl_(
  const __LAPACK_int * _Nonnull n,
  const float * _Nonnull sa,
  __LAPACK_float_complex * _Nullable sx,
  const __LAPACK_int * _Nonnull incx)
__LAPACK_ALIAS(csrscl)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cla_wwaddw_(
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable x,
  __LAPACK_float_complex * _Nullable y,
  const __LAPACK_float_complex * _Nullable w)
__LAPACK_ALIAS(cla_wwaddw)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slarnv_(
  const __LAPACK_int * _Nonnull idist,
  __LAPACK_int * _Nullable iseed,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable x)
__LAPACK_ALIAS(slarnv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssterf_(
  const __LAPACK_int * _Nonnull n,
  float * _Nullable d,
  float * _Nullable e,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssterf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slarrr_(
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable d,
  const float * _Nullable e,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slarrr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cpptrf_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable ap,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cpptrf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
clarnv_(
  const __LAPACK_int * _Nonnull idist,
  __LAPACK_int * _Nullable iseed,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable x)
__LAPACK_ALIAS(clarnv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cpptri_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable ap,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cpptri)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
spttrf_(
  const __LAPACK_int * _Nonnull n,
  float * _Nullable d,
  float * _Nullable e,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(spttrf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cpttrf_(
  const __LAPACK_int * _Nonnull n,
  float * _Nullable d,
  __LAPACK_float_complex * _Nullable e,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cpttrf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlamc1_(
  __LAPACK_int * _Nonnull beta,
  __LAPACK_int * _Nonnull t,
  __LAPACK_bool * _Nonnull rnd,
  __LAPACK_bool * _Nonnull ieee1)
__LAPACK_ALIAS(dlamc1)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
dlasrt_(
  const char * _Nonnull id,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable d,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlasrt)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlarnv_(
  const __LAPACK_int * _Nonnull idist,
  __LAPACK_int * _Nullable iseed,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable x)
__LAPACK_ALIAS(dlarnv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsterf_(
  const __LAPACK_int * _Nonnull n,
  double * _Nullable d,
  double * _Nullable e,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsterf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
drscl_(
  const __LAPACK_int * _Nonnull n,
  const double * _Nonnull sa,
  double * _Nullable sx,
  const __LAPACK_int * _Nonnull incx)
__LAPACK_ALIAS(drscl)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dla_wwaddw_(
  const __LAPACK_int * _Nonnull n,
  double * _Nullable x,
  double * _Nullable y,
  const double * _Nullable w)
__LAPACK_ALIAS(dla_wwaddw)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlarrr_(
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable d,
  const double * _Nullable e,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlarrr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dpptrf_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable ap,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dpptrf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dpptri_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable ap,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dpptri)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dpttrf_(
  const __LAPACK_int * _Nonnull n,
  double * _Nullable d,
  double * _Nullable e,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dpttrf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
srscl_(
  const __LAPACK_int * _Nonnull n,
  const float * _Nonnull sa,
  float * _Nullable sx,
  const __LAPACK_int * _Nonnull incx)
__LAPACK_ALIAS(srscl)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sla_wwaddw_(
  const __LAPACK_int * _Nonnull n,
  float * _Nullable x,
  float * _Nullable y,
  const float * _Nullable w)
__LAPACK_ALIAS(sla_wwaddw)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
spptrf_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable ap,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(spptrf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
spptri_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable ap,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(spptri)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));









void
zdrscl_(
  const __LAPACK_int * _Nonnull n,
  const double * _Nonnull sa,
  __LAPACK_double_complex * _Nullable sx,
  const __LAPACK_int * _Nonnull incx)
__LAPACK_ALIAS(zdrscl)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zla_wwaddw_(
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable x,
  __LAPACK_double_complex * _Nullable y,
  const __LAPACK_double_complex * _Nullable w)
__LAPACK_ALIAS(zla_wwaddw)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zpptrf_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable ap,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zpptrf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlarnv_(
  const __LAPACK_int * _Nonnull idist,
  __LAPACK_int * _Nullable iseed,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable x)
__LAPACK_ALIAS(zlarnv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zpptri_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable ap,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zpptri)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zpttrf_(
  const __LAPACK_int * _Nonnull n,
  double * _Nullable d,
  __LAPACK_double_complex * _Nullable e,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zpttrf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



__LAPACK_int
ilaclc_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda)
__LAPACK_ALIAS(ilaclc)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



__LAPACK_int
ilaclr_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda)
__LAPACK_ALIAS(ilaclr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



__LAPACK_int
iladlc_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda)
__LAPACK_ALIAS(iladlc)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



__LAPACK_int
iladlr_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda)
__LAPACK_ALIAS(iladlr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



__LAPACK_int
ilaslc_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable a,
  const __LAPACK_int * _Nonnull lda)
__LAPACK_ALIAS(ilaslc)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



__LAPACK_int
ilaslr_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable a,
  const __LAPACK_int * _Nonnull lda)
__LAPACK_ALIAS(ilaslr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



__LAPACK_int
ilazlc_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda)
__LAPACK_ALIAS(ilazlc)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



__LAPACK_int
ilazlr_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda)
__LAPACK_ALIAS(ilazlr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



float
slanst_(
  const char * _Nonnull norm,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable d,
  const float * _Nullable e)
__LAPACK_ALIAS(slanst)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



float
clanht_(
  const char * _Nonnull norm,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable d,
  const __LAPACK_float_complex * _Nullable e)
__LAPACK_ALIAS(clanht)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



double
dlanst_(
  const char * _Nonnull norm,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable d,
  const double * _Nullable e)
__LAPACK_ALIAS(dlanst)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



double
zlanht_(
  const char * _Nonnull norm,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable d,
  const __LAPACK_double_complex * _Nullable e)
__LAPACK_ALIAS(zlanht)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slartgp_(
  const float * _Nonnull f,
  const float * _Nonnull g,
  float * _Nonnull cs,
  float * _Nonnull sn,
  float * _Nonnull r)
__LAPACK_ALIAS(slartgp)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slartgs_(
  const float * _Nonnull x,
  const float * _Nonnull y,
  const float * _Nonnull sigma,
  float * _Nonnull cs,
  float * _Nonnull sn)
__LAPACK_ALIAS(slartgs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slas2_(
  const float * _Nonnull f,
  const float * _Nonnull g,
  const float * _Nonnull h,
  float * _Nonnull ssmin,
  float * _Nonnull ssmax)
__LAPACK_ALIAS(slas2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
slartg_(
  const float * _Nonnull f,
  const float * _Nonnull g,
  float * _Nonnull cs,
  float * _Nonnull sn,
  float * _Nonnull r)
__LAPACK_ALIAS(slartg)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
slasq1_(
  const __LAPACK_int * _Nonnull n,
  float * _Nullable d,
  float * _Nullable e,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slasq1)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
clartg_(
  const __LAPACK_float_complex * _Nonnull f,
  const __LAPACK_float_complex * _Nonnull g,
  float * _Nonnull cs,
  __LAPACK_float_complex * _Nonnull sn,
  __LAPACK_float_complex * _Nonnull r)
__LAPACK_ALIAS(clartg)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
classq_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable x,
  const __LAPACK_int * _Nonnull incx,
  float * _Nonnull scale,
  float * _Nonnull sumsq)
__LAPACK_ALIAS(classq)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
clascl2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable d,
  __LAPACK_float_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx)
__LAPACK_ALIAS(clascl2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
clarfg_(
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nonnull alpha,
  __LAPACK_float_complex * _Nullable x,
  const __LAPACK_int * _Nonnull incx,
  __LAPACK_float_complex * _Nonnull tau)
__LAPACK_ALIAS(clarfg)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slassq_(
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable x,
  const __LAPACK_int * _Nonnull incx,
  float * _Nonnull scale,
  float * _Nonnull sumsq)
__LAPACK_ALIAS(slassq)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
clarfgp_(
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nonnull alpha,
  __LAPACK_float_complex * _Nullable x,
  const __LAPACK_int * _Nonnull incx,
  __LAPACK_float_complex * _Nonnull tau)
__LAPACK_ALIAS(clarfgp)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slae2_(
  const float * _Nonnull a,
  const float * _Nonnull b,
  const float * _Nonnull c,
  float * _Nonnull rt1,
  float * _Nonnull rt2)
__LAPACK_ALIAS(slae2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cpotrf2_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cpotrf2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cpotrf_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cpotrf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chptrf_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable ap,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chptrf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
clacon_(
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable v,
  __LAPACK_float_complex * _Nullable x,
  float * _Nonnull est,
  __LAPACK_int * _Nonnull kase)
__LAPACK_ALIAS(clacon)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
clarfp_(
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nonnull alpha,
  __LAPACK_float_complex * _Nullable x,
  const __LAPACK_int * _Nonnull incx,
  __LAPACK_float_complex * _Nonnull tau)
__LAPACK_ALIAS(clarfp)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
clarscl2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable d,
  __LAPACK_float_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx)
__LAPACK_ALIAS(clarscl2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
clauu2_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(clauu2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
clauum_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(clauum)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cpotf2_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cpotf2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cpftrf_(
  const char * _Nonnull transr,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cpftrf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cpftri_(
  const char * _Nonnull transr,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cpftri)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cpotri_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cpotri)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ctptri_(
  const char * _Nonnull uplo,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable ap,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ctptri)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
csptrf_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable ap,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(csptrf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlartgp_(
  const double * _Nonnull f,
  const double * _Nonnull g,
  double * _Nonnull cs,
  double * _Nonnull sn,
  double * _Nonnull r)
__LAPACK_ALIAS(dlartgp)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlartgs_(
  const double * _Nonnull x,
  const double * _Nonnull y,
  const double * _Nonnull sigma,
  double * _Nonnull cs,
  double * _Nonnull sn)
__LAPACK_ALIAS(dlartgs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlas2_(
  const double * _Nonnull f,
  const double * _Nonnull g,
  const double * _Nonnull h,
  double * _Nonnull ssmin,
  double * _Nonnull ssmax)
__LAPACK_ALIAS(dlas2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
dlassq_(
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable x,
  const __LAPACK_int * _Nonnull incx,
  double * _Nonnull scale,
  double * _Nonnull sumsq)
__LAPACK_ALIAS(dlassq)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlartg_(
  const double * _Nonnull f,
  const double * _Nonnull g,
  double * _Nonnull cs,
  double * _Nonnull sn,
  double * _Nonnull r)
__LAPACK_ALIAS(dlartg)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
dlasq1_(
  const __LAPACK_int * _Nonnull n,
  double * _Nullable d,
  double * _Nullable e,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlasq1)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlae2_(
  const double * _Nonnull a,
  const double * _Nonnull b,
  const double * _Nonnull c,
  double * _Nonnull rt1,
  double * _Nonnull rt2)
__LAPACK_ALIAS(dlae2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlascl2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable d,
  double * _Nullable x,
  const __LAPACK_int * _Nonnull ldx)
__LAPACK_ALIAS(dlascl2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlarfg_(
  const __LAPACK_int * _Nonnull n,
  double * _Nonnull alpha,
  double * _Nullable x,
  const __LAPACK_int * _Nonnull incx,
  double * _Nonnull tau)
__LAPACK_ALIAS(dlarfg)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlarfgp_(
  const __LAPACK_int * _Nonnull n,
  double * _Nonnull alpha,
  double * _Nullable x,
  const __LAPACK_int * _Nonnull incx,
  double * _Nonnull tau)
__LAPACK_ALIAS(dlarfgp)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlarfp_(
  const __LAPACK_int * _Nonnull n,
  double * _Nonnull alpha,
  double * _Nullable x,
  const __LAPACK_int * _Nonnull incx,
  double * _Nonnull tau)
__LAPACK_ALIAS(dlarfp)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlarscl2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable d,
  double * _Nullable x,
  const __LAPACK_int * _Nonnull ldx)
__LAPACK_ALIAS(dlarscl2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlauu2_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlauu2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlauum_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlauum)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dpotf2_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dpotf2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dpotrf2_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dpotrf2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dpotrf_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dpotrf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dpftrf_(
  const char * _Nonnull transr,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dpftrf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dpftri_(
  const char * _Nonnull transr,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dpftri)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dpotri_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dpotri)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dtptri_(
  const char * _Nonnull uplo,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable ap,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dtptri)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
spotrf2_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(spotrf2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
spotrf_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(spotrf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsptrf_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable ap,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsptrf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slascl2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable d,
  float * _Nullable x,
  const __LAPACK_int * _Nonnull ldx)
__LAPACK_ALIAS(slascl2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slarfg_(
  const __LAPACK_int * _Nonnull n,
  float * _Nonnull alpha,
  float * _Nullable x,
  const __LAPACK_int * _Nonnull incx,
  float * _Nonnull tau)
__LAPACK_ALIAS(slarfg)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slarfgp_(
  const __LAPACK_int * _Nonnull n,
  float * _Nonnull alpha,
  float * _Nullable x,
  const __LAPACK_int * _Nonnull incx,
  float * _Nonnull tau)
__LAPACK_ALIAS(slarfgp)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slarfp_(
  const __LAPACK_int * _Nonnull n,
  float * _Nonnull alpha,
  float * _Nullable x,
  const __LAPACK_int * _Nonnull incx,
  float * _Nonnull tau)
__LAPACK_ALIAS(slarfp)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slarscl2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable d,
  float * _Nullable x,
  const __LAPACK_int * _Nonnull ldx)
__LAPACK_ALIAS(slarscl2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slauu2_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slauu2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slauum_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slauum)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
spotf2_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(spotf2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
spftrf_(
  const char * _Nonnull transr,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(spftrf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
spftri_(
  const char * _Nonnull transr,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(spftri)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
spotri_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(spotri)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
stptri_(
  const char * _Nonnull uplo,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable ap,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(stptri)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssptrf_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable ap,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssptrf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
zlassq_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable x,
  const __LAPACK_int * _Nonnull incx,
  double * _Nonnull scale,
  double * _Nonnull sumsq)
__LAPACK_ALIAS(zlassq)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zpotrf2_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zpotrf2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zpotrf_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zpotrf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlartg_(
  const __LAPACK_double_complex * _Nonnull f,
  const __LAPACK_double_complex * _Nonnull g,
  double * _Nonnull cs,
  __LAPACK_double_complex * _Nonnull sn,
  __LAPACK_double_complex * _Nonnull r)
__LAPACK_ALIAS(zlartg)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
zlascl2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable d,
  __LAPACK_double_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx)
__LAPACK_ALIAS(zlascl2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlarfg_(
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nonnull alpha,
  __LAPACK_double_complex * _Nullable x,
  const __LAPACK_int * _Nonnull incx,
  __LAPACK_double_complex * _Nonnull tau)
__LAPACK_ALIAS(zlarfg)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlarfgp_(
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nonnull alpha,
  __LAPACK_double_complex * _Nullable x,
  const __LAPACK_int * _Nonnull incx,
  __LAPACK_double_complex * _Nonnull tau)
__LAPACK_ALIAS(zlarfgp)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhptrf_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable ap,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhptrf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlacon_(
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable v,
  __LAPACK_double_complex * _Nullable x,
  double * _Nonnull est,
  __LAPACK_int * _Nonnull kase)
__LAPACK_ALIAS(zlacon)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlarfp_(
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nonnull alpha,
  __LAPACK_double_complex * _Nullable x,
  const __LAPACK_int * _Nonnull incx,
  __LAPACK_double_complex * _Nonnull tau)
__LAPACK_ALIAS(zlarfp)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlarscl2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable d,
  __LAPACK_double_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx)
__LAPACK_ALIAS(zlarscl2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlauu2_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zlauu2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlauum_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zlauum)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zpotf2_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zpotf2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zpftrf_(
  const char * _Nonnull transr,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zpftrf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zpftri_(
  const char * _Nonnull transr,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zpftri)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zpotri_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zpotri)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ztptri_(
  const char * _Nonnull uplo,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable ap,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ztptri)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zsptrf_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable ap,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zsptrf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));












float
clanhs_(
  const char * _Nonnull norm,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable work)
__LAPACK_ALIAS(clanhs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



float
clangt_(
  const char * _Nonnull norm,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable dl,
  const __LAPACK_float_complex * _Nullable d,
  const __LAPACK_float_complex * _Nullable du)
__LAPACK_ALIAS(clangt)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



float
clanhp_(
  const char * _Nonnull norm,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable ap,
  float * _Nullable work)
__LAPACK_ALIAS(clanhp)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



float
clansp_(
  const char * _Nonnull norm,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable ap,
  float * _Nullable work)
__LAPACK_ALIAS(clansp)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



float
slanhs_(
  const char * _Nonnull norm,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable work)
__LAPACK_ALIAS(slanhs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



float
slangt_(
  const char * _Nonnull norm,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable dl,
  const float * _Nullable d,
  const float * _Nullable du)
__LAPACK_ALIAS(slangt)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



float
slansp_(
  const char * _Nonnull norm,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable ap,
  float * _Nullable work)
__LAPACK_ALIAS(slansp)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






double
dlanhs_(
  const char * _Nonnull norm,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable work)
__LAPACK_ALIAS(dlanhs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



double
dlangt_(
  const char * _Nonnull norm,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable dl,
  const double * _Nullable d,
  const double * _Nullable du)
__LAPACK_ALIAS(dlangt)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



double
dlansp_(
  const char * _Nonnull norm,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable ap,
  double * _Nullable work)
__LAPACK_ALIAS(dlansp)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



double
zlanhs_(
  const char * _Nonnull norm,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable work)
__LAPACK_ALIAS(zlanhs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



double
zlangt_(
  const char * _Nonnull norm,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable dl,
  const __LAPACK_double_complex * _Nullable d,
  const __LAPACK_double_complex * _Nullable du)
__LAPACK_ALIAS(zlangt)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



double
zlanhp_(
  const char * _Nonnull norm,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable ap,
  double * _Nullable work)
__LAPACK_ALIAS(zlanhp)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



double
zlansp_(
  const char * _Nonnull norm,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable ap,
  double * _Nullable work)
__LAPACK_ALIAS(zlansp)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));


















void
slamc5_(
  const __LAPACK_int * _Nonnull beta,
  const __LAPACK_int * _Nonnull p,
  const __LAPACK_int * _Nonnull emin,
  const __LAPACK_bool * _Nonnull ieee,
  __LAPACK_int * _Nonnull emax,
  float * _Nonnull rmax)
__LAPACK_ALIAS(slamc5)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
clacn2_(
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable v,
  __LAPACK_float_complex * _Nullable x,
  float * _Nonnull est,
  __LAPACK_int * _Nonnull kase,
  __LAPACK_int * _Nullable isave)
__LAPACK_ALIAS(clacn2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sladiv1_(
  float * _Nonnull a,
  const float * _Nonnull b,
  const float * _Nonnull c,
  const float * _Nonnull d,
  float * _Nonnull p,
  float * _Nonnull q)
__LAPACK_ALIAS(sladiv1)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sladiv_(
  const float * _Nonnull a,
  const float * _Nonnull b,
  const float * _Nonnull c,
  const float * _Nonnull d,
  float * _Nonnull p,
  float * _Nonnull q)
__LAPACK_ALIAS(sladiv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
cla_lin_berr_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nz,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_float_complex * _Nullable res,
  const float * _Nullable ayb,
  float * _Nullable berr)
__LAPACK_ALIAS(cla_lin_berr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
claqr1_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable h,
  const __LAPACK_int * _Nonnull ldh,
  const __LAPACK_float_complex * _Nonnull s1,
  const __LAPACK_float_complex * _Nonnull s2,
  __LAPACK_float_complex * _Nullable v)
__LAPACK_ALIAS(claqr1)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
clapmr_(
  const __LAPACK_bool * _Nonnull forwrd,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  __LAPACK_int * _Nullable k)
__LAPACK_ALIAS(clapmr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slamrg_(
  const __LAPACK_int * _Nonnull n1,
  const __LAPACK_int * _Nonnull n2,
  const float * _Nullable a,
  const __LAPACK_int * _Nonnull strd1,
  const __LAPACK_int * _Nonnull strd2,
  __LAPACK_int * _Nullable index)
__LAPACK_ALIAS(slamrg)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ctzrqf_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable tau,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ctzrqf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgetrf2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgetrf2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgetrf_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgetrf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
clapmt_(
  const __LAPACK_bool * _Nonnull forwrd,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  __LAPACK_int * _Nullable k)
__LAPACK_ALIAS(clapmt)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgetc2_(
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nullable jpiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgetc2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgetf2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgetf2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ctrti2_(
  const char * _Nonnull uplo,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ctrti2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ctrtri_(
  const char * _Nonnull uplo,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ctrtri)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
clapll_(
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable x,
  const __LAPACK_int * _Nonnull incx,
  __LAPACK_float_complex * _Nullable y,
  const __LAPACK_int * _Nonnull incy,
  float * _Nonnull ssmin)
__LAPACK_ALIAS(clapll)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slaed5_(
  const __LAPACK_int * _Nonnull i,
  const float * _Nullable d,
  const float * _Nullable z,
  float * _Nullable delta,
  const float * _Nonnull rho,
  float * _Nonnull dlam)
__LAPACK_ALIAS(slaed5)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cpbstf_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  __LAPACK_float_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cpbstf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chetf2_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chetf2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chetf2_rook_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chetf2_rook)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cheswapr_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nonnull i1,
  const __LAPACK_int * _Nonnull i2)
__LAPACK_ALIAS(cheswapr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chpgst_(
  const __LAPACK_int * _Nonnull itype,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable ap,
  const __LAPACK_float_complex * _Nullable bp,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chpgst)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
chptri_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable ap,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chptri)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
claunhr_col_getrfnp2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable d,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(claunhr_col_getrfnp2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
claunhr_col_getrfnp_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable d,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(claunhr_col_getrfnp)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cpbtf2_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  __LAPACK_float_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cpbtf2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cpbtrf_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  __LAPACK_float_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cpbtrf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ctftri_(
  const char * _Nonnull transr,
  const char * _Nonnull uplo,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ctftri)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cspr_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nonnull alpha,
  const __LAPACK_float_complex * _Nullable x,
  const __LAPACK_int * _Nonnull incx,
  __LAPACK_float_complex * _Nullable ap)
__LAPACK_ALIAS(cspr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
csptri_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable ap,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(csptri)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
csytf2_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(csytf2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
csytf2_rook_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(csytf2_rook)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
csyswapr_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nonnull i1,
  const __LAPACK_int * _Nonnull i2)
__LAPACK_ALIAS(csyswapr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ctfttp_(
  const char * _Nonnull transr,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable arf,
  __LAPACK_float_complex * _Nullable ap,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ctfttp)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ctpttf_(
  const char * _Nonnull transr,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable ap,
  __LAPACK_float_complex * _Nullable arf,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ctpttf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ctpttr_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable ap,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ctpttr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ctrttp_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable ap,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ctrttp)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlamc5_(
  const __LAPACK_int * _Nonnull beta,
  const __LAPACK_int * _Nonnull p,
  const __LAPACK_int * _Nonnull emin,
  const __LAPACK_bool * _Nonnull ieee,
  __LAPACK_int * _Nonnull emax,
  double * _Nonnull rmax)
__LAPACK_ALIAS(dlamc5)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlamrg_(
  const __LAPACK_int * _Nonnull n1,
  const __LAPACK_int * _Nonnull n2,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull dtrd1,
  const __LAPACK_int * _Nonnull dtrd2,
  __LAPACK_int * _Nullable index)
__LAPACK_ALIAS(dlamrg)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
ddisna_(
  const char * _Nonnull job,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable d,
  double * _Nullable sep,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ddisna)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dla_lin_berr_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nz,
  const __LAPACK_int * _Nonnull nrhs,
  const double * _Nullable res,
  const double * _Nullable ayb,
  double * _Nullable berr)
__LAPACK_ALIAS(dla_lin_berr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dladiv1_(
  double * _Nonnull a,
  const double * _Nonnull b,
  const double * _Nonnull c,
  const double * _Nonnull d,
  double * _Nonnull p,
  double * _Nonnull q)
__LAPACK_ALIAS(dladiv1)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dladiv_(
  const double * _Nonnull a,
  const double * _Nonnull b,
  const double * _Nonnull c,
  const double * _Nonnull d,
  double * _Nonnull p,
  double * _Nonnull q)
__LAPACK_ALIAS(dladiv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
dtzrqf_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable tau,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dtzrqf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgetrf2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgetrf2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgetrf_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgetrf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlapmt_(
  const __LAPACK_bool * _Nonnull forwrd,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  __LAPACK_int * _Nullable k)
__LAPACK_ALIAS(dlapmt)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgetc2_(
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nullable jpiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgetc2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgetf2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgetf2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dtrti2_(
  const char * _Nonnull uplo,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dtrti2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dtrtri_(
  const char * _Nonnull uplo,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dtrtri)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlapll_(
  const __LAPACK_int * _Nonnull n,
  double * _Nullable x,
  const __LAPACK_int * _Nonnull incx,
  double * _Nullable y,
  const __LAPACK_int * _Nonnull incy,
  double * _Nonnull ssmin)
__LAPACK_ALIAS(dlapll)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlacon_(
  const __LAPACK_int * _Nonnull n,
  double * _Nullable v,
  double * _Nullable x,
  __LAPACK_int * _Nullable isgn,
  double * _Nonnull est,
  __LAPACK_int * _Nonnull kase)
__LAPACK_ALIAS(dlacon)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlaed5_(
  const __LAPACK_int * _Nonnull i,
  const double * _Nullable d,
  const double * _Nullable z,
  double * _Nullable delta,
  const double * _Nonnull rho,
  double * _Nonnull dlam)
__LAPACK_ALIAS(dlaed5)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlaorhr_col_getrfnp2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable d,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlaorhr_col_getrfnp2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlaorhr_col_getrfnp_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable d,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlaorhr_col_getrfnp)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlapmr_(
  const __LAPACK_bool * _Nonnull forwrd,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  __LAPACK_int * _Nullable k)
__LAPACK_ALIAS(dlapmr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dpbstf_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  double * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dpbstf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dpbtf2_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  double * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dpbtf2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dpbtrf_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  double * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dpbtrf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dtftri_(
  const char * _Nonnull transr,
  const char * _Nonnull uplo,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dtftri)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
dptts2_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const double * _Nullable d,
  const double * _Nullable e,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb)
__LAPACK_ALIAS(dptts2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgetrf2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgetrf2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgetrf_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgetrf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dspgst_(
  const __LAPACK_int * _Nonnull itype,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable ap,
  const double * _Nullable bp,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dspgst)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsptri_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable ap,
  const __LAPACK_int * _Nullable ipiv,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsptri)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsytf2_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsytf2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsytf2_rook_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsytf2_rook)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsyswapr_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nonnull i1,
  const __LAPACK_int * _Nonnull i2)
__LAPACK_ALIAS(dsyswapr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dtfttp_(
  const char * _Nonnull transr,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable arf,
  double * _Nullable ap,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dtfttp)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dtpttf_(
  const char * _Nonnull transr,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable ap,
  double * _Nullable arf,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dtpttf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dtpttr_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable ap,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dtpttr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dtrttp_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable ap,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dtrttp)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sdisna_(
  const char * _Nonnull job,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable d,
  float * _Nullable sep,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sdisna)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sla_lin_berr_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nz,
  const __LAPACK_int * _Nonnull nrhs,
  const float * _Nullable res,
  const float * _Nullable ayb,
  float * _Nullable berr)
__LAPACK_ALIAS(sla_lin_berr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
stzrqf_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable tau,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(stzrqf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slapmt_(
  const __LAPACK_bool * _Nonnull forwrd,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  __LAPACK_int * _Nullable k)
__LAPACK_ALIAS(slapmt)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgetc2_(
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nullable jpiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgetc2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgetf2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgetf2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
strti2_(
  const char * _Nonnull uplo,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(strti2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
strtri_(
  const char * _Nonnull uplo,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(strtri)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slapll_(
  const __LAPACK_int * _Nonnull n,
  float * _Nullable x,
  const __LAPACK_int * _Nonnull incx,
  float * _Nullable y,
  const __LAPACK_int * _Nonnull incy,
  float * _Nonnull ssmin)
__LAPACK_ALIAS(slapll)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slacon_(
  const __LAPACK_int * _Nonnull n,
  float * _Nullable v,
  float * _Nullable x,
  __LAPACK_int * _Nullable isgn,
  float * _Nonnull est,
  __LAPACK_int * _Nonnull kase)
__LAPACK_ALIAS(slacon)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slaorhr_col_getrfnp2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable d,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slaorhr_col_getrfnp2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slaorhr_col_getrfnp_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable d,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slaorhr_col_getrfnp)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slapmr_(
  const __LAPACK_bool * _Nonnull forwrd,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  __LAPACK_int * _Nullable k)
__LAPACK_ALIAS(slapmr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
spbstf_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  float * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(spbstf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
spbtf2_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  float * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(spbtf2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
spbtrf_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  float * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(spbtrf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
stftri_(
  const char * _Nonnull transr,
  const char * _Nonnull uplo,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(stftri)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
sptts2_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const float * _Nullable d,
  const float * _Nullable e,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb)
__LAPACK_ALIAS(sptts2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sspgst_(
  const __LAPACK_int * _Nonnull itype,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable ap,
  const float * _Nullable bp,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sspgst)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssptri_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable ap,
  const __LAPACK_int * _Nullable ipiv,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssptri)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssytf2_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssytf2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssytf2_rook_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssytf2_rook)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssyswapr_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nonnull i1,
  const __LAPACK_int * _Nonnull i2)
__LAPACK_ALIAS(ssyswapr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
stfttp_(
  const char * _Nonnull transr,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable arf,
  float * _Nullable ap,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(stfttp)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
stpttf_(
  const char * _Nonnull transr,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable ap,
  float * _Nullable arf,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(stpttf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
stpttr_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable ap,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(stpttr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
strttp_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable ap,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(strttp)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgetrf2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgetrf2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgetrf_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgetrf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
zlacn2_(
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable v,
  __LAPACK_double_complex * _Nullable x,
  double * _Nonnull est,
  __LAPACK_int * _Nonnull kase,
  __LAPACK_int * _Nullable isave)
__LAPACK_ALIAS(zlacn2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zla_lin_berr_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nz,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_double_complex * _Nullable res,
  const double * _Nullable ayb,
  double * _Nullable berr)
__LAPACK_ALIAS(zla_lin_berr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlaqr1_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable h,
  const __LAPACK_int * _Nonnull ldh,
  const __LAPACK_double_complex * _Nonnull s1,
  const __LAPACK_double_complex * _Nonnull s2,
  __LAPACK_double_complex * _Nullable v)
__LAPACK_ALIAS(zlaqr1)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlapmr_(
  const __LAPACK_bool * _Nonnull forwrd,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  __LAPACK_int * _Nullable k)
__LAPACK_ALIAS(zlapmr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ztzrqf_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable tau,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ztzrqf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlapmt_(
  const __LAPACK_bool * _Nonnull forwrd,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  __LAPACK_int * _Nullable k)
__LAPACK_ALIAS(zlapmt)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgetc2_(
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nullable jpiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgetc2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgetf2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgetf2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ztrti2_(
  const char * _Nonnull uplo,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ztrti2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ztrtri_(
  const char * _Nonnull uplo,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ztrtri)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlapll_(
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable x,
  const __LAPACK_int * _Nonnull incx,
  __LAPACK_double_complex * _Nullable y,
  const __LAPACK_int * _Nonnull incy,
  double * _Nonnull ssmin)
__LAPACK_ALIAS(zlapll)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zpbstf_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  __LAPACK_double_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zpbstf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhetf2_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhetf2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhetf2_rook_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhetf2_rook)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zheswapr_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nonnull i1,
  const __LAPACK_int * _Nonnull i2)
__LAPACK_ALIAS(zheswapr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhpgst_(
  const __LAPACK_int * _Nonnull itype,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable ap,
  const __LAPACK_double_complex * _Nullable bp,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhpgst)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
zhptri_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable ap,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhptri)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlaunhr_col_getrfnp2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable d,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zlaunhr_col_getrfnp2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlaunhr_col_getrfnp_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable d,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zlaunhr_col_getrfnp)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zpbtf2_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  __LAPACK_double_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zpbtf2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zpbtrf_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  __LAPACK_double_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zpbtrf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ztftri_(
  const char * _Nonnull transr,
  const char * _Nonnull uplo,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ztftri)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zspr_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nonnull alpha,
  const __LAPACK_double_complex * _Nullable x,
  const __LAPACK_int * _Nonnull incx,
  __LAPACK_double_complex * _Nullable ap)
__LAPACK_ALIAS(zspr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zsptri_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable ap,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zsptri)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zsytf2_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zsytf2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zsytf2_rook_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zsytf2_rook)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zsyswapr_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nonnull i1,
  const __LAPACK_int * _Nonnull i2)
__LAPACK_ALIAS(zsyswapr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ztfttp_(
  const char * _Nonnull transr,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable arf,
  __LAPACK_double_complex * _Nullable ap,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ztfttp)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ztpttf_(
  const char * _Nonnull transr,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable ap,
  __LAPACK_double_complex * _Nullable arf,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ztpttf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ztpttr_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable ap,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ztpttr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ztrttp_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable ap,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ztrttp)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



__LAPACK_int
slaneg_(
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable d,
  const float * _Nullable lld,
  const float * _Nonnull sigma,
  const float * _Nonnull pivmin,
  const __LAPACK_int * _Nonnull r)
__LAPACK_ALIAS(slaneg)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



__LAPACK_int
dlaneg_(
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable d,
  const double * _Nullable lld,
  const double * _Nonnull sigma,
  const double * _Nonnull pivmin,
  const __LAPACK_int * _Nonnull r)
__LAPACK_ALIAS(dlaneg)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



float
sladiv2_(
  const float * _Nonnull a,
  const float * _Nonnull b,
  const float * _Nonnull c,
  const float * _Nonnull d,
  const float * _Nonnull r,
  const float * _Nonnull t)
__LAPACK_ALIAS(sladiv2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



float
clange_(
  const char * _Nonnull norm,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable work)
__LAPACK_ALIAS(clange)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



float
cla_gerpvgrw_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ncols,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf)
__LAPACK_ALIAS(cla_gerpvgrw)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



float
clanhe_(
  const char * _Nonnull norm,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable work)
__LAPACK_ALIAS(clanhe)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



float
clansy_(
  const char * _Nonnull norm,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable work)
__LAPACK_ALIAS(clansy)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



float
clanhf_(
  const char * _Nonnull norm,
  const char * _Nonnull transr,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable a,
  float * _Nullable work)
__LAPACK_ALIAS(clanhf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



float
clantp_(
  const char * _Nonnull norm,
  const char * _Nonnull uplo,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable ap,
  float * _Nullable work)
__LAPACK_ALIAS(clantp)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



float
slange_(
  const char * _Nonnull norm,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable work)
__LAPACK_ALIAS(slange)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



float
sla_gerpvgrw_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ncols,
  const float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf)
__LAPACK_ALIAS(sla_gerpvgrw)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



float
slansf_(
  const char * _Nonnull norm,
  const char * _Nonnull transr,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable a,
  float * _Nullable work)
__LAPACK_ALIAS(slansf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



float
slansy_(
  const char * _Nonnull norm,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable work)
__LAPACK_ALIAS(slansy)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



float
slantp_(
  const char * _Nonnull norm,
  const char * _Nonnull uplo,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable ap,
  float * _Nullable work)
__LAPACK_ALIAS(slantp)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






double
dlange_(
  const char * _Nonnull norm,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable work)
__LAPACK_ALIAS(dlange)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



double
dladiv2_(
  const double * _Nonnull a,
  const double * _Nonnull b,
  const double * _Nonnull c,
  const double * _Nonnull d,
  const double * _Nonnull r,
  const double * _Nonnull t)
__LAPACK_ALIAS(dladiv2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



double
dla_gerpvgrw_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ncols,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf)
__LAPACK_ALIAS(dla_gerpvgrw)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



double
dlansf_(
  const char * _Nonnull norm,
  const char * _Nonnull transr,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable a,
  double * _Nullable work)
__LAPACK_ALIAS(dlansf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



double
dlansy_(
  const char * _Nonnull norm,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable work)
__LAPACK_ALIAS(dlansy)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



double
dlantp_(
  const char * _Nonnull norm,
  const char * _Nonnull uplo,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable ap,
  double * _Nullable work)
__LAPACK_ALIAS(dlantp)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



double
zlange_(
  const char * _Nonnull norm,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable work)
__LAPACK_ALIAS(zlange)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



double
zlanhe_(
  const char * _Nonnull norm,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable work)
__LAPACK_ALIAS(zlanhe)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



double
zla_gerpvgrw_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ncols,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf)
__LAPACK_ALIAS(zla_gerpvgrw)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



double
zlansy_(
  const char * _Nonnull norm,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable work)
__LAPACK_ALIAS(zlansy)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));


double
zlanhf_(
  const char * _Nonnull norm,
  const char * _Nonnull transr,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable a,
  double * _Nullable work)
__LAPACK_ALIAS(zlanhf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



double
zlantp_(
  const char * _Nonnull norm,
  const char * _Nonnull uplo,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable ap,
  double * _Nullable work)
__LAPACK_ALIAS(zlantp)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
clargv_(
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable x,
  const __LAPACK_int * _Nonnull incx,
  __LAPACK_float_complex * _Nullable y,
  const __LAPACK_int * _Nonnull incy,
  float * _Nullable c,
  const __LAPACK_int * _Nonnull incc)
__LAPACK_ALIAS(clargv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
claset_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nonnull alpha,
  const __LAPACK_float_complex * _Nonnull beta,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda)
__LAPACK_ALIAS(claset)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
crot_(
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable cx,
  const __LAPACK_int * _Nonnull incx,
  __LAPACK_float_complex * _Nullable cy,
  const __LAPACK_int * _Nonnull incy,
  const float * _Nonnull c,
  const __LAPACK_float_complex * _Nonnull s)
__LAPACK_ALIAS(crot)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
claswp_(
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nonnull k1,
  const __LAPACK_int * _Nonnull k2,
  const __LAPACK_int * _Nullable ipiv,
  const __LAPACK_int * _Nonnull incx)
__LAPACK_ALIAS(claswp)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
clacpy_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb)
__LAPACK_ALIAS(clacpy)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgeqr2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable tau,
  __LAPACK_float_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgeqr2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgelq2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable tau,
  __LAPACK_float_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgelq2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgelqt3_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgelqt3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slasdt_(
  const __LAPACK_int * _Nonnull n,
  __LAPACK_int * _Nonnull lvl,
  __LAPACK_int * _Nonnull nd,
  __LAPACK_int * _Nullable inode,
  __LAPACK_int * _Nullable ndiml,
  __LAPACK_int * _Nullable ndimr,
  const __LAPACK_int * _Nonnull msub)
__LAPACK_ALIAS(slasdt)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
slasd5_(
  const __LAPACK_int * _Nonnull i,
  const float * _Nullable d,
  const float * _Nullable z,
  float * _Nullable delta,
  const float * _Nonnull rho,
  float * _Nonnull dsigma,
  float * _Nullable work)
__LAPACK_ALIAS(slasd5)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slaset_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const float * _Nonnull alpha,
  const float * _Nonnull beta,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda)
__LAPACK_ALIAS(slaset)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
clatrz_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull l,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable tau,
  __LAPACK_float_complex * _Nullable work)
__LAPACK_ALIAS(clatrz)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgeql2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable tau,
  __LAPACK_float_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgeql2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgeqrt2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgeqrt2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgeqrt3_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgeqrt3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgeqr2p_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable tau,
  __LAPACK_float_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgeqr2p)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgerq2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable tau,
  __LAPACK_float_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgerq2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgesc2_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable rhs,
  const __LAPACK_int * _Nullable ipiv,
  const __LAPACK_int * _Nullable jpiv,
  float * _Nonnull scale)
__LAPACK_ALIAS(cgesc2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
clacp2_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb)
__LAPACK_ALIAS(clacp2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slacpy_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb)
__LAPACK_ALIAS(slacpy)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slaev2_(
  const float * _Nonnull a,
  const float * _Nonnull b,
  const float * _Nonnull c,
  float * _Nonnull rt1,
  float * _Nonnull rt2,
  float * _Nonnull cs1,
  float * _Nonnull sn1)
__LAPACK_ALIAS(slaev2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgetri_(
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgetri)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgttrf_(
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable dl,
  __LAPACK_float_complex * _Nullable d,
  __LAPACK_float_complex * _Nullable du,
  __LAPACK_float_complex * _Nullable du2,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgttrf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
chetf2_rk_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable e,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chetf2_rk)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chetri_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chetri)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chetri_rook_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chetri_rook)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chptrd_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable ap,
  float * _Nullable d,
  float * _Nullable e,
  __LAPACK_float_complex * _Nullable tau,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chptrd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));









void
clacrt_(
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable cx,
  const __LAPACK_int * _Nonnull incx,
  __LAPACK_float_complex * _Nullable cy,
  const __LAPACK_int * _Nonnull incy,
  const __LAPACK_float_complex * _Nonnull c,
  const __LAPACK_float_complex * _Nonnull s)
__LAPACK_ALIAS(clacrt)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
claev2_(
  const __LAPACK_float_complex * _Nonnull a,
  const __LAPACK_float_complex * _Nonnull b,
  const __LAPACK_float_complex * _Nonnull c,
  float * _Nonnull rt1,
  float * _Nonnull rt2,
  float * _Nonnull cs1,
  __LAPACK_float_complex * _Nonnull sn1)
__LAPACK_ALIAS(claev2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
clag2z_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable sa,
  const __LAPACK_int * _Nonnull ldsa,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(clag2z)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
claqhp_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable ap,
  const float * _Nullable s,
  const float * _Nonnull scond,
  const float * _Nonnull amax,
  char * _Nonnull equed)
__LAPACK_ALIAS(claqhp)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
claqsp_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable ap,
  const float * _Nullable s,
  const float * _Nonnull scond,
  const float * _Nonnull amax,
  char * _Nonnull equed)
__LAPACK_ALIAS(claqsp)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cpoequ_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable s,
  float * _Nonnull scond,
  float * _Nonnull amax,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cpoequ)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cpoequb_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable s,
  float * _Nonnull scond,
  float * _Nonnull amax,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cpoequb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cppequ_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable ap,
  float * _Nullable s,
  float * _Nonnull scond,
  float * _Nonnull amax,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cppequ)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cpptrs_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_float_complex * _Nullable ap,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cpptrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cppsv_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_float_complex * _Nullable ap,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cppsv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cptcon_(
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable d,
  const __LAPACK_float_complex * _Nullable e,
  const float * _Nonnull anorm,
  float * _Nonnull rcond,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cptcon)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cptts2_(
  const __LAPACK_int * _Nonnull iuplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const float * _Nullable d,
  const __LAPACK_float_complex * _Nullable e,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb)
__LAPACK_ALIAS(cptts2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cptsv_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  float * _Nullable d,
  __LAPACK_float_complex * _Nullable e,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cptsv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
csyr_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nonnull alpha,
  const __LAPACK_float_complex * _Nullable x,
  const __LAPACK_int * _Nonnull incx,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda)
__LAPACK_ALIAS(csyr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
csytf2_rk_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable e,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(csytf2_rk)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
csytri_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(csytri)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
csytri_rook_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(csytri_rook)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ctfttr_(
  const char * _Nonnull transr,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable arf,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ctfttr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ctrttf_(
  const char * _Nonnull transr,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable arf,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ctrttf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlacpy_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb)
__LAPACK_ALIAS(dlacpy)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlaset_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const double * _Nonnull alpha,
  const double * _Nonnull beta,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda)
__LAPACK_ALIAS(dlaset)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
dlasd5_(
  const __LAPACK_int * _Nonnull i,
  const double * _Nullable d,
  const double * _Nullable z,
  double * _Nullable delta,
  const double * _Nonnull rho,
  double * _Nonnull dsigma,
  double * _Nullable work)
__LAPACK_ALIAS(dlasd5)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlasdt_(
  const __LAPACK_int * _Nonnull n,
  __LAPACK_int * _Nonnull lvl,
  __LAPACK_int * _Nonnull nd,
  __LAPACK_int * _Nullable inode,
  __LAPACK_int * _Nullable ndiml,
  __LAPACK_int * _Nullable ndimr,
  const __LAPACK_int * _Nonnull msub)
__LAPACK_ALIAS(dlasdt)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlaev2_(
  const double * _Nonnull a,
  const double * _Nonnull b,
  const double * _Nonnull c,
  double * _Nonnull rt1,
  double * _Nonnull rt2,
  double * _Nonnull cs1,
  double * _Nonnull sn1)
__LAPACK_ALIAS(dlaev2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlargv_(
  const __LAPACK_int * _Nonnull n,
  double * _Nullable x,
  const __LAPACK_int * _Nonnull incx,
  double * _Nullable y,
  const __LAPACK_int * _Nonnull incy,
  double * _Nullable c,
  const __LAPACK_int * _Nonnull incc)
__LAPACK_ALIAS(dlargv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlacn2_(
  const __LAPACK_int * _Nonnull n,
  double * _Nullable v,
  double * _Nullable x,
  __LAPACK_int * _Nullable isgn,
  double * _Nonnull est,
  __LAPACK_int * _Nonnull kase,
  __LAPACK_int * _Nullable isave)
__LAPACK_ALIAS(dlacn2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlaswp_(
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nonnull k1,
  const __LAPACK_int * _Nonnull k2,
  const __LAPACK_int * _Nullable ipiv,
  const __LAPACK_int * _Nonnull incx)
__LAPACK_ALIAS(dlaswp)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgeqr2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable tau,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgeqr2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgelq2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable tau,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgelq2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgelqt3_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgelqt3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlatrz_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull l,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable tau,
  double * _Nullable work)
__LAPACK_ALIAS(dlatrz)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgeql2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable tau,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgeql2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgeqrt2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgeqrt2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgeqrt3_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgeqrt3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgeqr2p_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable tau,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgeqr2p)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgerq2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable tau,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgerq2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgesc2_(
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable rhs,
  const __LAPACK_int * _Nullable ipiv,
  const __LAPACK_int * _Nullable jpiv,
  double * _Nonnull scale)
__LAPACK_ALIAS(dgesc2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgetri_(
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgetri)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgttrf_(
  const __LAPACK_int * _Nonnull n,
  double * _Nullable dl,
  double * _Nullable d,
  double * _Nullable du,
  double * _Nullable du2,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgttrf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlag2s_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable sa,
  const __LAPACK_int * _Nonnull ldsa,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlag2s)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlaqsp_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable ap,
  const double * _Nullable s,
  const double * _Nonnull scond,
  const double * _Nonnull amax,
  char * _Nonnull equed)
__LAPACK_ALIAS(dlaqsp)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlat2s_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable sa,
  const __LAPACK_int * _Nonnull ldsa,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlat2s)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));









void
dpoequ_(
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable s,
  double * _Nonnull scond,
  double * _Nonnull amax,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dpoequ)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dpoequb_(
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable s,
  double * _Nonnull scond,
  double * _Nonnull amax,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dpoequb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dppequ_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable ap,
  double * _Nullable s,
  double * _Nonnull scond,
  double * _Nonnull amax,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dppequ)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dpptrs_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const double * _Nullable ap,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dpptrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dppsv_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  double * _Nullable ap,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dppsv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
dptcon_(
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable d,
  const double * _Nullable e,
  const double * _Nonnull anorm,
  double * _Nonnull rcond,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dptcon)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dpttrs_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const double * _Nullable d,
  const double * _Nullable e,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dpttrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dptsv_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  double * _Nullable d,
  double * _Nullable e,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dptsv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slaswp_(
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nonnull k1,
  const __LAPACK_int * _Nonnull k2,
  const __LAPACK_int * _Nullable ipiv,
  const __LAPACK_int * _Nonnull incx)
__LAPACK_ALIAS(slaswp)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slag2d_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable sa,
  const __LAPACK_int * _Nonnull ldsa,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slag2d)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsptrd_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable ap,
  double * _Nullable d,
  double * _Nullable e,
  double * _Nullable tau,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsptrd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsytf2_rk_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable e,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsytf2_rk)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsytri_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsytri)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsytri_rook_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsytri_rook)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dtfttr_(
  const char * _Nonnull transr,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable arf,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dtfttr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dtrttf_(
  const char * _Nonnull transr,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable arf,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dtrttf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slargv_(
  const __LAPACK_int * _Nonnull n,
  float * _Nullable x,
  const __LAPACK_int * _Nonnull incx,
  float * _Nullable y,
  const __LAPACK_int * _Nonnull incy,
  float * _Nullable c,
  const __LAPACK_int * _Nonnull incc)
__LAPACK_ALIAS(slargv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slacn2_(
  const __LAPACK_int * _Nonnull n,
  float * _Nullable v,
  float * _Nullable x,
  __LAPACK_int * _Nullable isgn,
  float * _Nonnull est,
  __LAPACK_int * _Nonnull kase,
  __LAPACK_int * _Nullable isave)
__LAPACK_ALIAS(slacn2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgeqr2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable tau,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgeqr2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgelq2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable tau,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgelq2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgelqt3_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgelqt3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgeqrt2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgeqrt2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgeqrt3_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgeqrt3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slatrz_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull l,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable tau,
  float * _Nullable work)
__LAPACK_ALIAS(slatrz)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgeql2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable tau,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgeql2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgeqr2p_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable tau,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgeqr2p)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgerq2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable tau,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgerq2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgesc2_(
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable rhs,
  const __LAPACK_int * _Nullable ipiv,
  const __LAPACK_int * _Nullable jpiv,
  float * _Nonnull scale)
__LAPACK_ALIAS(sgesc2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgetri_(
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgetri)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgttrf_(
  const __LAPACK_int * _Nonnull n,
  float * _Nullable dl,
  float * _Nullable d,
  float * _Nullable du,
  float * _Nullable du2,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgttrf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slaqsp_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable ap,
  const float * _Nullable s,
  const float * _Nonnull scond,
  const float * _Nonnull amax,
  char * _Nonnull equed)
__LAPACK_ALIAS(slaqsp)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));









void
spoequ_(
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable s,
  float * _Nonnull scond,
  float * _Nonnull amax,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(spoequ)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
spoequb_(
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable s,
  float * _Nonnull scond,
  float * _Nonnull amax,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(spoequb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sppequ_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable ap,
  float * _Nullable s,
  float * _Nonnull scond,
  float * _Nonnull amax,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sppequ)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
spptrs_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const float * _Nullable ap,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(spptrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sppsv_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  float * _Nullable ap,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sppsv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
sptcon_(
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable d,
  const float * _Nullable e,
  const float * _Nonnull anorm,
  float * _Nonnull rcond,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sptcon)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
spttrs_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const float * _Nullable d,
  const float * _Nullable e,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(spttrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sptsv_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  float * _Nullable d,
  float * _Nullable e,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sptsv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssptrd_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable ap,
  float * _Nullable d,
  float * _Nullable e,
  float * _Nullable tau,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssptrd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssytf2_rk_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable e,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssytf2_rk)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssytri_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssytri)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssytri_rook_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssytri_rook)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
stfttr_(
  const char * _Nonnull transr,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable arf,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(stfttr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
strttf_(
  const char * _Nonnull transr,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable arf,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(strttf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
zlaswp_(
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nonnull k1,
  const __LAPACK_int * _Nonnull k2,
  const __LAPACK_int * _Nullable ipiv,
  const __LAPACK_int * _Nonnull incx)
__LAPACK_ALIAS(zlaswp)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlacpy_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb)
__LAPACK_ALIAS(zlacpy)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlag2c_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable sa,
  const __LAPACK_int * _Nonnull ldsa,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zlag2c)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlat2c_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable sa,
  const __LAPACK_int * _Nonnull ldsa,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zlat2c)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlargv_(
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable x,
  const __LAPACK_int * _Nonnull incx,
  __LAPACK_double_complex * _Nullable y,
  const __LAPACK_int * _Nonnull incy,
  double * _Nullable c,
  const __LAPACK_int * _Nonnull incc)
__LAPACK_ALIAS(zlargv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlaset_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nonnull alpha,
  const __LAPACK_double_complex * _Nonnull beta,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda)
__LAPACK_ALIAS(zlaset)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zrot_(
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable cx,
  const __LAPACK_int * _Nonnull incx,
  __LAPACK_double_complex * _Nullable cy,
  const __LAPACK_int * _Nonnull incy,
  const double * _Nonnull c,
  const __LAPACK_double_complex * _Nonnull s)
__LAPACK_ALIAS(zrot)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgeqr2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable tau,
  __LAPACK_double_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgeqr2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgelq2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable tau,
  __LAPACK_double_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgelq2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgelqt3_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgelqt3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlatrz_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull l,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable tau,
  __LAPACK_double_complex * _Nullable work)
__LAPACK_ALIAS(zlatrz)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgeql2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable tau,
  __LAPACK_double_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgeql2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgeqrt2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgeqrt2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgeqrt3_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgeqrt3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgeqr2p_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable tau,
  __LAPACK_double_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgeqr2p)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgerq2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable tau,
  __LAPACK_double_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgerq2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgesc2_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable rhs,
  const __LAPACK_int * _Nullable ipiv,
  const __LAPACK_int * _Nullable jpiv,
  double * _Nonnull scale)
__LAPACK_ALIAS(zgesc2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlacp2_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb)
__LAPACK_ALIAS(zlacp2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgetri_(
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgetri)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgttrf_(
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable dl,
  __LAPACK_double_complex * _Nullable d,
  __LAPACK_double_complex * _Nullable du,
  __LAPACK_double_complex * _Nullable du2,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgttrf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
zhetf2_rk_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable e,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhetf2_rk)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhetri_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhetri)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhetri_rook_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhetri_rook)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhptrd_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable ap,
  double * _Nullable d,
  double * _Nullable e,
  __LAPACK_double_complex * _Nullable tau,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhptrd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));









void
zlacrt_(
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable cx,
  const __LAPACK_int * _Nonnull incx,
  __LAPACK_double_complex * _Nullable cy,
  const __LAPACK_int * _Nonnull incy,
  const __LAPACK_double_complex * _Nonnull c,
  const __LAPACK_double_complex * _Nonnull s)
__LAPACK_ALIAS(zlacrt)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlaev2_(
  const __LAPACK_double_complex * _Nonnull a,
  const __LAPACK_double_complex * _Nonnull b,
  const __LAPACK_double_complex * _Nonnull c,
  double * _Nonnull rt1,
  double * _Nonnull rt2,
  double * _Nonnull cs1,
  __LAPACK_double_complex * _Nonnull sn1)
__LAPACK_ALIAS(zlaev2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlaqhp_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable ap,
  const double * _Nullable s,
  const double * _Nonnull scond,
  const double * _Nonnull amax,
  char * _Nonnull equed)
__LAPACK_ALIAS(zlaqhp)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlaqsp_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable ap,
  const double * _Nullable s,
  const double * _Nonnull scond,
  const double * _Nonnull amax,
  char * _Nonnull equed)
__LAPACK_ALIAS(zlaqsp)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zpoequ_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable s,
  double * _Nonnull scond,
  double * _Nonnull amax,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zpoequ)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zpoequb_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable s,
  double * _Nonnull scond,
  double * _Nonnull amax,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zpoequb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zppequ_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable ap,
  double * _Nullable s,
  double * _Nonnull scond,
  double * _Nonnull amax,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zppequ)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zpptrs_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_double_complex * _Nullable ap,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zpptrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zppsv_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_double_complex * _Nullable ap,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zppsv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zptcon_(
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable d,
  const __LAPACK_double_complex * _Nullable e,
  const double * _Nonnull anorm,
  double * _Nonnull rcond,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zptcon)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zptts2_(
  const __LAPACK_int * _Nonnull iuplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const double * _Nullable d,
  const __LAPACK_double_complex * _Nullable e,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb)
__LAPACK_ALIAS(zptts2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zptsv_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  double * _Nullable d,
  __LAPACK_double_complex * _Nullable e,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zptsv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zsyr_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nonnull alpha,
  const __LAPACK_double_complex * _Nullable x,
  const __LAPACK_int * _Nonnull incx,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda)
__LAPACK_ALIAS(zsyr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zsytf2_rk_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable e,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zsytf2_rk)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zsytri_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zsytri)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zsytri_rook_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zsytri_rook)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ztfttr_(
  const char * _Nonnull transr,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable arf,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ztfttr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ztrttf_(
  const char * _Nonnull transr,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable arf,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ztrttf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



__LAPACK_int
iparmq_(
  const __LAPACK_int * _Nonnull ispec,
  const char * _Nonnull name,
  const char * _Nonnull opts,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ilo,
  const __LAPACK_int * _Nonnull ihi,
  const __LAPACK_int * _Nonnull lwork)
__LAPACK_ALIAS(iparmq)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



__LAPACK_int
iparam2stage_(
  const __LAPACK_int * _Nonnull ispec,
  const char * _Nonnull name,
  const char * _Nonnull opts,
  const __LAPACK_int * _Nonnull ni,
  const __LAPACK_int * _Nonnull nbi,
  const __LAPACK_int * _Nonnull ibi,
  const __LAPACK_int * _Nonnull nxi)
__LAPACK_ALIAS(iparam2stage)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



__LAPACK_int
ilaenv_(
  const __LAPACK_int * _Nonnull ispec,
  const char * _Nonnull name,
  const char * _Nonnull opts,
  const __LAPACK_int * _Nonnull n1,
  const __LAPACK_int * _Nonnull n2,
  const __LAPACK_int * _Nonnull n3,
  const __LAPACK_int * _Nonnull n4)
__LAPACK_ALIAS(ilaenv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



__LAPACK_int
ilaenv2stage_(
  const __LAPACK_int * _Nonnull ispec,
  const char * _Nonnull name,
  const char * _Nonnull opts,
  const __LAPACK_int * _Nonnull n1,
  const __LAPACK_int * _Nonnull n2,
  const __LAPACK_int * _Nonnull n3,
  const __LAPACK_int * _Nonnull n4)
__LAPACK_ALIAS(ilaenv2stage)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



float
clangb_(
  const char * _Nonnull norm,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  const __LAPACK_float_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  float * _Nullable work)
__LAPACK_ALIAS(clangb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



float
clanhb_(
  const char * _Nonnull norm,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_float_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  float * _Nullable work)
__LAPACK_ALIAS(clanhb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



float
cla_porpvgrw_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull ncols,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  float * _Nullable work)
__LAPACK_ALIAS(cla_porpvgrw)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



float
clansb_(
  const char * _Nonnull norm,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_float_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  float * _Nullable work)
__LAPACK_ALIAS(clansb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



float
slangb_(
  const char * _Nonnull norm,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  const float * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  float * _Nullable work)
__LAPACK_ALIAS(slangb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



float
sla_porpvgrw_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull ncols,
  const float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  float * _Nullable work)
__LAPACK_ALIAS(sla_porpvgrw)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



float
slansb_(
  const char * _Nonnull norm,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const float * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  float * _Nullable work)
__LAPACK_ALIAS(slansb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



double
dlangb_(
  const char * _Nonnull norm,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  const double * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  double * _Nullable work)
__LAPACK_ALIAS(dlangb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



double
dla_porpvgrw_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull ncols,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  double * _Nullable work)
__LAPACK_ALIAS(dla_porpvgrw)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



double
dlansb_(
  const char * _Nonnull norm,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const double * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  double * _Nullable work)
__LAPACK_ALIAS(dlansb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



double
zlangb_(
  const char * _Nonnull norm,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  const __LAPACK_double_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  double * _Nullable work)
__LAPACK_ALIAS(zlangb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



double
zlanhb_(
  const char * _Nonnull norm,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_double_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  double * _Nullable work)
__LAPACK_ALIAS(zlanhb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



double
zla_porpvgrw_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull ncols,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  double * _Nullable work)
__LAPACK_ALIAS(zla_porpvgrw)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



double
zlansb_(
  const char * _Nonnull norm,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_double_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  double * _Nullable work)
__LAPACK_ALIAS(zlansb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slamc2_(
  __LAPACK_int * _Nonnull beta,
  __LAPACK_int * _Nonnull t,
  __LAPACK_bool * _Nonnull rnd,
  float * _Nonnull eps,
  __LAPACK_int * _Nonnull emin,
  float * _Nonnull rmin,
  __LAPACK_int * _Nonnull emax,
  float * _Nonnull rmax)
__LAPACK_ALIAS(slamc2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
clartv_(
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable x,
  const __LAPACK_int * _Nonnull incx,
  __LAPACK_float_complex * _Nullable y,
  const __LAPACK_int * _Nonnull incy,
  const float * _Nullable c,
  const __LAPACK_float_complex * _Nullable s,
  const __LAPACK_int * _Nonnull incc)
__LAPACK_ALIAS(clartv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgbtf2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  __LAPACK_float_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgbtf2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgbtrf_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  __LAPACK_float_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgbtrf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgebal_(
  const char * _Nonnull job,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nonnull ilo,
  __LAPACK_int * _Nonnull ihi,
  float * _Nullable scale,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgebal)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
cgehd2_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ilo,
  const __LAPACK_int * _Nonnull ihi,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable tau,
  __LAPACK_float_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgehd2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
cung2r_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable tau,
  __LAPACK_float_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cung2r)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgeqrf_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable tau,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgeqrf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgelqf_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable tau,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgelqf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slaed6_(
  const __LAPACK_int * _Nonnull kniter,
  const __LAPACK_bool * _Nonnull orgati,
  const float * _Nonnull rho,
  const float * _Nullable d,
  const float * _Nullable z,
  const float * _Nonnull finit,
  float * _Nonnull tau,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slaed6)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cungl2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable tau,
  __LAPACK_float_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cungl2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ctzrzf_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable tau,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ctzrzf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgeqlf_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable tau,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgeqlf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgeqrfp_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable tau,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgeqrfp)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgerqf_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable tau,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgerqf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgesv_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgesv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssteqr_(
  const char * _Nonnull compz,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable d,
  float * _Nullable e,
  float * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssteqr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgtsv_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_float_complex * _Nullable dl,
  __LAPACK_float_complex * _Nullable d,
  __LAPACK_float_complex * _Nullable du,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgtsv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
clarfx_(
  const char * _Nonnull side,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable v,
  const __LAPACK_float_complex * _Nonnull tau,
  __LAPACK_float_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  __LAPACK_float_complex * _Nullable work)
__LAPACK_ALIAS(clarfx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
clarfy_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable v,
  const __LAPACK_int * _Nonnull incv,
  const __LAPACK_float_complex * _Nonnull tau,
  __LAPACK_float_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  __LAPACK_float_complex * _Nullable work)
__LAPACK_ALIAS(clarfy)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
clar2v_(
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable x,
  __LAPACK_float_complex * _Nullable y,
  __LAPACK_float_complex * _Nullable z,
  const __LAPACK_int * _Nonnull incx,
  const float * _Nullable c,
  const __LAPACK_float_complex * _Nullable s,
  const __LAPACK_int * _Nonnull incc)
__LAPACK_ALIAS(clar2v)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
csteqr_(
  const char * _Nonnull compz,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable d,
  float * _Nullable e,
  __LAPACK_float_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(csteqr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slaed4_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull i,
  const float * _Nullable d,
  const float * _Nullable z,
  float * _Nullable delta,
  const float * _Nonnull rho,
  float * _Nonnull dlam,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slaed4)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chetd2_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable d,
  float * _Nullable e,
  __LAPACK_float_complex * _Nullable tau,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chetd2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cung2l_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable tau,
  __LAPACK_float_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cung2l)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cungtr_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable tau,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cungtr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chegs2_(
  const __LAPACK_int * _Nonnull itype,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chegs2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chegst_(
  const __LAPACK_int * _Nonnull itype,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chegst)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chetrf_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chetrf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
csyconv_(
  const char * _Nonnull uplo,
  const char * _Nonnull way,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nullable e,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(csyconv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chetrf_aa_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chetrf_aa)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chetrf_rook_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chetrf_rook)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
claqhe_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable s,
  const float * _Nonnull scond,
  const float * _Nonnull amax,
  char * _Nonnull equed)
__LAPACK_ALIAS(claqhe)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chetri2x_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chetri2x)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chetri2_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chetri2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chptrs_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_float_complex * _Nullable ap,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chptrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chpcon_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable ap,
  const __LAPACK_int * _Nullable ipiv,
  const float * _Nonnull anorm,
  float * _Nonnull rcond,
  __LAPACK_float_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chpcon)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
cupgtr_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable ap,
  const __LAPACK_float_complex * _Nullable tau,
  __LAPACK_float_complex * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  __LAPACK_float_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cupgtr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chpsv_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_float_complex * _Nullable ap,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chpsv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cpotrs_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cpotrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
claesy_(
  const __LAPACK_float_complex * _Nonnull a,
  const __LAPACK_float_complex * _Nonnull b,
  const __LAPACK_float_complex * _Nonnull c,
  __LAPACK_float_complex * _Nonnull rt1,
  __LAPACK_float_complex * _Nonnull rt2,
  __LAPACK_float_complex * _Nonnull evscal,
  __LAPACK_float_complex * _Nonnull cs1,
  __LAPACK_float_complex * _Nonnull sn1)
__LAPACK_ALIAS(claesy)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
claqsy_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable s,
  const float * _Nonnull scond,
  const float * _Nonnull amax,
  char * _Nonnull equed)
__LAPACK_ALIAS(claqsy)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cpftrs_(
  const char * _Nonnull transr,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_float_complex * _Nullable a,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cpftrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cposv_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cposv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cppcon_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable ap,
  const float * _Nonnull anorm,
  float * _Nonnull rcond,
  __LAPACK_float_complex * _Nonnull work,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cppcon)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cpteqr_(
  const char * _Nonnull compz,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable d,
  float * _Nullable e,
  __LAPACK_float_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cpteqr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cpttrs_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const float * _Nullable d,
  const __LAPACK_float_complex * _Nullable e,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cpttrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
csptrs_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_float_complex * _Nullable ap,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(csptrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cspcon_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable ap,
  const __LAPACK_int * _Nullable ipiv,
  const float * _Nonnull anorm,
  float * _Nonnull rcond,
  __LAPACK_float_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cspcon)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cspsv_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_float_complex * _Nullable ap,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cspsv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
csyconvf_(
  const char * _Nonnull uplo,
  const char * _Nonnull way,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable e,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(csyconvf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
csyconvf_rook_(
  const char * _Nonnull uplo,
  const char * _Nonnull way,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable e,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(csyconvf_rook)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
csytrf_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(csytrf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
csytrf_aa_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(csytrf_aa)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
csytrf_rook_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(csytrf_rook)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
csytri2x_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(csytri2x)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
csytri2_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(csytri2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cungr2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable tau,
  __LAPACK_float_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cungr2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlamc2_(
  __LAPACK_int * _Nonnull beta,
  __LAPACK_int * _Nonnull t,
  __LAPACK_bool * _Nonnull rnd,
  double * _Nonnull eps,
  __LAPACK_int * _Nonnull emin,
  double * _Nonnull rmin,
  __LAPACK_int * _Nonnull emax,
  double * _Nonnull rmax)
__LAPACK_ALIAS(dlamc2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlaed6_(
  const __LAPACK_int * _Nonnull kniter,
  const __LAPACK_bool * _Nonnull orgati,
  const double * _Nonnull rho,
  const double * _Nullable d,
  const double * _Nullable z,
  const double * _Nonnull finit,
  double * _Nonnull tau,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlaed6)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsteqr_(
  const char * _Nonnull compz,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable d,
  double * _Nullable e,
  double * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsteqr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlartv_(
  const __LAPACK_int * _Nonnull n,
  double * _Nullable x,
  const __LAPACK_int * _Nonnull incx,
  double * _Nullable y,
  const __LAPACK_int * _Nonnull incy,
  const double * _Nullable c,
  const double * _Nullable s,
  const __LAPACK_int * _Nonnull incc)
__LAPACK_ALIAS(dlartv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgbtf2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  double * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgbtf2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgbtrf_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  double * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgbtrf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgebal_(
  const char * _Nonnull job,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nonnull ilo,
  __LAPACK_int * _Nonnull ihi,
  double * _Nullable scale,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgebal)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
dgehd2_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ilo,
  const __LAPACK_int * _Nonnull ihi,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable tau,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgehd2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
dlarfx_(
  const char * _Nonnull side,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable v,
  const double * _Nonnull tau,
  double * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  double * _Nullable work)
__LAPACK_ALIAS(dlarfx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlaqr1_(
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable h,
  const __LAPACK_int * _Nonnull ldh,
  const double * _Nonnull sr1,
  const double * _Nonnull si1,
  const double * _Nonnull sr2,
  const double * _Nonnull si2,
  double * _Nullable v)
__LAPACK_ALIAS(dlaqr1)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dorg2r_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable tau,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dorg2r)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgeqrf_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable tau,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgeqrf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgelqf_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable tau,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgelqf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dorgl2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable tau,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dorgl2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgeqpf_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable jpvt,
  double * _Nullable tau,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgeqpf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dtzrzf_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable tau,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dtzrzf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgeqlf_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable tau,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgeqlf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgeqrfp_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable tau,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgeqrfp)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgerqf_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable tau,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgerqf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgesv_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgesv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dorgr2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable tau,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dorgr2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgtsv_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  double * _Nullable dl,
  double * _Nullable d,
  double * _Nullable du,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgtsv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dpotrs_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dpotrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlaed4_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull i,
  const double * _Nullable d,
  const double * _Nullable z,
  double * _Nullable delta,
  const double * _Nonnull rho,
  double * _Nonnull dlam,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlaed4)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlaqsy_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable s,
  const double * _Nonnull scond,
  const double * _Nonnull amax,
  char * _Nonnull equed)
__LAPACK_ALIAS(dlaqsy)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlar2v_(
  const __LAPACK_int * _Nonnull n,
  double * _Nullable x,
  double * _Nullable y,
  double * _Nullable z,
  const __LAPACK_int * _Nonnull incx,
  const double * _Nullable c,
  const double * _Nullable s,
  const __LAPACK_int * _Nonnull incc)
__LAPACK_ALIAS(dlar2v)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlarfy_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable v,
  const __LAPACK_int * _Nonnull incv,
  const double * _Nonnull tau,
  double * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  double * _Nullable work)
__LAPACK_ALIAS(dlarfy)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dorg2l_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable tau,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dorg2l)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dopgtr_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable ap,
  const double * _Nullable tau,
  double * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dopgtr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dorgtr_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable tau,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dorgtr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dpftrs_(
  const char * _Nonnull transr,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const double * _Nullable a,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dpftrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dposv_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dposv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dppcon_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable ap,
  const double * _Nonnull anorm,
  double * _Nonnull rcond,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dppcon)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dpteqr_(
  const char * _Nonnull compz,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable d,
  double * _Nullable e,
  double * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dpteqr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsptrs_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const double * _Nullable ap,
  const __LAPACK_int * _Nullable ipiv,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsptrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
spotrs_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(spotrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dspsv_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  double * _Nullable ap,
  __LAPACK_int * _Nullable ipiv,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dspsv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dstev_(
  const char * _Nonnull jobz,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable d,
  double * _Nullable e,
  double * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dstev)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsyconv_(
  const char * _Nonnull uplo,
  const char * _Nonnull way,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  double * _Nullable e,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsyconv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsyconvf_(
  const char * _Nonnull uplo,
  const char * _Nonnull way,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable e,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsyconvf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsyconvf_rook_(
  const char * _Nonnull uplo,
  const char * _Nonnull way,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable e,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsyconvf_rook)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsytd2_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable d,
  double * _Nullable e,
  double * _Nullable tau,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsytd2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsygs2_(
  const __LAPACK_int * _Nonnull itype,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsygs2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsygst_(
  const __LAPACK_int * _Nonnull itype,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsygst)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsytrf_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsytrf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsytrf_aa_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsytrf_aa)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsytrf_rook_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsytrf_rook)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsytri2x_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsytri2x)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsytri2_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsytri2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slartv_(
  const __LAPACK_int * _Nonnull n,
  float * _Nullable x,
  const __LAPACK_int * _Nonnull incx,
  float * _Nullable y,
  const __LAPACK_int * _Nonnull incy,
  const float * _Nullable c,
  const float * _Nullable s,
  const __LAPACK_int * _Nonnull incc)
__LAPACK_ALIAS(slartv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgbtf2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  float * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgbtf2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgbtrf_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  float * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgbtrf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgebal_(
  const char * _Nonnull job,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nonnull ilo,
  __LAPACK_int * _Nonnull ihi,
  float * _Nullable scale,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgebal)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
sgehd2_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ilo,
  const __LAPACK_int * _Nonnull ihi,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable tau,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgehd2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
slarfx_(
  const char * _Nonnull side,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable v,
  const float * _Nonnull tau,
  float * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  float * _Nullable work)
__LAPACK_ALIAS(slarfx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slaqr1_(
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable h,
  const __LAPACK_int * _Nonnull ldh,
  const float * _Nonnull sr1,
  const float * _Nonnull si1,
  const float * _Nonnull sr2,
  const float * _Nonnull si2,
  float * _Nullable v)
__LAPACK_ALIAS(slaqr1)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sorg2r_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable tau,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sorg2r)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgeqrf_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable tau,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgeqrf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgelqf_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable tau,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgelqf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sorgl2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable tau,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sorgl2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgeqpf_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable jpvt,
  float * _Nullable tau,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgeqpf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
stzrzf_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable tau,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(stzrzf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgeqlf_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable tau,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgeqlf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgeqrfp_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable tau,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgeqrfp)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgerqf_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable tau,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgerqf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgesv_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgesv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sorgr2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable tau,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sorgr2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgtsv_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  float * _Nullable dl,
  float * _Nullable d,
  float * _Nullable du,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgtsv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slaqsy_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable s,
  const float * _Nonnull scond,
  const float * _Nonnull amax,
  char * _Nonnull equed)
__LAPACK_ALIAS(slaqsy)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slar2v_(
  const __LAPACK_int * _Nonnull n,
  float * _Nullable x,
  float * _Nullable y,
  float * _Nullable z,
  const __LAPACK_int * _Nonnull incx,
  const float * _Nullable c,
  const float * _Nullable s,
  const __LAPACK_int * _Nonnull incc)
__LAPACK_ALIAS(slar2v)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slarfy_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable v,
  const __LAPACK_int * _Nonnull incv,
  const float * _Nonnull tau,
  float * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  float * _Nullable work)
__LAPACK_ALIAS(slarfy)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sorg2l_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable tau,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sorg2l)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sopgtr_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable ap,
  const float * _Nullable tau,
  float * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sopgtr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sorgtr_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable tau,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sorgtr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
spftrs_(
  const char * _Nonnull transr,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const float * _Nullable a,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(spftrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sposv_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sposv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sppcon_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable ap,
  const float * _Nonnull anorm,
  float * _Nonnull rcond,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sppcon)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
spteqr_(
  const char * _Nonnull compz,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable d,
  float * _Nullable e,
  float * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(spteqr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssptrs_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const float * _Nullable ap,
  const __LAPACK_int * _Nullable ipiv,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssptrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
sspsv_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  float * _Nullable ap,
  __LAPACK_int * _Nullable ipiv,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sspsv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sstev_(
  const char * _Nonnull jobz,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable d,
  float * _Nullable e,
  float * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sstev)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssyconv_(
  const char * _Nonnull uplo,
  const char * _Nonnull way,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  float * _Nullable e,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssyconv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssyconvf_(
  const char * _Nonnull uplo,
  const char * _Nonnull way,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable e,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssyconvf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssyconvf_rook_(
  const char * _Nonnull uplo,
  const char * _Nonnull way,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable e,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssyconvf_rook)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssytd2_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable d,
  float * _Nullable e,
  float * _Nullable tau,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssytd2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssygs2_(
  const __LAPACK_int * _Nonnull itype,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssygs2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssygst_(
  const __LAPACK_int * _Nonnull itype,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssygst)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssytrf_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssytrf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssytrf_aa_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssytrf_aa)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssytrf_rook_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssytrf_rook)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssytri2x_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssytri2x)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssytri2_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssytri2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zpotrs_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zpotrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlartv_(
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable x,
  const __LAPACK_int * _Nonnull incx,
  __LAPACK_double_complex * _Nullable y,
  const __LAPACK_int * _Nonnull incy,
  const double * _Nullable c,
  const __LAPACK_double_complex * _Nullable s,
  const __LAPACK_int * _Nonnull incc)
__LAPACK_ALIAS(zlartv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgbtf2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  __LAPACK_double_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgbtf2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgbtrf_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  __LAPACK_double_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgbtrf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgebal_(
  const char * _Nonnull job,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nonnull ilo,
  __LAPACK_int * _Nonnull ihi,
  double * _Nullable scale,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgebal)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
zgehd2_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ilo,
  const __LAPACK_int * _Nonnull ihi,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable tau,
  __LAPACK_double_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgehd2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
zung2r_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable tau,
  __LAPACK_double_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zung2r)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgeqrf_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable tau,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgeqrf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgelqf_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable tau,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgelqf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zungl2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable tau,
  __LAPACK_double_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zungl2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ztzrzf_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable tau,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ztzrzf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgeqlf_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable tau,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgeqlf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgeqrfp_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable tau,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgeqrfp)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgerqf_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable tau,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgerqf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgesv_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgesv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgtsv_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_double_complex * _Nullable dl,
  __LAPACK_double_complex * _Nullable d,
  __LAPACK_double_complex * _Nullable du,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgtsv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlarfx_(
  const char * _Nonnull side,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable v,
  const __LAPACK_double_complex * _Nonnull tau,
  __LAPACK_double_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  __LAPACK_double_complex * _Nullable work)
__LAPACK_ALIAS(zlarfx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlarfy_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable v,
  const __LAPACK_int * _Nonnull incv,
  const __LAPACK_double_complex * _Nonnull tau,
  __LAPACK_double_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  __LAPACK_double_complex * _Nullable work)
__LAPACK_ALIAS(zlarfy)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlar2v_(
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable x,
  __LAPACK_double_complex * _Nullable y,
  __LAPACK_double_complex * _Nullable z,
  const __LAPACK_int * _Nonnull incx,
  const double * _Nullable c,
  const __LAPACK_double_complex * _Nullable s,
  const __LAPACK_int * _Nonnull incc)
__LAPACK_ALIAS(zlar2v)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zsteqr_(
  const char * _Nonnull compz,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable d,
  double * _Nullable e,
  __LAPACK_double_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zsteqr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhetd2_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable d,
  double * _Nullable e,
  __LAPACK_double_complex * _Nullable tau,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhetd2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zung2l_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable tau,
  __LAPACK_double_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zung2l)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zungtr_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable tau,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zungtr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhegs2_(
  const __LAPACK_int * _Nonnull itype,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhegs2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhegst_(
  const __LAPACK_int * _Nonnull itype,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhegst)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhetrf_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhetrf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zsyconv_(
  const char * _Nonnull uplo,
  const char * _Nonnull way,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nullable e,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zsyconv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhetrf_aa_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhetrf_aa)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhetrf_rook_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhetrf_rook)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlaqhe_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable s,
  const double * _Nonnull scond,
  const double * _Nonnull amax,
  char * _Nonnull equed)
__LAPACK_ALIAS(zlaqhe)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhetri2x_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhetri2x)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhetri2_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhetri2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhptrs_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_double_complex * _Nullable ap,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhptrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhpcon_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable ap,
  const __LAPACK_int * _Nullable ipiv,
  const double * _Nonnull anorm,
  double * _Nonnull rcond,
  __LAPACK_double_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhpcon)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
zupgtr_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable ap,
  const __LAPACK_double_complex * _Nullable tau,
  __LAPACK_double_complex * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  __LAPACK_double_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zupgtr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhpsv_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_double_complex * _Nullable ap,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhpsv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlaesy_(
  const __LAPACK_double_complex * _Nonnull a,
  const __LAPACK_double_complex * _Nonnull b,
  const __LAPACK_double_complex * _Nonnull c,
  __LAPACK_double_complex * _Nonnull rt1,
  __LAPACK_double_complex * _Nonnull rt2,
  __LAPACK_double_complex * _Nonnull evscal,
  __LAPACK_double_complex * _Nonnull cs1,
  __LAPACK_double_complex * _Nonnull sn1)
__LAPACK_ALIAS(zlaesy)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlaqsy_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable s,
  const double * _Nonnull scond,
  const double * _Nonnull amax,
  char * _Nonnull equed)
__LAPACK_ALIAS(zlaqsy)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zpftrs_(
  const char * _Nonnull transr,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_double_complex * _Nullable a,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zpftrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zposv_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zposv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zppcon_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable ap,
  const double * _Nonnull anorm,
  double * _Nonnull rcond,
  __LAPACK_double_complex * _Nonnull work,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zppcon)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zpteqr_(
  const char * _Nonnull compz,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable d,
  double * _Nullable e,
  __LAPACK_double_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zpteqr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zpttrs_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const double * _Nullable d,
  const __LAPACK_double_complex * _Nullable e,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zpttrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zsptrs_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_double_complex * _Nullable ap,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zsptrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zspcon_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable ap,
  const __LAPACK_int * _Nullable ipiv,
  const double * _Nonnull anorm,
  double * _Nonnull rcond,
  __LAPACK_double_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zspcon)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zspsv_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_double_complex * _Nullable ap,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zspsv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zsyconvf_(
  const char * _Nonnull uplo,
  const char * _Nonnull way,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable e,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zsyconvf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zsyconvf_rook_(
  const char * _Nonnull uplo,
  const char * _Nonnull way,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable e,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zsyconvf_rook)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zsytrf_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zsytrf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zsytrf_aa_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zsytrf_aa)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zsytrf_rook_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zsytrf_rook)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zsytri2x_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zsytri2x)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zsytri2_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zsytri2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zungr2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable tau,
  __LAPACK_double_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zungr2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



float
clantb_(
  const char * _Nonnull norm,
  const char * _Nonnull uplo,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_float_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  float * _Nullable work)
__LAPACK_ALIAS(clantb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



float
cla_gbrpvgrw_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  const __LAPACK_int * _Nonnull ncols,
  const __LAPACK_float_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  const __LAPACK_float_complex * _Nullable afb,
  const __LAPACK_int * _Nonnull ldafb)
__LAPACK_ALIAS(cla_gbrpvgrw)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



float
clantr_(
  const char * _Nonnull norm,
  const char * _Nonnull uplo,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable work)
__LAPACK_ALIAS(clantr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



float
slantb_(
  const char * _Nonnull norm,
  const char * _Nonnull uplo,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const float * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  float * _Nullable work)
__LAPACK_ALIAS(slantb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



float
sla_gbrpvgrw_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  const __LAPACK_int * _Nonnull ncols,
  const float * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  const float * _Nullable afb,
  const __LAPACK_int * _Nonnull ldafb)
__LAPACK_ALIAS(sla_gbrpvgrw)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



float
slantr_(
  const char * _Nonnull norm,
  const char * _Nonnull uplo,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable work)
__LAPACK_ALIAS(slantr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



double
dlantb_(
  const char * _Nonnull norm,
  const char * _Nonnull uplo,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const double * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  double * _Nullable work)
__LAPACK_ALIAS(dlantb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



double
dla_gbrpvgrw_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  const __LAPACK_int * _Nonnull ncols,
  const double * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  const double * _Nullable afb,
  const __LAPACK_int * _Nonnull ldafb)
__LAPACK_ALIAS(dla_gbrpvgrw)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



double
dlantr_(
  const char * _Nonnull norm,
  const char * _Nonnull uplo,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable work)
__LAPACK_ALIAS(dlantr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



double
zlantb_(
  const char * _Nonnull norm,
  const char * _Nonnull uplo,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_double_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  double * _Nullable work)
__LAPACK_ALIAS(zlantb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



double
zla_gbrpvgrw_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  const __LAPACK_int * _Nonnull ncols,
  const __LAPACK_double_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  const __LAPACK_double_complex * _Nullable afb,
  const __LAPACK_int * _Nonnull ldafb)
__LAPACK_ALIAS(zla_gbrpvgrw)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



double
zlantr_(
  const char * _Nonnull norm,
  const char * _Nonnull uplo,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable work)
__LAPACK_ALIAS(zlantr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
clasr_(
  const char * _Nonnull side,
  const char * _Nonnull pivot,
  const char * _Nonnull direct,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable c,
  const float * _Nullable s,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda)
__LAPACK_ALIAS(clasr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slasv2_(
  const float * _Nonnull f,
  const float * _Nonnull g,
  const float * _Nonnull h,
  float * _Nonnull ssmin,
  float * _Nonnull ssmax,
  float * _Nonnull snr,
  float * _Nonnull csr,
  float * _Nonnull snl,
  float * _Nonnull csl)
__LAPACK_ALIAS(slasv2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));












void
clarf_(
  const char * _Nonnull side,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable v,
  const __LAPACK_int * _Nonnull incv,
  const __LAPACK_float_complex * _Nonnull tau,
  __LAPACK_float_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  __LAPACK_float_complex * _Nullable work)
__LAPACK_ALIAS(clarf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgecon_(
  const char * _Nonnull norm,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nonnull anorm,
  float * _Nonnull rcond,
  __LAPACK_float_complex * _Nonnull work,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgecon)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgehrd_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ilo,
  const __LAPACK_int * _Nonnull ihi,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable tau,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgehrd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ctrexc_(
  const char * _Nonnull compq,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_float_complex * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  const __LAPACK_int * _Nonnull ifst,
  const __LAPACK_int * _Nonnull ilst,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ctrexc)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
clarft_(
  const char * _Nonnull direct,
  const char * _Nonnull storev,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_float_complex * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  const __LAPACK_float_complex * _Nullable tau,
  __LAPACK_float_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt)
__LAPACK_ALIAS(clarft)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cungqr_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable tau,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cungqr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cunghr_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ilo,
  const __LAPACK_int * _Nonnull ihi,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable tau,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cunghr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cpocon_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nonnull anorm,
  float * _Nonnull rcond,
  __LAPACK_float_complex * _Nonnull work,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cpocon)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgelqt_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull mb,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_float_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgelqt)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgelq_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable t,
  const __LAPACK_int * _Nonnull tsize,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgelq)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slasd4_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull i,
  const float * _Nullable d,
  const float * _Nullable z,
  float * _Nullable delta,
  const float * _Nonnull rho,
  float * _Nonnull sigma,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slasd4)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slasr_(
  const char * _Nonnull side,
  const char * _Nonnull pivot,
  const char * _Nonnull direct,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable c,
  const float * _Nullable s,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda)
__LAPACK_ALIAS(slasr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cunglq_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable tau,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cunglq)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgeqpf_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable jpvt,
  __LAPACK_float_complex * _Nullable tau,
  __LAPACK_float_complex * _Nonnull work,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgeqpf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
claic1_(
  const __LAPACK_int * _Nonnull job,
  const __LAPACK_int * _Nonnull j,
  const __LAPACK_float_complex * _Nullable x,
  const float * _Nonnull sest,
  const __LAPACK_float_complex * _Nullable w,
  const __LAPACK_float_complex * _Nonnull gamma,
  float * _Nonnull sestpr,
  __LAPACK_float_complex * _Nonnull s,
  __LAPACK_float_complex * _Nonnull c)
__LAPACK_ALIAS(claic1)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
clarzt_(
  const char * _Nonnull direct,
  const char * _Nonnull storev,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  __LAPACK_float_complex * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  const __LAPACK_float_complex * _Nullable tau,
  __LAPACK_float_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt)
__LAPACK_ALIAS(clarzt)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgeqrt_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_float_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgeqrt)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgeqr_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable t,
  const __LAPACK_int * _Nonnull tsize,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgeqr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgetrs_(
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgetrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
clacrm_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  float * _Nullable rwork)
__LAPACK_ALIAS(clacrm)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
clarcm_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  float * _Nullable rwork)
__LAPACK_ALIAS(clarcm)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slagtf_(
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const float * _Nonnull lambda,
  float * _Nullable b,
  float * _Nullable c,
  const float * _Nonnull tol,
  float * _Nullable d,
  __LAPACK_int * _Nullable in,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slagtf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
clatdf_(
  const __LAPACK_int * _Nonnull ijob,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_float_complex * _Nullable rhs,
  float * _Nonnull rdsum,
  float * _Nonnull rdscal,
  const __LAPACK_int * _Nullable ipiv,
  const __LAPACK_int * _Nullable jpiv)
__LAPACK_ALIAS(clatdf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
chetrs_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chetrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
checon_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  const float * _Nonnull anorm,
  float * _Nonnull rcond,
  __LAPACK_float_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(checon)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chetrs_rook_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chetrs_rook)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
checon_rook_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  const float * _Nonnull anorm,
  float * _Nonnull rcond,
  __LAPACK_float_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(checon_rook)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cheequb_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable s,
  float * _Nonnull scond,
  float * _Nonnull amax,
  __LAPACK_float_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cheequb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
clatrd_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable e,
  __LAPACK_float_complex * _Nullable tau,
  __LAPACK_float_complex * _Nullable w,
  const __LAPACK_int * _Nonnull ldw)
__LAPACK_ALIAS(clatrd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cungql_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable tau,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cungql)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slarra_(
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable d,
  float * _Nullable e,
  float * _Nullable e2,
  const float * _Nonnull spltol,
  const float * _Nonnull tnrm,
  __LAPACK_int * _Nonnull nsplit,
  __LAPACK_int * _Nullable isplit,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slarra)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chetrf_rk_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable e,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chetrf_rk)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chetri_3x_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable e,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chetri_3x)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chetri_3_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable e,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chetri_3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
csytrs_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(csytrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
claqhb_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  __LAPACK_float_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  const float * _Nullable s,
  const float * _Nonnull scond,
  const float * _Nonnull amax,
  char * _Nonnull equed)
__LAPACK_ALIAS(claqhb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
claqsb_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  __LAPACK_float_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  const float * _Nullable s,
  const float * _Nonnull scond,
  const float * _Nonnull amax,
  char * _Nonnull equed)
__LAPACK_ALIAS(claqsb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cpbequ_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  const __LAPACK_float_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  float * _Nullable s,
  float * _Nonnull scond,
  float * _Nonnull amax,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cpbequ)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cpbtrs_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_float_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cpbtrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cpbsv_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_float_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cpbsv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cpstf2_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable piv,
  __LAPACK_int * _Nonnull rank,
  const float * _Nonnull tol,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cpstf2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cpstrf_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable piv,
  __LAPACK_int * _Nonnull rank,
  const float * _Nonnull tol,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cpstrf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cspmv_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nonnull alpha,
  const __LAPACK_float_complex * _Nullable ap,
  const __LAPACK_float_complex * _Nullable x,
  const __LAPACK_int * _Nonnull incx,
  const __LAPACK_float_complex * _Nonnull beta,
  __LAPACK_float_complex * _Nullable y,
  const __LAPACK_int * _Nonnull incy)
__LAPACK_ALIAS(cspmv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
csycon_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  const float * _Nonnull anorm,
  float * _Nonnull rcond,
  __LAPACK_float_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(csycon)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
csytrs_rook_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(csytrs_rook)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
csycon_rook_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  const float * _Nonnull anorm,
  float * _Nonnull rcond,
  __LAPACK_float_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(csycon_rook)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
csyequb_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable s,
  float * _Nonnull scond,
  float * _Nonnull amax,
  __LAPACK_float_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(csyequb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
csytrf_rk_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable e,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(csytrf_rk)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
csytri_3x_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable e,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(csytri_3x)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
csytri_3_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable e,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(csytri_3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
ctpcon_(
  const char * _Nonnull norm,
  const char * _Nonnull uplo,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable ap,
  float * _Nonnull rcond,
  __LAPACK_float_complex * _Nonnull work,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ctpcon)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ctptrs_(
  const char * _Nonnull uplo,
  const char * _Nonnull trans,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_float_complex * _Nullable ap,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ctptrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cungrq_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable tau,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cungrq)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cunhr_col_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_float_complex * _Nullable d,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cunhr_col)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlasr_(
  const char * _Nonnull side,
  const char * _Nonnull pivot,
  const char * _Nonnull direct,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable c,
  const double * _Nullable s,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda)
__LAPACK_ALIAS(dlasr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlasd4_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull i,
  const double * _Nullable d,
  const double * _Nullable z,
  double * _Nullable delta,
  const double * _Nonnull rho,
  double * _Nonnull sigma,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlasd4)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlasv2_(
  const double * _Nonnull f,
  const double * _Nonnull g,
  const double * _Nonnull h,
  double * _Nonnull ssmin,
  double * _Nonnull ssmax,
  double * _Nonnull snr,
  double * _Nonnull csr,
  double * _Nonnull snl,
  double * _Nonnull csl)
__LAPACK_ALIAS(dlasv2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlagtf_(
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const double * _Nonnull lambda,
  double * _Nullable b,
  double * _Nullable c,
  const double * _Nonnull tol,
  double * _Nullable d,
  __LAPACK_int * _Nullable in,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlagtf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));









void
dlarf_(
  const char * _Nonnull side,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable v,
  const __LAPACK_int * _Nonnull incv,
  const double * _Nonnull tau,
  double * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  double * _Nullable work)
__LAPACK_ALIAS(dlarf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgecon_(
  const char * _Nonnull norm,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nonnull anorm,
  double * _Nonnull rcond,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgecon)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgehrd_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ilo,
  const __LAPACK_int * _Nonnull ihi,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable tau,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgehrd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlarft_(
  const char * _Nonnull direct,
  const char * _Nonnull storev,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const double * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  const double * _Nullable tau,
  double * _Nullable t,
  const __LAPACK_int * _Nonnull ldt)
__LAPACK_ALIAS(dlarft)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dorgqr_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable tau,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dorgqr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dorghr_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ilo,
  const __LAPACK_int * _Nonnull ihi,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable tau,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dorghr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgeqp3_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable jpvt,
  double * _Nullable tau,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgeqp3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dpocon_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nonnull anorm,
  double * _Nonnull rcond,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dpocon)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgelqt_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull mb,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgelqt)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgelq_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable t,
  const __LAPACK_int * _Nonnull tsize,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgelq)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dorglq_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable tau,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dorglq)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlaic1_(
  const __LAPACK_int * _Nonnull job,
  const __LAPACK_int * _Nonnull j,
  const double * _Nullable x,
  const double * _Nonnull sest,
  const double * _Nullable w,
  const double * _Nonnull gamma,
  double * _Nonnull sestpr,
  double * _Nonnull s,
  double * _Nonnull c)
__LAPACK_ALIAS(dlaic1)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlarzt_(
  const char * _Nonnull direct,
  const char * _Nonnull storev,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const double * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  const double * _Nullable tau,
  double * _Nullable t,
  const __LAPACK_int * _Nonnull ldt)
__LAPACK_ALIAS(dlarzt)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgeqrt_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nb,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgeqrt)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgeqr_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable t,
  const __LAPACK_int * _Nonnull tsize,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgeqr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgetrs_(
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgetrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlatdf_(
  const __LAPACK_int * _Nonnull ijob,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  double * _Nullable rhs,
  double * _Nonnull rdsum,
  double * _Nonnull rdscal,
  const __LAPACK_int * _Nullable ipiv,
  const __LAPACK_int * _Nullable jpiv)
__LAPACK_ALIAS(dlatdf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsytrs_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsytrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlaqsb_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  double * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  const double * _Nullable s,
  const double * _Nonnull scond,
  const double * _Nonnull amax,
  char * _Nonnull equed)
__LAPACK_ALIAS(dlaqsb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
dlarra_(
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable d,
  double * _Nullable e,
  double * _Nullable e2,
  const double * _Nonnull spltol,
  const double * _Nonnull tnrm,
  __LAPACK_int * _Nonnull nsplit,
  __LAPACK_int * _Nullable isplit,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlarra)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlatrd_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nb,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable e,
  double * _Nullable tau,
  double * _Nullable w,
  const __LAPACK_int * _Nonnull ldw)
__LAPACK_ALIAS(dlatrd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dorgql_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable tau,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dorgql)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dorgrq_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable tau,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dorgrq)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dorhr_col_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nb,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  double * _Nullable d,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dorhr_col)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dpbequ_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  const double * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  double * _Nullable s,
  double * _Nonnull scond,
  double * _Nonnull amax,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dpbequ)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dpbtrs_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  const __LAPACK_int * _Nonnull nrhs,
  const double * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dpbtrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dpbsv_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  const __LAPACK_int * _Nonnull nrhs,
  double * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dpbsv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
dpstf2_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable piv,
  __LAPACK_int * _Nonnull rank,
  const double * _Nonnull tol,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dpstf2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dpstrf_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable piv,
  __LAPACK_int * _Nonnull rank,
  const double * _Nonnull tol,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dpstrf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgetrs_(
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgetrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dspcon_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable ap,
  const __LAPACK_int * _Nullable ipiv,
  const double * _Nonnull anorm,
  double * _Nonnull rcond,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dspcon)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dspev_(
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable ap,
  double * _Nullable w,
  double * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dspev)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsytrs_rook_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsytrs_rook)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsyequb_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable s,
  double * _Nonnull scond,
  double * _Nonnull amax,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsyequb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsyev_(
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable w,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsyev)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsyev_2stage_(
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable w,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsyev_2stage)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsytrf_rk_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable e,
  __LAPACK_int * _Nullable ipiv,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsytrf_rk)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsytri_3x_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable e,
  const __LAPACK_int * _Nullable ipiv,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsytri_3x)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsytri_3_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable e,
  const __LAPACK_int * _Nullable ipiv,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsytri_3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
dtpcon_(
  const char * _Nonnull norm,
  const char * _Nonnull uplo,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable ap,
  double * _Nonnull rcond,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dtpcon)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dtptrs_(
  const char * _Nonnull uplo,
  const char * _Nonnull trans,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const double * _Nullable ap,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dtptrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));









void
slarf_(
  const char * _Nonnull side,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable v,
  const __LAPACK_int * _Nonnull incv,
  const float * _Nonnull tau,
  float * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  float * _Nullable work)
__LAPACK_ALIAS(slarf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgecon_(
  const char * _Nonnull norm,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nonnull anorm,
  float * _Nonnull rcond,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgecon)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgehrd_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ilo,
  const __LAPACK_int * _Nonnull ihi,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable tau,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgehrd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slarft_(
  const char * _Nonnull direct,
  const char * _Nonnull storev,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const float * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  const float * _Nullable tau,
  float * _Nullable t,
  const __LAPACK_int * _Nonnull ldt)
__LAPACK_ALIAS(slarft)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sorgqr_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable tau,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sorgqr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sorghr_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ilo,
  const __LAPACK_int * _Nonnull ihi,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable tau,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sorghr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgeqp3_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable jpvt,
  float * _Nullable tau,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgeqp3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
spocon_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nonnull anorm,
  float * _Nonnull rcond,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(spocon)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgelqt_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull mb,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgelqt)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgeqrt_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nb,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgeqrt)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgelq_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable t,
  const __LAPACK_int * _Nonnull tsize,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgelq)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sorglq_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable tau,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sorglq)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slaic1_(
  const __LAPACK_int * _Nonnull job,
  const __LAPACK_int * _Nonnull j,
  const float * _Nullable x,
  const float * _Nonnull sest,
  const float * _Nullable w,
  const float * _Nonnull gamma,
  float * _Nonnull sestpr,
  float * _Nonnull s,
  float * _Nonnull c)
__LAPACK_ALIAS(slaic1)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slarzt_(
  const char * _Nonnull direct,
  const char * _Nonnull storev,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const float * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  const float * _Nullable tau,
  float * _Nullable t,
  const __LAPACK_int * _Nonnull ldt)
__LAPACK_ALIAS(slarzt)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgeqr_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable t,
  const __LAPACK_int * _Nonnull tsize,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgeqr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slatdf_(
  const __LAPACK_int * _Nonnull ijob,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  float * _Nullable rhs,
  float * _Nonnull rdsum,
  float * _Nonnull rdscal,
  const __LAPACK_int * _Nullable ipiv,
  const __LAPACK_int * _Nullable jpiv)
__LAPACK_ALIAS(slatdf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssytrs_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssytrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slaqsb_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  float * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  const float * _Nullable s,
  const float * _Nonnull scond,
  const float * _Nonnull amax,
  char * _Nonnull equed)
__LAPACK_ALIAS(slaqsb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
slatrd_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nb,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable e,
  float * _Nullable tau,
  float * _Nullable w,
  const __LAPACK_int * _Nonnull ldw)
__LAPACK_ALIAS(slatrd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sorgql_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable tau,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sorgql)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sorgrq_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable tau,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sorgrq)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sorhr_col_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nb,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  float * _Nullable d,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sorhr_col)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
spbequ_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  const float * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  float * _Nullable s,
  float * _Nonnull scond,
  float * _Nonnull amax,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(spbequ)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
spbtrs_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  const __LAPACK_int * _Nonnull nrhs,
  const float * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(spbtrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
spbsv_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  const __LAPACK_int * _Nonnull nrhs,
  float * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(spbsv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
spstf2_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable piv,
  __LAPACK_int * _Nonnull rank,
  const float * _Nonnull tol,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(spstf2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
spstrf_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable piv,
  __LAPACK_int * _Nonnull rank,
  const float * _Nonnull tol,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(spstrf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sspcon_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable ap,
  const __LAPACK_int * _Nullable ipiv,
  const float * _Nonnull anorm,
  float * _Nonnull rcond,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sspcon)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sspev_(
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable ap,
  float * _Nullable w,
  float * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sspev)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssytrs_rook_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssytrs_rook)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssyequb_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable s,
  float * _Nonnull scond,
  float * _Nonnull amax,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssyequb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssyev_(
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable w,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssyev)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssyev_2stage_(
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable w,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssyev_2stage)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssytrf_rk_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable e,
  __LAPACK_int * _Nullable ipiv,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssytrf_rk)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssytri_3x_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable e,
  const __LAPACK_int * _Nullable ipiv,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssytri_3x)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssytri_3_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable e,
  const __LAPACK_int * _Nullable ipiv,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssytri_3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
stpcon_(
  const char * _Nonnull norm,
  const char * _Nonnull uplo,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable ap,
  float * _Nonnull rcond,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(stpcon)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
stptrs_(
  const char * _Nonnull uplo,
  const char * _Nonnull trans,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const float * _Nullable ap,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(stptrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlasr_(
  const char * _Nonnull side,
  const char * _Nonnull pivot,
  const char * _Nonnull direct,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable c,
  const double * _Nullable s,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda)
__LAPACK_ALIAS(zlasr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgetrs_(
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgetrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));












void
zlarf_(
  const char * _Nonnull side,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable v,
  const __LAPACK_int * _Nonnull incv,
  const __LAPACK_double_complex * _Nonnull tau,
  __LAPACK_double_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  __LAPACK_double_complex * _Nullable work)
__LAPACK_ALIAS(zlarf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgecon_(
  const char * _Nonnull norm,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nonnull anorm,
  double * _Nonnull rcond,
  __LAPACK_double_complex * _Nonnull work,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgecon)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgehrd_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ilo,
  const __LAPACK_int * _Nonnull ihi,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable tau,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgehrd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ztrexc_(
  const char * _Nonnull compq,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_double_complex * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  const __LAPACK_int * _Nonnull ifst,
  const __LAPACK_int * _Nonnull ilst,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ztrexc)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlarft_(
  const char * _Nonnull direct,
  const char * _Nonnull storev,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_double_complex * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  const __LAPACK_double_complex * _Nullable tau,
  __LAPACK_double_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt)
__LAPACK_ALIAS(zlarft)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zungqr_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable tau,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zungqr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zunghr_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ilo,
  const __LAPACK_int * _Nonnull ihi,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable tau,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zunghr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zpocon_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nonnull anorm,
  double * _Nonnull rcond,
  __LAPACK_double_complex * _Nonnull work,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zpocon)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgelqt_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull mb,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_double_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgelqt)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgelq_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable t,
  const __LAPACK_int * _Nonnull tsize,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgelq)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zunglq_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable tau,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zunglq)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgeqpf_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable jpvt,
  __LAPACK_double_complex * _Nullable tau,
  __LAPACK_double_complex * _Nonnull work,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgeqpf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlaic1_(
  const __LAPACK_int * _Nonnull job,
  const __LAPACK_int * _Nonnull j,
  const __LAPACK_double_complex * _Nullable x,
  const double * _Nonnull sest,
  const __LAPACK_double_complex * _Nullable w,
  const __LAPACK_double_complex * _Nonnull gamma,
  double * _Nonnull sestpr,
  __LAPACK_double_complex * _Nonnull s,
  __LAPACK_double_complex * _Nonnull c)
__LAPACK_ALIAS(zlaic1)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlarzt_(
  const char * _Nonnull direct,
  const char * _Nonnull storev,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  __LAPACK_double_complex * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  const __LAPACK_double_complex * _Nullable tau,
  __LAPACK_double_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt)
__LAPACK_ALIAS(zlarzt)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgeqrt_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_double_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgeqrt)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgeqr_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable t,
  const __LAPACK_int * _Nonnull tsize,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgeqr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlacrm_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  double * _Nullable rwork)
__LAPACK_ALIAS(zlacrm)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlarcm_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  double * _Nullable rwork)
__LAPACK_ALIAS(zlarcm)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlatdf_(
  const __LAPACK_int * _Nonnull ijob,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_double_complex * _Nullable rhs,
  double * _Nonnull rdsum,
  double * _Nonnull rdscal,
  const __LAPACK_int * _Nullable ipiv,
  const __LAPACK_int * _Nullable jpiv)
__LAPACK_ALIAS(zlatdf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
zhetrs_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhetrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhecon_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  const double * _Nonnull anorm,
  double * _Nonnull rcond,
  __LAPACK_double_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhecon)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhetrs_rook_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhetrs_rook)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhecon_rook_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  const double * _Nonnull anorm,
  double * _Nonnull rcond,
  __LAPACK_double_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhecon_rook)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zheequb_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable s,
  double * _Nonnull scond,
  double * _Nonnull amax,
  __LAPACK_double_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zheequb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlatrd_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable e,
  __LAPACK_double_complex * _Nullable tau,
  __LAPACK_double_complex * _Nullable w,
  const __LAPACK_int * _Nonnull ldw)
__LAPACK_ALIAS(zlatrd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zungql_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable tau,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zungql)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhetrf_rk_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable e,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhetrf_rk)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhetri_3x_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable e,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhetri_3x)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhetri_3_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable e,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhetri_3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
zsytrs_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zsytrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlaqhb_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  __LAPACK_double_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  const double * _Nullable s,
  const double * _Nonnull scond,
  const double * _Nonnull amax,
  char * _Nonnull equed)
__LAPACK_ALIAS(zlaqhb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlaqsb_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  __LAPACK_double_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  const double * _Nullable s,
  const double * _Nonnull scond,
  const double * _Nonnull amax,
  char * _Nonnull equed)
__LAPACK_ALIAS(zlaqsb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zpbequ_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  const __LAPACK_double_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  double * _Nullable s,
  double * _Nonnull scond,
  double * _Nonnull amax,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zpbequ)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zpbtrs_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_double_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zpbtrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zpbsv_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_double_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zpbsv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zpstf2_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable piv,
  __LAPACK_int * _Nonnull rank,
  const double * _Nonnull tol,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zpstf2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zpstrf_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable piv,
  __LAPACK_int * _Nonnull rank,
  const double * _Nonnull tol,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zpstrf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zspmv_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nonnull alpha,
  const __LAPACK_double_complex * _Nullable ap,
  const __LAPACK_double_complex * _Nullable x,
  const __LAPACK_int * _Nonnull incx,
  const __LAPACK_double_complex * _Nonnull beta,
  __LAPACK_double_complex * _Nullable y,
  const __LAPACK_int * _Nonnull incy)
__LAPACK_ALIAS(zspmv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zsycon_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  const double * _Nonnull anorm,
  double * _Nonnull rcond,
  __LAPACK_double_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zsycon)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zsytrs_rook_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zsytrs_rook)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zsycon_rook_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  const double * _Nonnull anorm,
  double * _Nonnull rcond,
  __LAPACK_double_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zsycon_rook)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zsyequb_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable s,
  double * _Nonnull scond,
  double * _Nonnull amax,
  __LAPACK_double_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zsyequb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zsytrf_rk_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable e,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zsytrf_rk)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zsytri_3x_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable e,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zsytri_3x)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zsytri_3_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable e,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zsytri_3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
ztpcon_(
  const char * _Nonnull norm,
  const char * _Nonnull uplo,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable ap,
  double * _Nonnull rcond,
  __LAPACK_double_complex * _Nonnull work,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ztpcon)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ztptrs_(
  const char * _Nonnull uplo,
  const char * _Nonnull trans,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_double_complex * _Nullable ap,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ztptrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zungrq_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable tau,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zungrq)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zunhr_col_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_double_complex * _Nullable d,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zunhr_col)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



float
cla_herpvgrw_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull info,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  const __LAPACK_int * _Nullable ipiv,
  float * _Nullable work)
__LAPACK_ALIAS(cla_herpvgrw)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



float
cla_syrpvgrw_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull info,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  const __LAPACK_int * _Nullable ipiv,
  float * _Nullable work)
__LAPACK_ALIAS(cla_syrpvgrw)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



float
sla_syrpvgrw_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull info,
  const float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  const __LAPACK_int * _Nullable ipiv,
  float * _Nullable work)
__LAPACK_ALIAS(sla_syrpvgrw)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



double
dla_syrpvgrw_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull info,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  const __LAPACK_int * _Nullable ipiv,
  double * _Nullable work)
__LAPACK_ALIAS(dla_syrpvgrw)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



double
zla_herpvgrw_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull info,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  const __LAPACK_int * _Nullable ipiv,
  double * _Nullable work)
__LAPACK_ALIAS(zla_herpvgrw)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



double
zla_syrpvgrw_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull info,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  const __LAPACK_int * _Nullable ipiv,
  double * _Nullable work)
__LAPACK_ALIAS(zla_syrpvgrw)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slascl_(
  const char * _Nonnull type,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  const float * _Nonnull cfrom,
  const float * _Nonnull cto,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slascl)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slasq6_(
  const __LAPACK_int * _Nonnull i0,
  const __LAPACK_int * _Nonnull n0,
  float * _Nullable z,
  const __LAPACK_int * _Nonnull pp,
  float * _Nonnull dmin,
  float * _Nonnull dmin1,
  float * _Nonnull dmin2,
  float * _Nonnull dn,
  float * _Nonnull dnm1,
  float * _Nonnull dnm2)
__LAPACK_ALIAS(slasq6)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgbsv_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_float_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgbsv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgebak_(
  const char * _Nonnull job,
  const char * _Nonnull side,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ilo,
  const __LAPACK_int * _Nonnull ihi,
  const float * _Nullable scale,
  const __LAPACK_int * _Nonnull m,
  __LAPACK_float_complex * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgebak)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgebd2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable d,
  float * _Nullable e,
  __LAPACK_float_complex * _Nullable tauq,
  __LAPACK_float_complex * _Nullable taup,
  __LAPACK_float_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgebd2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgeequ_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable r,
  float * _Nullable c,
  float * _Nonnull rowcnd,
  float * _Nonnull colcnd,
  float * _Nonnull amax,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgeequ)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgeequb_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable r,
  float * _Nullable c,
  float * _Nonnull rowcnd,
  float * _Nonnull colcnd,
  float * _Nonnull amax,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgeequb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
clahr2_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable tau,
  __LAPACK_float_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_float_complex * _Nullable y,
  const __LAPACK_int * _Nonnull ldy)
__LAPACK_ALIAS(clahr2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
clascl_(
  const char * _Nonnull type,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  const float * _Nonnull cfrom,
  const float * _Nonnull cto,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(clascl)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
claqp2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull offset,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable jpvt,
  __LAPACK_float_complex * _Nullable tau,
  float * _Nullable vn1,
  float * _Nullable vn2,
  __LAPACK_float_complex * _Nullable work)
__LAPACK_ALIAS(claqp2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgeqp3_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable jpvt,
  __LAPACK_float_complex * _Nullable tau,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgeqp3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ctplqt2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull l,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ctplqt2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ctrtrs_(
  const char * _Nonnull uplo,
  const char * _Nonnull trans,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ctrtrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cungbr_(
  const char * _Nonnull vect,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable tau,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cungbr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
clatzm_(
  const char * _Nonnull side,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable v,
  const __LAPACK_int * _Nonnull incv,
  const __LAPACK_float_complex * _Nonnull tau,
  __LAPACK_float_complex * _Nullable c1,
  __LAPACK_float_complex * _Nullable c2,
  const __LAPACK_int * _Nonnull ldc,
  __LAPACK_float_complex * _Nullable work)
__LAPACK_ALIAS(clatzm)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
clarz_(
  const char * _Nonnull side,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull l,
  const __LAPACK_float_complex * _Nullable v,
  const __LAPACK_int * _Nonnull incv,
  const __LAPACK_float_complex * _Nonnull tau,
  __LAPACK_float_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  __LAPACK_float_complex * _Nullable work)
__LAPACK_ALIAS(clarz)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ctpqrt2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull l,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ctpqrt2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slagts_(
  const __LAPACK_int * _Nonnull job,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable a,
  const float * _Nullable b,
  const float * _Nullable c,
  const float * _Nullable d,
  const __LAPACK_int * _Nullable in,
  float * _Nullable y,
  float * _Nonnull tol,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slagts)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
claqge_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable r,
  const float * _Nullable c,
  const float * _Nonnull rowcnd,
  const float * _Nonnull colcnd,
  const float * _Nonnull amax,
  char * _Nonnull equed)
__LAPACK_ALIAS(claqge)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgtts2_(
  const __LAPACK_int * _Nonnull itrans,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_float_complex * _Nullable dl,
  const __LAPACK_float_complex * _Nullable d,
  const __LAPACK_float_complex * _Nullable du,
  const __LAPACK_float_complex * _Nullable du2,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb)
__LAPACK_ALIAS(cgtts2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
slaed1_(
  const __LAPACK_int * _Nonnull n,
  float * _Nullable d,
  float * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  __LAPACK_int * _Nullable indxq,
  float * _Nonnull rho,
  const __LAPACK_int * _Nonnull cutpnt,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slaed1)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chetrs_3_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable e,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chetrs_3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
checon_3_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable e,
  const __LAPACK_int * _Nullable ipiv,
  const float * _Nonnull anorm,
  float * _Nonnull rcond,
  __LAPACK_float_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(checon_3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chetrd_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable d,
  float * _Nullable e,
  __LAPACK_float_complex * _Nullable tau,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chetrd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cheev_(
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable w,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cheev)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cheev_2stage_(
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable w,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cheev_2stage)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
cla_heamv_(
  const __LAPACK_int * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const float * _Nonnull alpha,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable x,
  const __LAPACK_int * _Nonnull incx,
  const float * _Nonnull beta,
  float * _Nullable y,
  const __LAPACK_int * _Nonnull incy)
__LAPACK_ALIAS(cla_heamv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
clahef_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_int * _Nonnull kb,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nullable w,
  const __LAPACK_int * _Nonnull ldw,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(clahef)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chetrs2_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chetrs2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
clahef_aa_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull j1,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nullable h,
  const __LAPACK_int * _Nonnull ldh,
  __LAPACK_float_complex * _Nullable work)
__LAPACK_ALIAS(clahef_aa)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
clahef_rook_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_int * _Nonnull kb,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nullable w,
  const __LAPACK_int * _Nonnull ldw,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(clahef_rook)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chfrk_(
  const char * _Nonnull transr,
  const char * _Nonnull uplo,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const float * _Nonnull alpha,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nonnull beta,
  __LAPACK_float_complex * _Nullable c)
__LAPACK_ALIAS(chfrk)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chpev_(
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable ap,
  float * _Nullable w,
  __LAPACK_float_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_float_complex * _Nonnull work,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chpev)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cla_syamv_(
  const __LAPACK_int * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const float * _Nonnull alpha,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable x,
  const __LAPACK_int * _Nonnull incx,
  const float * _Nonnull beta,
  float * _Nullable y,
  const __LAPACK_int * _Nonnull incy)
__LAPACK_ALIAS(cla_syamv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
csymv_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nonnull alpha,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable x,
  const __LAPACK_int * _Nonnull incx,
  const __LAPACK_float_complex * _Nonnull beta,
  __LAPACK_float_complex * _Nullable y,
  const __LAPACK_int * _Nonnull incy)
__LAPACK_ALIAS(csymv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
clahrd_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable tau,
  __LAPACK_float_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_float_complex * _Nullable y,
  const __LAPACK_int * _Nonnull ldy)
__LAPACK_ALIAS(clahrd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
clasyf_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_int * _Nonnull kb,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nullable w,
  const __LAPACK_int * _Nonnull ldw,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(clasyf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
clasyf_aa_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull j1,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nullable h,
  const __LAPACK_int * _Nonnull ldh,
  __LAPACK_float_complex * _Nullable work)
__LAPACK_ALIAS(clasyf_aa)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
clasyf_rook_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_int * _Nonnull kb,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nullable w,
  const __LAPACK_int * _Nonnull ldw,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(clasyf_rook)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
clatps_(
  const char * _Nonnull uplo,
  const char * _Nonnull trans,
  const char * _Nonnull diag,
  const char * _Nonnull normin,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable ap,
  __LAPACK_float_complex * _Nullable x,
  float * _Nonnull scale,
  float * _Nullable cnorm,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(clatps)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cpbcon_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  const __LAPACK_float_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  const float * _Nonnull anorm,
  float * _Nonnull rcond,
  __LAPACK_float_complex * _Nonnull work,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cpbcon)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
csytrs_3_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable e,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(csytrs_3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
csycon_3_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable e,
  const __LAPACK_int * _Nullable ipiv,
  const float * _Nonnull anorm,
  float * _Nonnull rcond,
  __LAPACK_float_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(csycon_3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
csytrs2_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(csytrs2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ctrcon_(
  const char * _Nonnull norm,
  const char * _Nonnull uplo,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nonnull rcond,
  __LAPACK_float_complex * _Nonnull work,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ctrcon)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlascl_(
  const char * _Nonnull type,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  const double * _Nonnull cfrom,
  const double * _Nonnull cto,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlascl)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlasq6_(
  const __LAPACK_int * _Nonnull i0,
  const __LAPACK_int * _Nonnull n0,
  double * _Nullable z,
  const __LAPACK_int * _Nonnull pp,
  double * _Nonnull dmin,
  double * _Nonnull dmin1,
  double * _Nonnull dmin2,
  double * _Nonnull dn,
  double * _Nonnull dnm1,
  double * _Nonnull dnm2)
__LAPACK_ALIAS(dlasq6)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlagts_(
  const __LAPACK_int * _Nonnull job,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable a,
  const double * _Nullable b,
  const double * _Nullable c,
  const double * _Nullable d,
  const __LAPACK_int * _Nullable in,
  double * _Nullable y,
  double * _Nonnull tol,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlagts)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgbsv_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  const __LAPACK_int * _Nonnull nrhs,
  double * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  __LAPACK_int * _Nullable ipiv,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgbsv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgebak_(
  const char * _Nonnull job,
  const char * _Nonnull side,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ilo,
  const __LAPACK_int * _Nonnull ihi,
  const double * _Nullable scale,
  const __LAPACK_int * _Nonnull m,
  double * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgebak)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgebd2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable d,
  double * _Nullable e,
  double * _Nullable tauq,
  double * _Nullable taup,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgebd2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgeequ_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable r,
  double * _Nullable c,
  double * _Nonnull rowcnd,
  double * _Nonnull colcnd,
  double * _Nonnull amax,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgeequ)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgeequb_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable r,
  double * _Nullable c,
  double * _Nonnull rowcnd,
  double * _Nonnull colcnd,
  double * _Nonnull amax,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgeequb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlahr2_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull nb,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable tau,
  double * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  double * _Nullable y,
  const __LAPACK_int * _Nonnull ldy)
__LAPACK_ALIAS(dlahr2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlanv2_(
  double * _Nonnull a,
  double * _Nonnull b,
  double * _Nonnull c,
  double * _Nonnull d,
  double * _Nonnull rt1r,
  double * _Nonnull rt1i,
  double * _Nonnull rt2r,
  double * _Nonnull rt2i,
  double * _Nonnull cs,
  double * _Nonnull sn)
__LAPACK_ALIAS(dlanv2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dtrexc_(
  const char * _Nonnull compq,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  double * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  __LAPACK_int * _Nonnull ifst,
  __LAPACK_int * _Nonnull ilst,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dtrexc)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlag2_(
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  const double * _Nonnull safmin,
  double * _Nonnull scale1,
  double * _Nonnull scale2,
  double * _Nonnull wr1,
  double * _Nonnull wr2,
  double * _Nonnull wi)
__LAPACK_ALIAS(dlag2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlaqp2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull offset,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable jpvt,
  double * _Nullable tau,
  double * _Nullable vn1,
  double * _Nullable vn2,
  double * _Nullable work)
__LAPACK_ALIAS(dlaqp2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dtplqt2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull l,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dtplqt2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dtrtrs_(
  const char * _Nonnull uplo,
  const char * _Nonnull trans,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dtrtrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dorgbr_(
  const char * _Nonnull vect,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable tau,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dorgbr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlatzm_(
  const char * _Nonnull side,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable v,
  const __LAPACK_int * _Nonnull incv,
  const double * _Nonnull tau,
  double * _Nullable c1,
  double * _Nullable c2,
  const __LAPACK_int * _Nonnull ldc,
  double * _Nullable work)
__LAPACK_ALIAS(dlatzm)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlarz_(
  const char * _Nonnull side,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull l,
  const double * _Nullable v,
  const __LAPACK_int * _Nonnull incv,
  const double * _Nonnull tau,
  double * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  double * _Nullable work)
__LAPACK_ALIAS(dlarz)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dtpqrt2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull l,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dtpqrt2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlaqge_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable r,
  const double * _Nullable c,
  const double * _Nonnull rowcnd,
  const double * _Nonnull colcnd,
  const double * _Nonnull amax,
  char * _Nonnull equed)
__LAPACK_ALIAS(dlaqge)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgtts2_(
  const __LAPACK_int * _Nonnull itrans,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const double * _Nullable dl,
  const double * _Nullable d,
  const double * _Nullable du,
  const double * _Nullable du2,
  const __LAPACK_int * _Nullable ipiv,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb)
__LAPACK_ALIAS(dgtts2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dla_syamv_(
  const __LAPACK_int * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const double * _Nonnull alpha,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable x,
  const __LAPACK_int * _Nonnull incx,
  const double * _Nonnull beta,
  double * _Nullable y,
  const __LAPACK_int * _Nonnull incy)
__LAPACK_ALIAS(dla_syamv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
dlaed1_(
  const __LAPACK_int * _Nonnull n,
  double * _Nullable d,
  double * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  __LAPACK_int * _Nullable indxq,
  double * _Nonnull rho,
  const __LAPACK_int * _Nonnull cutpnt,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlaed1)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlahrd_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull nb,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable tau,
  double * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  double * _Nullable y,
  const __LAPACK_int * _Nonnull ldy)
__LAPACK_ALIAS(dlahrd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlasyf_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_int * _Nonnull kb,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  double * _Nullable w,
  const __LAPACK_int * _Nonnull ldw,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlasyf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlasyf_aa_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull j1,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull nb,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  double * _Nullable h,
  const __LAPACK_int * _Nonnull ldh,
  double * _Nullable work)
__LAPACK_ALIAS(dlasyf_aa)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlasyf_rook_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_int * _Nonnull kb,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  double * _Nullable w,
  const __LAPACK_int * _Nonnull ldw,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlasyf_rook)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlatps_(
  const char * _Nonnull uplo,
  const char * _Nonnull trans,
  const char * _Nonnull diag,
  const char * _Nonnull normin,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable ap,
  double * _Nullable x,
  double * _Nonnull scale,
  double * _Nullable cnorm,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlatps)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
dpbcon_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  const double * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  const double * _Nonnull anorm,
  double * _Nonnull rcond,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dpbcon)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsfrk_(
  const char * _Nonnull transr,
  const char * _Nonnull uplo,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const double * _Nonnull alpha,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nonnull beta,
  double * _Nullable c)
__LAPACK_ALIAS(dsfrk)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
dsycon_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  const double * _Nonnull anorm,
  double * _Nonnull rcond,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsycon)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsytrs_3_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable e,
  const __LAPACK_int * _Nullable ipiv,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsytrs_3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsycon_rook_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  const double * _Nonnull anorm,
  double * _Nonnull rcond,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsycon_rook)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsytrd_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable d,
  double * _Nullable e,
  double * _Nullable tau,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsytrd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsytrs2_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsytrs2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dtrcon_(
  const char * _Nonnull norm,
  const char * _Nonnull uplo,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nonnull rcond,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dtrcon)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgbsv_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  const __LAPACK_int * _Nonnull nrhs,
  float * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  __LAPACK_int * _Nullable ipiv,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgbsv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgebak_(
  const char * _Nonnull job,
  const char * _Nonnull side,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ilo,
  const __LAPACK_int * _Nonnull ihi,
  const float * _Nullable scale,
  const __LAPACK_int * _Nonnull m,
  float * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgebak)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgebd2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable d,
  float * _Nullable e,
  float * _Nullable tauq,
  float * _Nullable taup,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgebd2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgeequ_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable r,
  float * _Nullable c,
  float * _Nonnull rowcnd,
  float * _Nonnull colcnd,
  float * _Nonnull amax,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgeequ)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgeequb_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable r,
  float * _Nullable c,
  float * _Nonnull rowcnd,
  float * _Nonnull colcnd,
  float * _Nonnull amax,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgeequb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slahr2_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull nb,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable tau,
  float * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  float * _Nullable y,
  const __LAPACK_int * _Nonnull ldy)
__LAPACK_ALIAS(slahr2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slanv2_(
  float * _Nonnull a,
  float * _Nonnull b,
  float * _Nonnull c,
  float * _Nonnull d,
  float * _Nonnull rt1r,
  float * _Nonnull rt1i,
  float * _Nonnull rt2r,
  float * _Nonnull rt2i,
  float * _Nonnull cs,
  float * _Nonnull sn)
__LAPACK_ALIAS(slanv2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
strexc_(
  const char * _Nonnull compq,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  float * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  __LAPACK_int * _Nonnull ifst,
  __LAPACK_int * _Nonnull ilst,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(strexc)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slag2_(
  const float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  const float * _Nonnull safmin,
  float * _Nonnull scale1,
  float * _Nonnull scale2,
  float * _Nonnull wr1,
  float * _Nonnull wr2,
  float * _Nonnull wi)
__LAPACK_ALIAS(slag2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slaqp2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull offset,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable jpvt,
  float * _Nullable tau,
  float * _Nullable vn1,
  float * _Nullable vn2,
  float * _Nullable work)
__LAPACK_ALIAS(slaqp2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
stplqt2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull l,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(stplqt2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
stpqrt2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull l,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(stpqrt2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
strtrs_(
  const char * _Nonnull uplo,
  const char * _Nonnull trans,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(strtrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sorgbr_(
  const char * _Nonnull vect,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable tau,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sorgbr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slatzm_(
  const char * _Nonnull side,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable v,
  const __LAPACK_int * _Nonnull incv,
  const float * _Nonnull tau,
  float * _Nullable c1,
  float * _Nullable c2,
  const __LAPACK_int * _Nonnull ldc,
  float * _Nullable work)
__LAPACK_ALIAS(slatzm)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slarz_(
  const char * _Nonnull side,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull l,
  const float * _Nullable v,
  const __LAPACK_int * _Nonnull incv,
  const float * _Nonnull tau,
  float * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  float * _Nullable work)
__LAPACK_ALIAS(slarz)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slaqge_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable r,
  const float * _Nullable c,
  const float * _Nonnull rowcnd,
  const float * _Nonnull colcnd,
  const float * _Nonnull amax,
  char * _Nonnull equed)
__LAPACK_ALIAS(slaqge)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgtts2_(
  const __LAPACK_int * _Nonnull itrans,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const float * _Nullable dl,
  const float * _Nullable d,
  const float * _Nullable du,
  const float * _Nullable du2,
  const __LAPACK_int * _Nullable ipiv,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb)
__LAPACK_ALIAS(sgtts2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sla_syamv_(
  const __LAPACK_int * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const float * _Nonnull alpha,
  const float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable x,
  const __LAPACK_int * _Nonnull incx,
  const float * _Nonnull beta,
  float * _Nullable y,
  const __LAPACK_int * _Nonnull incy)
__LAPACK_ALIAS(sla_syamv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
slahrd_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull nb,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable tau,
  float * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  float * _Nullable y,
  const __LAPACK_int * _Nonnull ldy)
__LAPACK_ALIAS(slahrd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slasyf_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_int * _Nonnull kb,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  float * _Nullable w,
  const __LAPACK_int * _Nonnull ldw,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slasyf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slasyf_aa_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull j1,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull nb,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  float * _Nullable h,
  const __LAPACK_int * _Nonnull ldh,
  float * _Nullable work)
__LAPACK_ALIAS(slasyf_aa)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slasyf_rook_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_int * _Nonnull kb,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  float * _Nullable w,
  const __LAPACK_int * _Nonnull ldw,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slasyf_rook)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slatps_(
  const char * _Nonnull uplo,
  const char * _Nonnull trans,
  const char * _Nonnull diag,
  const char * _Nonnull normin,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable ap,
  float * _Nullable x,
  float * _Nonnull scale,
  float * _Nullable cnorm,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slatps)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
spbcon_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  const float * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  const float * _Nonnull anorm,
  float * _Nonnull rcond,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(spbcon)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssfrk_(
  const char * _Nonnull transr,
  const char * _Nonnull uplo,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const float * _Nonnull alpha,
  const float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nonnull beta,
  float * _Nullable c)
__LAPACK_ALIAS(ssfrk)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssycon_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  const float * _Nonnull anorm,
  float * _Nonnull rcond,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssycon)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssytrs_3_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable e,
  const __LAPACK_int * _Nullable ipiv,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssytrs_3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssycon_rook_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  const float * _Nonnull anorm,
  float * _Nonnull rcond,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssycon_rook)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssytrd_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable d,
  float * _Nullable e,
  float * _Nullable tau,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssytrd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssytrs2_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssytrs2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
strcon_(
  const char * _Nonnull norm,
  const char * _Nonnull uplo,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nonnull rcond,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(strcon)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
zgbsv_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_double_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgbsv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgebak_(
  const char * _Nonnull job,
  const char * _Nonnull side,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ilo,
  const __LAPACK_int * _Nonnull ihi,
  const double * _Nullable scale,
  const __LAPACK_int * _Nonnull m,
  __LAPACK_double_complex * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgebak)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgebd2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable d,
  double * _Nullable e,
  __LAPACK_double_complex * _Nullable tauq,
  __LAPACK_double_complex * _Nullable taup,
  __LAPACK_double_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgebd2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgeequ_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable r,
  double * _Nullable c,
  double * _Nonnull rowcnd,
  double * _Nonnull colcnd,
  double * _Nonnull amax,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgeequ)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgeequb_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable r,
  double * _Nullable c,
  double * _Nonnull rowcnd,
  double * _Nonnull colcnd,
  double * _Nonnull amax,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgeequb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlahr2_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable tau,
  __LAPACK_double_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_double_complex * _Nullable y,
  const __LAPACK_int * _Nonnull ldy)
__LAPACK_ALIAS(zlahr2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlascl_(
  const char * _Nonnull type,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  const double * _Nonnull cfrom,
  const double * _Nonnull cto,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zlascl)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlaqp2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull offset,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable jpvt,
  __LAPACK_double_complex * _Nullable tau,
  double * _Nullable vn1,
  double * _Nullable vn2,
  __LAPACK_double_complex * _Nullable work)
__LAPACK_ALIAS(zlaqp2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgeqp3_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable jpvt,
  __LAPACK_double_complex * _Nullable tau,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgeqp3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ztplqt2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull l,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ztplqt2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ztrtrs_(
  const char * _Nonnull uplo,
  const char * _Nonnull trans,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ztrtrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zungbr_(
  const char * _Nonnull vect,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable tau,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zungbr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlatzm_(
  const char * _Nonnull side,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable v,
  const __LAPACK_int * _Nonnull incv,
  const __LAPACK_double_complex * _Nonnull tau,
  __LAPACK_double_complex * _Nullable c1,
  __LAPACK_double_complex * _Nullable c2,
  const __LAPACK_int * _Nonnull ldc,
  __LAPACK_double_complex * _Nullable work)
__LAPACK_ALIAS(zlatzm)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlarz_(
  const char * _Nonnull side,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull l,
  const __LAPACK_double_complex * _Nullable v,
  const __LAPACK_int * _Nonnull incv,
  const __LAPACK_double_complex * _Nonnull tau,
  __LAPACK_double_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  __LAPACK_double_complex * _Nullable work)
__LAPACK_ALIAS(zlarz)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ztpqrt2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull l,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ztpqrt2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlaqge_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable r,
  const double * _Nullable c,
  const double * _Nonnull rowcnd,
  const double * _Nonnull colcnd,
  const double * _Nonnull amax,
  char * _Nonnull equed)
__LAPACK_ALIAS(zlaqge)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgtts2_(
  const __LAPACK_int * _Nonnull itrans,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_double_complex * _Nullable dl,
  const __LAPACK_double_complex * _Nullable d,
  const __LAPACK_double_complex * _Nullable du,
  const __LAPACK_double_complex * _Nullable du2,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb)
__LAPACK_ALIAS(zgtts2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
zhetrs_3_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable e,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhetrs_3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhecon_3_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable e,
  const __LAPACK_int * _Nullable ipiv,
  const double * _Nonnull anorm,
  double * _Nonnull rcond,
  __LAPACK_double_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhecon_3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhetrd_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable d,
  double * _Nullable e,
  __LAPACK_double_complex * _Nullable tau,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhetrd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zheev_(
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable w,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zheev)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zheev_2stage_(
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable w,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zheev_2stage)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zla_heamv_(
  const __LAPACK_int * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const double * _Nonnull alpha,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable x,
  const __LAPACK_int * _Nonnull incx,
  const double * _Nonnull beta,
  double * _Nullable y,
  const __LAPACK_int * _Nonnull incy)
__LAPACK_ALIAS(zla_heamv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlahef_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_int * _Nonnull kb,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nullable w,
  const __LAPACK_int * _Nonnull ldw,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zlahef)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhetrs2_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhetrs2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlahef_aa_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull j1,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nullable h,
  const __LAPACK_int * _Nonnull ldh,
  __LAPACK_double_complex * _Nullable work)
__LAPACK_ALIAS(zlahef_aa)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlahef_rook_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_int * _Nonnull kb,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nullable w,
  const __LAPACK_int * _Nonnull ldw,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zlahef_rook)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhfrk_(
  const char * _Nonnull transr,
  const char * _Nonnull uplo,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const double * _Nonnull alpha,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nonnull beta,
  __LAPACK_double_complex * _Nullable c)
__LAPACK_ALIAS(zhfrk)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhpev_(
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable ap,
  double * _Nullable w,
  __LAPACK_double_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_double_complex * _Nonnull work,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhpev)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zla_syamv_(
  const __LAPACK_int * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const double * _Nonnull alpha,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable x,
  const __LAPACK_int * _Nonnull incx,
  const double * _Nonnull beta,
  double * _Nullable y,
  const __LAPACK_int * _Nonnull incy)
__LAPACK_ALIAS(zla_syamv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zsymv_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nonnull alpha,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable x,
  const __LAPACK_int * _Nonnull incx,
  const __LAPACK_double_complex * _Nonnull beta,
  __LAPACK_double_complex * _Nullable y,
  const __LAPACK_int * _Nonnull incy)
__LAPACK_ALIAS(zsymv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlahrd_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable tau,
  __LAPACK_double_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_double_complex * _Nullable y,
  const __LAPACK_int * _Nonnull ldy)
__LAPACK_ALIAS(zlahrd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlasyf_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_int * _Nonnull kb,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nullable w,
  const __LAPACK_int * _Nonnull ldw,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zlasyf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlasyf_aa_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull j1,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nullable h,
  const __LAPACK_int * _Nonnull ldh,
  __LAPACK_double_complex * _Nullable work)
__LAPACK_ALIAS(zlasyf_aa)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlasyf_rook_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_int * _Nonnull kb,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nullable w,
  const __LAPACK_int * _Nonnull ldw,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zlasyf_rook)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlatps_(
  const char * _Nonnull uplo,
  const char * _Nonnull trans,
  const char * _Nonnull diag,
  const char * _Nonnull normin,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable ap,
  __LAPACK_double_complex * _Nullable x,
  double * _Nonnull scale,
  double * _Nullable cnorm,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zlatps)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zpbcon_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  const __LAPACK_double_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  const double * _Nonnull anorm,
  double * _Nonnull rcond,
  __LAPACK_double_complex * _Nonnull work,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zpbcon)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zsytrs_3_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable e,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zsytrs_3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zsycon_3_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable e,
  const __LAPACK_int * _Nullable ipiv,
  const double * _Nonnull anorm,
  double * _Nonnull rcond,
  __LAPACK_double_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zsycon_3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zsytrs2_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zsytrs2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ztrcon_(
  const char * _Nonnull norm,
  const char * _Nonnull uplo,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nonnull rcond,
  __LAPACK_double_complex * _Nonnull work,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ztrcon)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));









float
cla_porcond_x_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  const __LAPACK_float_complex * _Nullable x,
  __LAPACK_int * _Nonnull info,
  __LAPACK_float_complex * _Nonnull work,
  float * _Nullable rwork)
__LAPACK_ALIAS(cla_porcond_x)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



double
zla_porcond_x_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  const __LAPACK_double_complex * _Nullable x,
  __LAPACK_int * _Nonnull info,
  __LAPACK_double_complex * _Nonnull work,
  double * _Nullable rwork)
__LAPACK_ALIAS(zla_porcond_x)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
cgbtrs_(
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_float_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgbtrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
cgebrd_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable d,
  float * _Nullable e,
  __LAPACK_float_complex * _Nullable tauq,
  __LAPACK_float_complex * _Nullable taup,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgebrd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
clatrs_(
  const char * _Nonnull uplo,
  const char * _Nonnull trans,
  const char * _Nonnull diag,
  const char * _Nonnull normin,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable x,
  float * _Nonnull scale,
  float * _Nullable cnorm,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(clatrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
cggbak_(
  const char * _Nonnull job,
  const char * _Nonnull side,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ilo,
  const __LAPACK_int * _Nonnull ihi,
  const float * _Nullable lscale,
  const float * _Nullable rscale,
  const __LAPACK_int * _Nonnull m,
  __LAPACK_float_complex * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cggbak)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
claswlq_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull mb,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(claswlq)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgels_(
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgels)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
clatsqr_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull mb,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(clatsqr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cla_geamv_(
  const __LAPACK_int * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const float * _Nonnull alpha,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable x,
  const __LAPACK_int * _Nonnull incx,
  const float * _Nonnull beta,
  float * _Nullable y,
  const __LAPACK_int * _Nonnull incy)
__LAPACK_ALIAS(cla_geamv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgetsls_(
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgetsls)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));


void
cungtsqr_row_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull mb,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cungtsqr_row)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgttrs_(
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_float_complex * _Nullable dl,
  const __LAPACK_float_complex * _Nullable d,
  const __LAPACK_float_complex * _Nullable du,
  const __LAPACK_float_complex * _Nullable du2,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgttrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgtcon_(
  const char * _Nonnull norm,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable dl,
  const __LAPACK_float_complex * _Nullable d,
  const __LAPACK_float_complex * _Nullable du,
  const __LAPACK_float_complex * _Nullable du2,
  const __LAPACK_int * _Nullable ipiv,
  const float * _Nonnull anorm,
  float * _Nonnull rcond,
  __LAPACK_float_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgtcon)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chetrd_he2hb_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  __LAPACK_float_complex * _Nullable tau,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chetrd_he2hb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
claed0_(
  const __LAPACK_int * _Nonnull qsiz,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable d,
  float * _Nullable e,
  __LAPACK_float_complex * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  __LAPACK_float_complex * _Nullable qstore,
  const __LAPACK_int * _Nonnull ldqs,
  float * _Nullable rwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(claed0)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sstedc_(
  const char * _Nonnull compz,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable d,
  float * _Nullable e,
  float * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sstedc)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slarrc_(
  const char * _Nonnull jobt,
  const __LAPACK_int * _Nonnull n,
  const float * _Nonnull vl,
  const float * _Nonnull vu,
  const float * _Nullable d,
  const float * _Nullable e,
  const float * _Nonnull  pivmin,
  __LAPACK_int * _Nonnull eigcnt,
  __LAPACK_int * _Nonnull lcnt,
  __LAPACK_int * _Nonnull rcnt,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slarrc)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slarrk_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull iw,
  const float * _Nonnull gl,
  const float * _Nonnull gu,
  const float * _Nullable d,
  const float * _Nullable e2,
  const float * _Nonnull pivmin,
  const float * _Nonnull reltol,
  float * _Nonnull w,
  float * _Nonnull werr,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slarrk)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chesv_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chesv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chetrs_aa_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chetrs_aa)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chesv_aa_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chesv_aa)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chetrf_aa_2stage_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable tb,
  const __LAPACK_int * _Nonnull ltb,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nullable ipiv2,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chetrf_aa_2stage)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
clahef_rk_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_int * _Nonnull kb,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable e,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nullable w,
  const __LAPACK_int * _Nonnull ldw,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(clahef_rk)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chesv_rook_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chesv_rook)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cupmtr_(
  const char * _Nonnull side,
  const char * _Nonnull uplo,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable ap,
  const __LAPACK_float_complex * _Nullable tau,
  __LAPACK_float_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  __LAPACK_float_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cupmtr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
clasyf_rk_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_int * _Nonnull kb,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable e,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nullable w,
  const __LAPACK_int * _Nonnull ldw,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(clasyf_rk)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
ctfsm_(
  const char * _Nonnull transr,
  const char * _Nonnull side,
  const char * _Nonnull uplo,
  const char * _Nonnull trans,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nonnull alpha,
  const __LAPACK_float_complex * _Nullable a,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb)
__LAPACK_ALIAS(ctfsm)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
csysv_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(csysv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
csytrs_aa_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(csytrs_aa)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
csysv_aa_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(csysv_aa)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
csytrf_aa_2stage_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable tb,
  const __LAPACK_int * _Nonnull ltb,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nullable ipiv2,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(csytrf_aa_2stage)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
csysv_rook_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(csysv_rook)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ctbcon_(
  const char * _Nonnull norm,
  const char * _Nonnull uplo,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  const __LAPACK_float_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  float * _Nonnull rcond,
  __LAPACK_float_complex * _Nonnull work,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ctbcon)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ctbtrs_(
  const char * _Nonnull uplo,
  const char * _Nonnull trans,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_float_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ctbtrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cungtsqr_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull mb,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cungtsqr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
dgbtrs_(
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  const __LAPACK_int * _Nonnull nrhs,
  const double * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  const __LAPACK_int * _Nullable ipiv,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgbtrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
dgebrd_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable d,
  double * _Nullable e,
  double * _Nullable tauq,
  double * _Nullable taup,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgebrd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlatrs_(
  const char * _Nonnull uplo,
  const char * _Nonnull trans,
  const char * _Nonnull diag,
  const char * _Nonnull normin,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable x,
  double * _Nonnull scale,
  double * _Nullable cnorm,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlatrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
dlaexc_(
  const __LAPACK_bool * _Nonnull wantq,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  double * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  const __LAPACK_int * _Nonnull j1,
  const __LAPACK_int * _Nonnull n1,
  const __LAPACK_int * _Nonnull n2,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlaexc)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlaqtr_(
  const __LAPACK_bool * _Nonnull ltran,
  const __LAPACK_bool * _Nonnull lreal,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  const double * _Nullable b,
  const double * _Nonnull w,
  double * _Nonnull scale,
  double * _Nullable x,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlaqtr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dggbak_(
  const char * _Nonnull job,
  const char * _Nonnull side,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ilo,
  const __LAPACK_int * _Nonnull ihi,
  const double * _Nullable lscale,
  const double * _Nullable rscale,
  const __LAPACK_int * _Nonnull m,
  double * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dggbak)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlaswlq_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull mb,
  const __LAPACK_int * _Nonnull nb,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlaswlq)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgels_(
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgels)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlatsqr_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull mb,
  const __LAPACK_int * _Nonnull nb,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlatsqr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dla_geamv_(
  const __LAPACK_int * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const double * _Nonnull alpha,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable x,
  const __LAPACK_int * _Nonnull incx,
  const double * _Nonnull beta,
  double * _Nullable y,
  const __LAPACK_int * _Nonnull incy)
__LAPACK_ALIAS(dla_geamv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgetsls_(
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgetsls)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));

void
dorgtsqr_row_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull mb,
  const __LAPACK_int * _Nonnull nb,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dorgtsqr_row)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));

void
dlagv2_(
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nullable alphar,
  double * _Nullable alphai,
  double * _Nullable beta,
  double * _Nonnull csl,
  double * _Nonnull snl,
  double * _Nonnull csr,
  double * _Nonnull snr)
__LAPACK_ALIAS(dlagv2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgttrs_(
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const double * _Nullable dl,
  const double * _Nullable d,
  const double * _Nullable du,
  const double * _Nullable du2,
  const __LAPACK_int * _Nullable ipiv,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgttrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlarrc_(
  const char * _Nonnull jobt,
  const __LAPACK_int * _Nonnull n,
  const double * _Nonnull vl,
  const double * _Nonnull vu,
  const double * _Nullable d,
  const double * _Nullable e,
  const double * _Nonnull pivmin,
  __LAPACK_int * _Nonnull eigcnt,
  __LAPACK_int * _Nonnull lcnt,
  __LAPACK_int * _Nonnull rcnt,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlarrc)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlarrk_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull iw,
  const double * _Nonnull gl,
  const double * _Nonnull gu,
  const double * _Nullable d,
  const double * _Nullable e2,
  const double * _Nonnull pivmin,
  const double * _Nonnull reltol,
  double * _Nonnull w,
  double * _Nonnull werr,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlarrk)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlasyf_rk_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_int * _Nonnull kb,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable e,
  __LAPACK_int * _Nullable ipiv,
  double * _Nullable w,
  const __LAPACK_int * _Nonnull ldw,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlasyf_rk)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dopmtr_(
  const char * _Nonnull side,
  const char * _Nonnull uplo,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable ap,
  const double * _Nullable tau,
  double * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dopmtr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dorgtsqr_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull mb,
  const __LAPACK_int * _Nonnull nb,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dorgtsqr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
dtfsm_(
  const char * _Nonnull transr,
  const char * _Nonnull side,
  const char * _Nonnull uplo,
  const char * _Nonnull trans,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const double * _Nonnull alpha,
  const double * _Nullable a,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb)
__LAPACK_ALIAS(dtfsm)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsbev_(
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  double * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  double * _Nullable w,
  double * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsbev)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dstedc_(
  const char * _Nonnull compz,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable d,
  double * _Nullable e,
  double * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dstedc)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
dspgv_(
  const __LAPACK_int * _Nonnull itype,
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable ap,
  double * _Nullable bp,
  double * _Nullable w,
  double * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dspgv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dstevd_(
  const char * _Nonnull jobz,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable d,
  double * _Nullable e,
  double * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dstevd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsycon_3_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable e,
  const __LAPACK_int * _Nullable ipiv,
  const double * _Nonnull anorm,
  double * _Nonnull rcond,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsycon_3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsytrd_sy2sb_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  double * _Nullable tau,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsytrd_sy2sb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsyevd_(
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable w,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsyevd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsyevd_2stage_(
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable w,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsyevd_2stage)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsysv_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsysv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsytrs_aa_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsytrs_aa)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsysv_aa_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsysv_aa)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsytrf_aa_2stage_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable tb,
  const __LAPACK_int * _Nonnull ltb,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nullable ipiv2,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsytrf_aa_2stage)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsysv_rook_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsysv_rook)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dtbcon_(
  const char * _Nonnull norm,
  const char * _Nonnull uplo,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  const double * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  double * _Nonnull rcond,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dtbcon)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dtbtrs_(
  const char * _Nonnull uplo,
  const char * _Nonnull trans,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  const __LAPACK_int * _Nonnull nrhs,
  const double * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dtbtrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgbtrs_(
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  const __LAPACK_int * _Nonnull nrhs,
  const float * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  const __LAPACK_int * _Nullable ipiv,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgbtrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgebrd_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable d,
  float * _Nullable e,
  float * _Nullable tauq,
  float * _Nullable taup,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgebrd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slatrs_(
  const char * _Nonnull uplo,
  const char * _Nonnull trans,
  const char * _Nonnull diag,
  const char * _Nonnull normin,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable x,
  float * _Nonnull scale,
  float * _Nullable cnorm,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slatrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
slaexc_(
  const __LAPACK_bool * _Nonnull wantq,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  float * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  const __LAPACK_int * _Nonnull j1,
  const __LAPACK_int * _Nonnull n1,
  const __LAPACK_int * _Nonnull n2,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slaexc)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slaqtr_(
  const __LAPACK_bool * _Nonnull ltran,
  const __LAPACK_bool * _Nonnull lreal,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  const float * _Nullable b,
  const float * _Nonnull w,
  float * _Nonnull scale,
  float * _Nullable x,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slaqtr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sggbak_(
  const char * _Nonnull job,
  const char * _Nonnull side,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ilo,
  const __LAPACK_int * _Nonnull ihi,
  const float * _Nullable lscale,
  const float * _Nullable rscale,
  const __LAPACK_int * _Nonnull m,
  float * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sggbak)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slaswlq_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull mb,
  const __LAPACK_int * _Nonnull nb,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slaswlq)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgels_(
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgels)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slatsqr_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull mb,
  const __LAPACK_int * _Nonnull nb,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slatsqr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sla_geamv_(
  const __LAPACK_int * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const float * _Nonnull alpha,
  const float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable x,
  const __LAPACK_int * _Nonnull incx,
  const float * _Nonnull beta,
  float * _Nullable y,
  const __LAPACK_int * _Nonnull incy)
__LAPACK_ALIAS(sla_geamv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgetsls_(
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgetsls)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));

void
sorgtsqr_row_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull mb,
  const __LAPACK_int * _Nonnull nb,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sorgtsqr_row)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slagv2_(
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nullable alphar,
  float * _Nullable alphai,
  float * _Nullable beta,
  float * _Nonnull csl,
  float * _Nonnull snl,
  float * _Nonnull csr,
  float * _Nonnull snr)
__LAPACK_ALIAS(slagv2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgttrs_(
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const float * _Nullable dl,
  const float * _Nullable d,
  const float * _Nullable du,
  const float * _Nullable du2,
  const __LAPACK_int * _Nullable ipiv,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgttrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slasyf_rk_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_int * _Nonnull kb,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable e,
  __LAPACK_int * _Nullable ipiv,
  float * _Nullable w,
  const __LAPACK_int * _Nonnull ldw,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slasyf_rk)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sopmtr_(
  const char * _Nonnull side,
  const char * _Nonnull uplo,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable ap,
  const float * _Nullable tau,
  float * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sopmtr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sorgtsqr_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull mb,
  const __LAPACK_int * _Nonnull nb,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sorgtsqr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
stfsm_(
  const char * _Nonnull transr,
  const char * _Nonnull side,
  const char * _Nonnull uplo,
  const char * _Nonnull trans,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const float * _Nonnull alpha,
  const float * _Nullable a,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb)
__LAPACK_ALIAS(stfsm)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssbev_(
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  float * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  float * _Nullable w,
  float * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssbev)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sspgv_(
  const __LAPACK_int * _Nonnull itype,
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable ap,
  float * _Nullable bp,
  float * _Nullable w,
  float * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sspgv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sstevd_(
  const char * _Nonnull jobz,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable d,
  float * _Nullable e,
  float * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sstevd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssycon_3_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable e,
  const __LAPACK_int * _Nullable ipiv,
  const float * _Nonnull anorm,
  float * _Nonnull rcond,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssycon_3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssytrd_sy2sb_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  float * _Nullable tau,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssytrd_sy2sb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssyevd_(
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable w,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssyevd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssyevd_2stage_(
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable w,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssyevd_2stage)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssysv_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssysv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssytrs_aa_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssytrs_aa)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssysv_aa_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssysv_aa)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssytrf_aa_2stage_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable tb,
  const __LAPACK_int * _Nonnull ltb,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nullable ipiv2,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssytrf_aa_2stage)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssysv_rook_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssysv_rook)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
stbcon_(
  const char * _Nonnull norm,
  const char * _Nonnull uplo,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  const float * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  float * _Nonnull rcond,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(stbcon)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
stbtrs_(
  const char * _Nonnull uplo,
  const char * _Nonnull trans,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  const __LAPACK_int * _Nonnull nrhs,
  const float * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(stbtrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));









void
zgbtrs_(
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_double_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgbtrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgebrd_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable d,
  double * _Nullable e,
  __LAPACK_double_complex * _Nullable tauq,
  __LAPACK_double_complex * _Nullable taup,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgebrd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlatrs_(
  const char * _Nonnull uplo,
  const char * _Nonnull trans,
  const char * _Nonnull diag,
  const char * _Nonnull normin,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable x,
  double * _Nonnull scale,
  double * _Nullable cnorm,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zlatrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
zggbak_(
  const char * _Nonnull job,
  const char * _Nonnull side,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ilo,
  const __LAPACK_int * _Nonnull ihi,
  const double * _Nullable lscale,
  const double * _Nullable rscale,
  const __LAPACK_int * _Nonnull m,
  __LAPACK_double_complex * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zggbak)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlaswlq_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull mb,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zlaswlq)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgels_(
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgels)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlatsqr_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull mb,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zlatsqr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zla_geamv_(
  const __LAPACK_int * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const double * _Nonnull alpha,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable x,
  const __LAPACK_int * _Nonnull incx,
  const double * _Nonnull beta,
  double * _Nullable y,
  const __LAPACK_int * _Nonnull incy)
__LAPACK_ALIAS(zla_geamv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgetsls_(
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgetsls)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));

void
zungtsqr_row_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull mb,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zungtsqr_row)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));


void
zgttrs_(
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_double_complex * _Nullable dl,
  const __LAPACK_double_complex * _Nullable d,
  const __LAPACK_double_complex * _Nullable du,
  const __LAPACK_double_complex * _Nullable du2,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgttrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgtcon_(
  const char * _Nonnull norm,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable dl,
  const __LAPACK_double_complex * _Nullable d,
  const __LAPACK_double_complex * _Nullable du,
  const __LAPACK_double_complex * _Nullable du2,
  const __LAPACK_int * _Nullable ipiv,
  const double * _Nonnull anorm,
  double * _Nonnull rcond,
  __LAPACK_double_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgtcon)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhetrd_he2hb_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  __LAPACK_double_complex * _Nullable tau,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhetrd_he2hb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlaed0_(
  const __LAPACK_int * _Nonnull qsiz,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable d,
  double * _Nullable e,
  __LAPACK_double_complex * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  __LAPACK_double_complex * _Nullable qstore,
  const __LAPACK_int * _Nonnull ldqs,
  double * _Nullable rwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zlaed0)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhesv_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhesv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhetrs_aa_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhetrs_aa)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhesv_aa_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhesv_aa)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhetrf_aa_2stage_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable tb,
  const __LAPACK_int * _Nonnull ltb,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nullable ipiv2,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhetrf_aa_2stage)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlahef_rk_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_int * _Nonnull kb,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable e,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nullable w,
  const __LAPACK_int * _Nonnull ldw,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zlahef_rk)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhesv_rook_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhesv_rook)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zupmtr_(
  const char * _Nonnull side,
  const char * _Nonnull uplo,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable ap,
  const __LAPACK_double_complex * _Nullable tau,
  __LAPACK_double_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  __LAPACK_double_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zupmtr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlasyf_rk_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_int * _Nonnull kb,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable e,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nullable w,
  const __LAPACK_int * _Nonnull ldw,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zlasyf_rk)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
ztfsm_(
  const char * _Nonnull transr,
  const char * _Nonnull side,
  const char * _Nonnull uplo,
  const char * _Nonnull trans,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nonnull alpha,
  const __LAPACK_double_complex * _Nullable a,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb)
__LAPACK_ALIAS(ztfsm)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zsysv_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zsysv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zsytrs_aa_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zsytrs_aa)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zsysv_aa_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zsysv_aa)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zsytrf_aa_2stage_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable tb,
  const __LAPACK_int * _Nonnull ltb,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nullable ipiv2,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zsytrf_aa_2stage)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zsysv_rook_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zsysv_rook)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ztbcon_(
  const char * _Nonnull norm,
  const char * _Nonnull uplo,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  const __LAPACK_double_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  double * _Nonnull rcond,
  __LAPACK_double_complex * _Nonnull work,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ztbcon)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ztbtrs_(
  const char * _Nonnull uplo,
  const char * _Nonnull trans,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_double_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ztbtrs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zungtsqr_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull mb,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zungtsqr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



float
cla_gercond_x_(
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  const __LAPACK_int * _Nullable ipiv,
  const __LAPACK_float_complex * _Nullable x,
  __LAPACK_int * _Nonnull info,
  __LAPACK_float_complex * _Nonnull work,
  float * _Nullable rwork)
__LAPACK_ALIAS(cla_gercond_x)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



float
cla_hercond_x_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  const __LAPACK_int * _Nullable ipiv,
  const __LAPACK_float_complex * _Nullable x,
  __LAPACK_int * _Nonnull info,
  __LAPACK_float_complex * _Nonnull work,
  float * _Nullable rwork)
__LAPACK_ALIAS(cla_hercond_x)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



float
cla_porcond_c_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  const float * _Nullable c,
  const __LAPACK_bool * _Nonnull capply,
  __LAPACK_int * _Nonnull info,
  __LAPACK_float_complex * _Nonnull work,
  float * _Nullable rwork)
__LAPACK_ALIAS(cla_porcond_c)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



float
cla_syrcond_x_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  const __LAPACK_int * _Nullable ipiv,
  const __LAPACK_float_complex * _Nullable x,
  __LAPACK_int * _Nonnull info,
  __LAPACK_float_complex * _Nonnull work,
  float * _Nullable rwork)
__LAPACK_ALIAS(cla_syrcond_x)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



float
sla_porcond_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  const __LAPACK_int * _Nonnull cmode,
  const float * _Nullable c,
  __LAPACK_int * _Nonnull info,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork)
__LAPACK_ALIAS(sla_porcond)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



double
dla_porcond_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  const __LAPACK_int * _Nonnull cmode,
  const double * _Nullable c,
  __LAPACK_int * _Nonnull info,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork)
__LAPACK_ALIAS(dla_porcond)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



double
zla_gercond_x_(
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  const __LAPACK_int * _Nullable ipiv,
  const __LAPACK_double_complex * _Nullable x,
  __LAPACK_int * _Nonnull info,
  __LAPACK_double_complex * _Nonnull work,
  double * _Nullable rwork)
__LAPACK_ALIAS(zla_gercond_x)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



double
zla_hercond_x_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  const __LAPACK_int * _Nullable ipiv,
  const __LAPACK_double_complex * _Nullable x,
  __LAPACK_int * _Nonnull info,
  __LAPACK_double_complex * _Nonnull work,
  double * _Nullable rwork)
__LAPACK_ALIAS(zla_hercond_x)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



double
zla_porcond_c_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  const double * _Nullable c,
  const __LAPACK_bool * _Nonnull capply,
  __LAPACK_int * _Nonnull info,
  __LAPACK_double_complex * _Nonnull work,
  double * _Nullable rwork)
__LAPACK_ALIAS(zla_porcond_c)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



double
zla_syrcond_x_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  const __LAPACK_int * _Nullable ipiv,
  const __LAPACK_double_complex * _Nullable x,
  __LAPACK_int * _Nonnull info,
  __LAPACK_double_complex * _Nonnull work,
  double * _Nullable rwork)
__LAPACK_ALIAS(zla_syrcond_x)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
clatbs_(
  const char * _Nonnull uplo,
  const char * _Nonnull trans,
  const char * _Nonnull diag,
  const char * _Nonnull normin,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  const __LAPACK_float_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  __LAPACK_float_complex * _Nullable x,
  float * _Nonnull scale,
  float * _Nullable cnorm,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(clatbs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgbcon_(
  const char * _Nonnull norm,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  const __LAPACK_float_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  const __LAPACK_int * _Nullable ipiv,
  const float * _Nonnull anorm,
  float * _Nonnull rcond,
  __LAPACK_float_complex * _Nonnull work,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgbcon)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgbequ_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  const __LAPACK_float_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  float * _Nullable r,
  float * _Nullable c,
  float * _Nonnull rowcnd,
  float * _Nonnull colcnd,
  float * _Nonnull amax,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgbequ)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgbequb_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  const __LAPACK_float_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  float * _Nullable r,
  float * _Nullable c,
  float * _Nonnull rowcnd,
  float * _Nonnull colcnd,
  float * _Nonnull amax,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgbequb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
claqgb_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  __LAPACK_float_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  const float * _Nullable r,
  const float * _Nullable c,
  const float * _Nonnull rowcnd,
  const float * _Nonnull colcnd,
  const float * _Nonnull amax,
  char * _Nonnull equed)
__LAPACK_ALIAS(claqgb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cunm2r_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable tau,
  __LAPACK_float_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  __LAPACK_float_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cunm2r)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cggbal_(
  const char * _Nonnull job,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull ilo,
  __LAPACK_int * _Nonnull ihi,
  float * _Nullable lscale,
  float * _Nullable rscale,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cggbal)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cunml2_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable tau,
  __LAPACK_float_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  __LAPACK_float_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cunml2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ctplqt_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull l,
  const __LAPACK_int * _Nonnull mb,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_float_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ctplqt)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slasd8_(
  const __LAPACK_int * _Nonnull icompq,
  const __LAPACK_int * _Nonnull k,
  float * _Nullable d,
  float * _Nullable z,
  float * _Nullable vf,
  float * _Nullable vl,
  float * _Nullable difl,
  float * _Nullable difr,
  const __LAPACK_int * _Nonnull lddifr,
  float * _Nullable dsigma,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slasd8)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ctpqrt_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull l,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_float_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ctpqrt)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slasd0_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull sqre,
  float * _Nullable d,
  float * _Nullable e,
  float * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  float * _Nullable vt,
  const __LAPACK_int * _Nonnull ldvt,
  const __LAPACK_int * _Nonnull smlsiz,
  __LAPACK_int * _Nullable iwork,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slasd0)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));

void
clarfb_gett_(
  const char * _Nonnull ident,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_float_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull ldwork)
__LAPACK_ALIAS(clarfb_gett)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));


void
cgetsqrhrt_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull mb1,
  const __LAPACK_int * _Nonnull nb1,
  const __LAPACK_int * _Nonnull nb2,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgetsqrhrt)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cggqrf_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull p,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable taua,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nullable taub,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cggqrf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cunmr2_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable tau,
  __LAPACK_float_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  __LAPACK_float_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cunmr2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cggrqf_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull p,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable taua,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nullable taub,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cggrqf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
clagtm_(
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const float * _Nonnull alpha,
  const __LAPACK_float_complex * _Nullable dl,
  const __LAPACK_float_complex * _Nullable d,
  const __LAPACK_float_complex * _Nullable du,
  const __LAPACK_float_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  const float * _Nonnull beta,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb)
__LAPACK_ALIAS(clagtm)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chbtrd_(
  const char * _Nonnull vect,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  __LAPACK_float_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  float * _Nullable d,
  float * _Nullable e,
  __LAPACK_float_complex * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  __LAPACK_float_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chbtrd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chbev_(
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  __LAPACK_float_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  float * _Nullable w,
  __LAPACK_float_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_float_complex * _Nonnull work,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chbev)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));









void
slaed0_(
  const __LAPACK_int * _Nonnull icompq,
  const __LAPACK_int * _Nonnull qsiz,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable d,
  float * _Nullable e,
  float * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  float * _Nullable qstore,
  const __LAPACK_int * _Nonnull ldqs,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slaed0)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cunm2l_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable tau,
  __LAPACK_float_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  __LAPACK_float_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cunm2l)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chetrs_aa_2stage_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable tb,
  const __LAPACK_int * _Nonnull ltb,
  const __LAPACK_int * _Nullable ipiv,
  const __LAPACK_int * _Nullable ipiv2,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chetrs_aa_2stage)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chesv_rk_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable e,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chesv_rk)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chpgv_(
  const __LAPACK_int * _Nonnull itype,
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable ap,
  __LAPACK_float_complex * _Nullable bp,
  float * _Nullable w,
  __LAPACK_float_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_float_complex * _Nonnull work,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chpgv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
csytrs_aa_2stage_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable tb,
  const __LAPACK_int * _Nonnull ltb,
  const __LAPACK_int * _Nullable ipiv,
  const __LAPACK_int * _Nullable ipiv2,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(csytrs_aa_2stage)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
csysv_rk_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable e,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(csysv_rk)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlasd0_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull sqre,
  double * _Nullable d,
  double * _Nullable e,
  double * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  double * _Nullable vt,
  const __LAPACK_int * _Nonnull ldvt,
  const __LAPACK_int * _Nonnull smlsiz,
  __LAPACK_int * _Nullable iwork,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlasd0)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlasd8_(
  const __LAPACK_int * _Nonnull icompq,
  const __LAPACK_int * _Nonnull k,
  double * _Nullable d,
  double * _Nullable z,
  double * _Nullable vf,
  double * _Nullable vl,
  double * _Nullable difl,
  double * _Nullable difr,
  const __LAPACK_int * _Nonnull lddifr,
  double * _Nullable dsigma,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlasd8)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlatbs_(
  const char * _Nonnull uplo,
  const char * _Nonnull trans,
  const char * _Nonnull diag,
  const char * _Nonnull normin,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  const double * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  double * _Nullable x,
  double * _Nonnull scale,
  double * _Nullable cnorm,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlatbs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgbcon_(
  const char * _Nonnull norm,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  const double * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  const __LAPACK_int * _Nullable ipiv,
  const double * _Nonnull anorm,
  double * _Nonnull rcond,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgbcon)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgbequ_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  const double * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  double * _Nullable r,
  double * _Nullable c,
  double * _Nonnull rowcnd,
  double * _Nonnull colcnd,
  double * _Nonnull amax,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgbequ)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgbequb_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  const double * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  double * _Nullable r,
  double * _Nullable c,
  double * _Nonnull rowcnd,
  double * _Nonnull colcnd,
  double * _Nonnull amax,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgbequb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlaqgb_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  double * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  const double * _Nullable r,
  const double * _Nullable c,
  const double * _Nonnull rowcnd,
  const double * _Nonnull colcnd,
  const double * _Nonnull amax,
  char * _Nonnull equed)
__LAPACK_ALIAS(dlaqgb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dorm2r_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable tau,
  double * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dorm2r)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dggbal_(
  const char * _Nonnull job,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull ilo,
  __LAPACK_int * _Nonnull ihi,
  double * _Nullable lscale,
  double * _Nullable rscale,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dggbal)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dorml2_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable tau,
  double * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dorml2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dtplqt_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull l,
  const __LAPACK_int * _Nonnull mb,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dtplqt)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgelsx_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nullable jpvt,
  const double * _Nonnull rcond,
  __LAPACK_int * _Nonnull rank,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgelsx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dtpqrt_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull l,
  const __LAPACK_int * _Nonnull nb,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dtpqrt)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));

void
dlarfb_gett_(
  const char * _Nonnull ident,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const double * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull ldwork)
__LAPACK_ALIAS(dlarfb_gett)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));


void
dgetsqrhrt_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull mb1,
  const __LAPACK_int * _Nonnull nb1,
  const __LAPACK_int * _Nonnull nb2,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgetsqrhrt)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));

void
dormr2_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable tau,
  double * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dormr2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dggqrf_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull p,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable taua,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nullable taub,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dggqrf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dggrqf_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull p,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable taua,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nullable taub,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dggrqf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgtcon_(
  const char * _Nonnull norm,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable dl,
  const double * _Nullable d,
  const double * _Nullable du,
  const double * _Nullable du2,
  const __LAPACK_int * _Nullable ipiv,
  const double * _Nonnull anorm,
  double * _Nonnull rcond,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgtcon)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlagtm_(
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const double * _Nonnull alpha,
  const double * _Nullable dl,
  const double * _Nullable d,
  const double * _Nullable du,
  const double * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  const double * _Nonnull beta,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb)
__LAPACK_ALIAS(dlagtm)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlaed0_(
  const __LAPACK_int * _Nonnull icompq,
  const __LAPACK_int * _Nonnull qsiz,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable d,
  double * _Nullable e,
  double * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  double * _Nullable qstore,
  const __LAPACK_int * _Nonnull ldqs,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlaed0)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dorm2l_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable tau,
  double * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dorm2l)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsbtrd_(
  const char * _Nonnull vect,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  double * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  double * _Nullable d,
  double * _Nullable e,
  double * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsbtrd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsbev_2stage_(
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  double * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  double * _Nullable w,
  double * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsbev_2stage)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dspevd_(
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable ap,
  double * _Nullable w,
  double * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dspevd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));









void
dsygv_(
  const __LAPACK_int * _Nonnull itype,
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nullable w,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsygv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsygv_2stage_(
  const __LAPACK_int * _Nonnull itype,
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nullable w,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsygv_2stage)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsytrs_aa_2stage_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable tb,
  const __LAPACK_int * _Nonnull ltb,
  const __LAPACK_int * _Nullable ipiv,
  const __LAPACK_int * _Nullable ipiv2,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsytrs_aa_2stage)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsysv_rk_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable e,
  __LAPACK_int * _Nullable ipiv,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsysv_rk)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slatbs_(
  const char * _Nonnull uplo,
  const char * _Nonnull trans,
  const char * _Nonnull diag,
  const char * _Nonnull normin,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  const float * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  float * _Nullable x,
  float * _Nonnull scale,
  float * _Nullable cnorm,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slatbs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgbcon_(
  const char * _Nonnull norm,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  const float * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  const __LAPACK_int * _Nullable ipiv,
  const float * _Nonnull anorm,
  float * _Nonnull rcond,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgbcon)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgbequ_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  const float * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  float * _Nullable r,
  float * _Nullable c,
  float * _Nonnull rowcnd,
  float * _Nonnull colcnd,
  float * _Nonnull amax,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgbequ)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgbequb_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  const float * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  float * _Nullable r,
  float * _Nullable c,
  float * _Nonnull rowcnd,
  float * _Nonnull colcnd,
  float * _Nonnull amax,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgbequb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slaqgb_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  float * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  const float * _Nullable r,
  const float * _Nullable c,
  const float * _Nonnull rowcnd,
  const float * _Nonnull colcnd,
  const float * _Nonnull amax,
  char * _Nonnull equed)
__LAPACK_ALIAS(slaqgb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sorm2r_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable tau,
  float * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sorm2r)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sggbal_(
  const char * _Nonnull job,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull ilo,
  __LAPACK_int * _Nonnull ihi,
  float * _Nullable lscale,
  float * _Nullable rscale,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sggbal)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sorml2_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable tau,
  float * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sorml2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
stplqt_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull l,
  const __LAPACK_int * _Nonnull mb,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(stplqt)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
stpqrt_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull l,
  const __LAPACK_int * _Nonnull nb,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(stpqrt)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));


void
slarfb_gett_(
  const char * _Nonnull ident,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const float * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull ldwork)
__LAPACK_ALIAS(slarfb_gett)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));


void
sgetsqrhrt_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull mb1,
  const __LAPACK_int * _Nonnull nb1,
  const __LAPACK_int * _Nonnull nb2,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgetsqrhrt)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));


void
sgelsx_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nullable jpvt,
  const float * _Nonnull rcond,
  __LAPACK_int * _Nonnull rank,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgelsx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sormr2_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable tau,
  float * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sormr2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sggqrf_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull p,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable taua,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nullable taub,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sggqrf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sggrqf_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull p,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable taua,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nullable taub,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sggrqf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgtcon_(
  const char * _Nonnull norm,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable dl,
  const float * _Nullable d,
  const float * _Nullable du,
  const float * _Nullable du2,
  const __LAPACK_int * _Nullable ipiv,
  const float * _Nonnull anorm,
  float * _Nonnull rcond,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgtcon)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slagtm_(
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const float * _Nonnull alpha,
  const float * _Nullable dl,
  const float * _Nullable d,
  const float * _Nullable du,
  const float * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  const float * _Nonnull beta,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb)
__LAPACK_ALIAS(slagtm)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sorm2l_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable tau,
  float * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sorm2l)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssbtrd_(
  const char * _Nonnull vect,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  float * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  float * _Nullable d,
  float * _Nullable e,
  float * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssbtrd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssbev_2stage_(
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  float * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  float * _Nullable w,
  float * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssbev_2stage)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sspevd_(
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable ap,
  float * _Nullable w,
  float * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sspevd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));









void
ssygv_(
  const __LAPACK_int * _Nonnull itype,
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nullable w,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssygv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssygv_2stage_(
  const __LAPACK_int * _Nonnull itype,
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nullable w,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssygv_2stage)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssytrs_aa_2stage_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable tb,
  const __LAPACK_int * _Nonnull ltb,
  const __LAPACK_int * _Nullable ipiv,
  const __LAPACK_int * _Nullable ipiv2,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssytrs_aa_2stage)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssysv_rk_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable e,
  __LAPACK_int * _Nullable ipiv,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssysv_rk)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
zlatbs_(
  const char * _Nonnull uplo,
  const char * _Nonnull trans,
  const char * _Nonnull diag,
  const char * _Nonnull normin,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  const __LAPACK_double_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  __LAPACK_double_complex * _Nullable x,
  double * _Nonnull scale,
  double * _Nullable cnorm,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zlatbs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgbcon_(
  const char * _Nonnull norm,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  const __LAPACK_double_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  const __LAPACK_int * _Nullable ipiv,
  const double * _Nonnull anorm,
  double * _Nonnull rcond,
  __LAPACK_double_complex * _Nonnull work,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgbcon)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgbequ_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  const __LAPACK_double_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  double * _Nullable r,
  double * _Nullable c,
  double * _Nonnull rowcnd,
  double * _Nonnull colcnd,
  double * _Nonnull amax,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgbequ)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgbequb_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  const __LAPACK_double_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  double * _Nullable r,
  double * _Nullable c,
  double * _Nonnull rowcnd,
  double * _Nonnull colcnd,
  double * _Nonnull amax,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgbequb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlaqgb_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  __LAPACK_double_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  const double * _Nullable r,
  const double * _Nullable c,
  const double * _Nonnull rowcnd,
  const double * _Nonnull colcnd,
  const double * _Nonnull amax,
  char * _Nonnull equed)
__LAPACK_ALIAS(zlaqgb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zunm2r_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable tau,
  __LAPACK_double_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  __LAPACK_double_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zunm2r)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zggbal_(
  const char * _Nonnull job,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull ilo,
  __LAPACK_int * _Nonnull ihi,
  double * _Nullable lscale,
  double * _Nullable rscale,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zggbal)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zunml2_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable tau,
  __LAPACK_double_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  __LAPACK_double_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zunml2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ztplqt_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull l,
  const __LAPACK_int * _Nonnull mb,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_double_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ztplqt)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ztpqrt_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull l,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_double_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ztpqrt)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));

void
zlarfb_gett_(
  const char * _Nonnull ident,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_double_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull ldwork)
__LAPACK_ALIAS(zlarfb_gett)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));


void
zgetsqrhrt_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull mb1,
  const __LAPACK_int * _Nonnull nb1,
  const __LAPACK_int * _Nonnull nb2,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgetsqrhrt)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zggqrf_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull p,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable taua,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nullable taub,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zggqrf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zunmr2_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable tau,
  __LAPACK_double_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  __LAPACK_double_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zunmr2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zggrqf_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull p,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable taua,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nullable taub,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zggrqf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlagtm_(
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const double * _Nonnull alpha,
  const __LAPACK_double_complex * _Nullable dl,
  const __LAPACK_double_complex * _Nullable d,
  const __LAPACK_double_complex * _Nullable du,
  const __LAPACK_double_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  const double * _Nonnull beta,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb)
__LAPACK_ALIAS(zlagtm)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhbtrd_(
  const char * _Nonnull vect,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  __LAPACK_double_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  double * _Nullable d,
  double * _Nullable e,
  __LAPACK_double_complex * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  __LAPACK_double_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhbtrd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhbev_(
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  __LAPACK_double_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  double * _Nullable w,
  __LAPACK_double_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_double_complex * _Nonnull work,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhbev)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
zunm2l_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable tau,
  __LAPACK_double_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  __LAPACK_double_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zunm2l)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhetrs_aa_2stage_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable tb,
  const __LAPACK_int * _Nonnull ltb,
  const __LAPACK_int * _Nullable ipiv,
  const __LAPACK_int * _Nullable ipiv2,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhetrs_aa_2stage)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhesv_rk_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable e,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhesv_rk)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhpgv_(
  const __LAPACK_int * _Nonnull itype,
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable ap,
  __LAPACK_double_complex * _Nullable bp,
  double * _Nullable w,
  __LAPACK_double_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_double_complex * _Nonnull work,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhpgv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zsytrs_aa_2stage_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable tb,
  const __LAPACK_int * _Nonnull ltb,
  const __LAPACK_int * _Nullable ipiv,
  const __LAPACK_int * _Nullable ipiv2,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zsytrs_aa_2stage)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zsysv_rk_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable e,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zsysv_rk)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));















float
cla_gercond_c_(
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  const __LAPACK_int * _Nullable ipiv,
  const float * _Nullable c,
  const __LAPACK_bool * _Nonnull capply,
  __LAPACK_int * _Nonnull info,
  __LAPACK_float_complex * _Nonnull work,
  float * _Nullable rwork)
__LAPACK_ALIAS(cla_gercond_c)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



float
cla_hercond_c_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  const __LAPACK_int * _Nullable ipiv,
  const float * _Nullable c,
  const __LAPACK_bool * _Nonnull capply,
  __LAPACK_int * _Nonnull info,
  __LAPACK_float_complex * _Nonnull work,
  float * _Nullable rwork)
__LAPACK_ALIAS(cla_hercond_c)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



float
cla_syrcond_c_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  const __LAPACK_int * _Nullable ipiv,
  const float * _Nullable c,
  const __LAPACK_bool * _Nonnull capply,
  __LAPACK_int * _Nonnull info,
  __LAPACK_float_complex * _Nonnull work,
  float * _Nullable rwork)
__LAPACK_ALIAS(cla_syrcond_c)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



float
sla_gercond_(
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  const __LAPACK_int * _Nullable ipiv,
  const __LAPACK_int * _Nonnull cmode,
  const float * _Nullable c,
  __LAPACK_int * _Nonnull info,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork)
__LAPACK_ALIAS(sla_gercond)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



float
sla_syrcond_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  const __LAPACK_int * _Nullable ipiv,
  const __LAPACK_int * _Nonnull cmode,
  const float * _Nullable c,
  __LAPACK_int * _Nonnull info,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork)
__LAPACK_ALIAS(sla_syrcond)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



double
dla_gercond_(
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  const __LAPACK_int * _Nullable ipiv,
  const __LAPACK_int * _Nonnull cmode,
  const double * _Nullable c,
  __LAPACK_int * _Nonnull info,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork)
__LAPACK_ALIAS(dla_gercond)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



double
dla_syrcond_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  const __LAPACK_int * _Nullable ipiv,
  const __LAPACK_int * _Nonnull cmode,
  const double * _Nullable c,
  __LAPACK_int * _Nonnull info,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork)
__LAPACK_ALIAS(dla_syrcond)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



double
zla_gercond_c_(
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  const __LAPACK_int * _Nullable ipiv,
  const double * _Nullable c,
  const __LAPACK_bool * _Nonnull capply,
  __LAPACK_int * _Nonnull info,
  __LAPACK_double_complex * _Nonnull work,
  double * _Nullable rwork)
__LAPACK_ALIAS(zla_gercond_c)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



double
zla_hercond_c_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  const __LAPACK_int * _Nullable ipiv,
  const double * _Nullable c,
  const __LAPACK_bool * _Nonnull capply,
  __LAPACK_int * _Nonnull info,
  __LAPACK_double_complex * _Nonnull work,
  double * _Nullable rwork)
__LAPACK_ALIAS(zla_hercond_c)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



double
zla_syrcond_c_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  const __LAPACK_int * _Nullable ipiv,
  const double * _Nullable c,
  const __LAPACK_bool * _Nonnull capply,
  __LAPACK_int * _Nonnull info,
  __LAPACK_double_complex * _Nonnull work,
  double * _Nullable rwork)
__LAPACK_ALIAS(zla_syrcond_c)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
cla_gbamv_(
  const __LAPACK_int * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  const float * _Nonnull alpha,
  const __LAPACK_float_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  const __LAPACK_float_complex * _Nullable x,
  const __LAPACK_int * _Nonnull incx,
  const float * _Nonnull beta,
  float * _Nullable y,
  const __LAPACK_int * _Nonnull incy)
__LAPACK_ALIAS(cla_gbamv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
clabrd_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable d,
  float * _Nullable e,
  __LAPACK_float_complex * _Nullable tauq,
  __LAPACK_float_complex * _Nullable taup,
  __LAPACK_float_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  __LAPACK_float_complex * _Nullable y,
  const __LAPACK_int * _Nonnull ldy)
__LAPACK_ALIAS(clabrd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
clahqr_(
  const __LAPACK_bool * _Nonnull wantt,
  const __LAPACK_bool * _Nonnull wantz,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ilo,
  const __LAPACK_int * _Nonnull ihi,
  __LAPACK_float_complex * _Nullable h,
  const __LAPACK_int * _Nonnull ldh,
  __LAPACK_float_complex * _Nullable w,
  const __LAPACK_int * _Nonnull iloz,
  const __LAPACK_int * _Nonnull ihiz,
  __LAPACK_float_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(clahqr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cunmqr_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable tau,
  __LAPACK_float_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cunmqr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chseqr_(
  const char * _Nonnull job,
  const char * _Nonnull compz,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ilo,
  const __LAPACK_int * _Nonnull ihi,
  __LAPACK_float_complex * _Nullable h,
  const __LAPACK_int * _Nonnull ldh,
  __LAPACK_float_complex * _Nullable w,
  __LAPACK_float_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chseqr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ctrsyl_(
  const char * _Nonnull trana,
  const char * _Nonnull tranb,
  const __LAPACK_int * _Nonnull isgn,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  float * _Nonnull scale,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ctrsyl)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cunmlq_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable tau,
  __LAPACK_float_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cunmlq)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
cgelsx_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nullable jpvt,
  const float * _Nonnull rcond,
  __LAPACK_int * _Nonnull rank,
  __LAPACK_float_complex * _Nonnull work,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgelsx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cunmr3_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull l,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable tau,
  __LAPACK_float_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  __LAPACK_float_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cunmr3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sstein_(
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable d,
  const float * _Nullable e,
  const __LAPACK_int * _Nonnull m,
  const float * _Nullable w,
  const __LAPACK_int * _Nullable iblock,
  const __LAPACK_int * _Nullable isplit,
  float * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nullable ifail,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sstein)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ctgex2_(
  const __LAPACK_bool * _Nonnull wantq,
  const __LAPACK_bool * _Nonnull wantz,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  __LAPACK_float_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  const __LAPACK_int * _Nonnull j1,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ctgex2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cunm22_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull n1,
  const __LAPACK_int * _Nonnull n2,
  const __LAPACK_float_complex * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  __LAPACK_float_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cunm22)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cunmrq_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable tau,
  __LAPACK_float_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cunmrq)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cggglm_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull p,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nullable d,
  __LAPACK_float_complex * _Nullable x,
  __LAPACK_float_complex * _Nullable y,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cggglm)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgglse_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull p,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nullable c,
  __LAPACK_float_complex * _Nullable d,
  __LAPACK_float_complex * _Nullable x,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgglse)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
clags2_(
  const __LAPACK_bool * _Nonnull upper,
  const float * _Nonnull a1,
  const __LAPACK_float_complex * _Nonnull a2,
  const float * _Nonnull a3,
  const float * _Nonnull b1,
  const __LAPACK_float_complex * _Nonnull b2,
  const float * _Nonnull b3,
  float * _Nonnull csu,
  __LAPACK_float_complex * _Nonnull snu,
  float * _Nonnull csv,
  __LAPACK_float_complex * _Nonnull snv,
  float * _Nonnull csq,
  __LAPACK_float_complex * _Nonnull snq)
__LAPACK_ALIAS(clags2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chetrd_2stage_(
  const char * _Nonnull vect,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable d,
  float * _Nullable e,
  __LAPACK_float_complex * _Nullable tau,
  __LAPACK_float_complex * _Nullable hous2,
  const __LAPACK_int * _Nonnull lhous2,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chetrd_2stage)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chbev_2stage_(
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  __LAPACK_float_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  float * _Nullable w,
  __LAPACK_float_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chbev_2stage)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slaed9_(
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull kstart,
  const __LAPACK_int * _Nonnull kstop,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable d,
  float * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  const float * _Nonnull rho,
  float * _Nullable dlamda,
  float * _Nullable w,
  float * _Nullable s,
  const __LAPACK_int * _Nonnull lds,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slaed9)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cstedc_(
  const char * _Nonnull compz,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable d,
  float * _Nullable e,
  __LAPACK_float_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  float * _Nullable rwork,
  const __LAPACK_int * _Nonnull lrwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cstedc)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cstein_(
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable d,
  const float * _Nullable e,
  const __LAPACK_int * _Nonnull m,
  const float * _Nullable w,
  const __LAPACK_int * _Nullable iblock,
  const __LAPACK_int * _Nullable isplit,
  __LAPACK_float_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nullable ifail,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cstein)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cunmql_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable tau,
  __LAPACK_float_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cunmql)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cunmtr_(
  const char * _Nonnull side,
  const char * _Nonnull uplo,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable tau,
  __LAPACK_float_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cunmtr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cheevd_(
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable w,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  float * _Nullable rwork,
  const __LAPACK_int * _Nonnull lrwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cheevd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cheevd_2stage_(
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable w,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  float * _Nullable rwork,
  const __LAPACK_int * _Nonnull lrwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cheevd_2stage)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chegv_(
  const __LAPACK_int * _Nonnull itype,
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nullable w,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chegv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chegv_2stage_(
  const __LAPACK_int * _Nonnull itype,
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nullable w,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chegv_2stage)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
claein_(
  const __LAPACK_bool * _Nonnull rightv,
  const __LAPACK_bool * _Nonnull noinit,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable h,
  const __LAPACK_int * _Nonnull ldh,
  const __LAPACK_float_complex * _Nonnull w,
  __LAPACK_float_complex * _Nullable v,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nullable rwork,
  const float * _Nonnull eps3,
  const float * _Nonnull smlnum,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(claein)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
dstein_(
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable d,
  const double * _Nullable e,
  const __LAPACK_int * _Nonnull m,
  const double * _Nullable w,
  const __LAPACK_int * _Nullable iblock,
  const __LAPACK_int * _Nullable isplit,
  double * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nullable ifail,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dstein)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
dla_gbamv_(
  const __LAPACK_int * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  const double * _Nonnull alpha,
  const double * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  const double * _Nullable x,
  const __LAPACK_int * _Nonnull incx,
  const double * _Nonnull beta,
  double * _Nullable y,
  const __LAPACK_int * _Nonnull incy)
__LAPACK_ALIAS(dla_gbamv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlabrd_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nb,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable d,
  double * _Nullable e,
  double * _Nullable tauq,
  double * _Nullable taup,
  double * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  double * _Nullable y,
  const __LAPACK_int * _Nonnull ldy)
__LAPACK_ALIAS(dlabrd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dormqr_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable tau,
  double * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dormqr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dtrsyl_(
  const char * _Nonnull trana,
  const char * _Nonnull tranb,
  const __LAPACK_int * _Nonnull isgn,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  double * _Nonnull scale,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dtrsyl)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dormlq_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable tau,
  double * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dormlq)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlalsd_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull smlsiz,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  double * _Nullable d,
  double * _Nullable e,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  const double * _Nonnull rcond,
  __LAPACK_int * _Nonnull rank,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlalsd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgelss_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nullable s,
  const double * _Nonnull rcond,
  __LAPACK_int * _Nonnull rank,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgelss)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dormr3_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull l,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable tau,
  double * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dormr3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgelsy_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nullable jpvt,
  const double * _Nonnull rcond,
  __LAPACK_int * _Nonnull rank,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgelsy)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dorm22_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull n1,
  const __LAPACK_int * _Nonnull n2,
  const double * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  double * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dorm22)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dormrq_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable tau,
  double * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dormrq)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dggglm_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull p,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nullable d,
  double * _Nullable x,
  double * _Nullable y,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dggglm)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgglse_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull p,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nullable c,
  double * _Nullable d,
  double * _Nullable x,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgglse)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlags2_(
  const __LAPACK_bool * _Nonnull upper,
  const double * _Nonnull a1,
  const double * _Nonnull a2,
  const double * _Nonnull a3,
  const double * _Nonnull b1,
  const double * _Nonnull b2,
  const double * _Nonnull b3,
  double * _Nonnull csu,
  double * _Nonnull snu,
  double * _Nonnull csv,
  double * _Nonnull snv,
  double * _Nonnull csq,
  double * _Nonnull snq)
__LAPACK_ALIAS(dlags2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlaed9_(
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull kstart,
  const __LAPACK_int * _Nonnull kstop,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable d,
  double * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  const double * _Nonnull rho,
  double * _Nullable dlamda,
  double * _Nullable w,
  double * _Nullable s,
  const __LAPACK_int * _Nonnull lds,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlaed9)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dormql_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable tau,
  double * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dormql)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dormtr_(
  const char * _Nonnull side,
  const char * _Nonnull uplo,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable tau,
  double * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dormtr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsbgst_(
  const char * _Nonnull vect,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ka,
  const __LAPACK_int * _Nonnull kb,
  double * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  const double * _Nullable bb,
  const __LAPACK_int * _Nonnull ldbb,
  double * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsbgst)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsgesv_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  const double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  double * _Nonnull work,
  float * _Nullable swork,
  __LAPACK_int * _Nonnull iter,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsgesv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsposv_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  double * _Nonnull work,
  float * _Nullable swork,
  __LAPACK_int * _Nonnull iter,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsposv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsytrd_2stage_(
  const char * _Nonnull vect,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable d,
  double * _Nullable e,
  double * _Nullable tau,
  double * _Nullable hous2,
  const __LAPACK_int * _Nonnull lhous2,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsytrd_2stage)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));






void
sla_gbamv_(
  const __LAPACK_int * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  const float * _Nonnull alpha,
  const float * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  const float * _Nullable x,
  const __LAPACK_int * _Nonnull incx,
  const float * _Nonnull beta,
  float * _Nullable y,
  const __LAPACK_int * _Nonnull incy)
__LAPACK_ALIAS(sla_gbamv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slabrd_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nb,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable d,
  float * _Nullable e,
  float * _Nullable tauq,
  float * _Nullable taup,
  float * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  float * _Nullable y,
  const __LAPACK_int * _Nonnull ldy)
__LAPACK_ALIAS(slabrd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sormqr_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable tau,
  float * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sormqr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
strsyl_(
  const char * _Nonnull trana,
  const char * _Nonnull tranb,
  const __LAPACK_int * _Nonnull isgn,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  float * _Nonnull scale,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(strsyl)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sormlq_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable tau,
  float * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sormlq)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slalsd_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull smlsiz,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  float * _Nullable d,
  float * _Nullable e,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  const float * _Nonnull rcond,
  __LAPACK_int * _Nonnull rank,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slalsd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgelss_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nullable s,
  const float * _Nonnull rcond,
  __LAPACK_int * _Nonnull rank,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgelss)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sormr3_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull l,
  const float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable tau,
  float * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sormr3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgelsy_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nullable jpvt,
  const float * _Nonnull rcond,
  __LAPACK_int * _Nonnull rank,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgelsy)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sorm22_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull n1,
  const __LAPACK_int * _Nonnull n2,
  const float * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  float * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sorm22)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sormrq_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable tau,
  float * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sormrq)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sggglm_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull p,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nullable d,
  float * _Nullable x,
  float * _Nullable y,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sggglm)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgglse_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull p,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nullable c,
  float * _Nullable d,
  float * _Nullable x,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgglse)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slags2_(
  const __LAPACK_bool * _Nonnull upper,
  const float * _Nonnull a1,
  const float * _Nonnull a2,
  const float * _Nonnull a3,
  const float * _Nonnull b1,
  const float * _Nonnull b2,
  const float * _Nonnull b3,
  float * _Nonnull csu,
  float * _Nonnull snu,
  float * _Nonnull csv,
  float * _Nonnull snv,
  float * _Nonnull csq,
  float * _Nonnull snq)
__LAPACK_ALIAS(slags2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sormql_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable tau,
  float * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sormql)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sormtr_(
  const char * _Nonnull side,
  const char * _Nonnull uplo,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable tau,
  float * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sormtr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssbgst_(
  const char * _Nonnull vect,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ka,
  const __LAPACK_int * _Nonnull kb,
  float * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  const float * _Nullable bb,
  const __LAPACK_int * _Nonnull ldbb,
  float * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssbgst)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssytrd_2stage_(
  const char * _Nonnull vect,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable d,
  float * _Nullable e,
  float * _Nullable tau,
  float * _Nullable hous2,
  const __LAPACK_int * _Nonnull lhous2,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssytrd_2stage)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));









void
zla_gbamv_(
  const __LAPACK_int * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  const double * _Nonnull alpha,
  const __LAPACK_double_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  const __LAPACK_double_complex * _Nullable x,
  const __LAPACK_int * _Nonnull incx,
  const double * _Nonnull beta,
  double * _Nullable y,
  const __LAPACK_int * _Nonnull incy)
__LAPACK_ALIAS(zla_gbamv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlabrd_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable d,
  double * _Nullable e,
  __LAPACK_double_complex * _Nullable tauq,
  __LAPACK_double_complex * _Nullable taup,
  __LAPACK_double_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  __LAPACK_double_complex * _Nullable y,
  const __LAPACK_int * _Nonnull ldy)
__LAPACK_ALIAS(zlabrd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlahqr_(
  const __LAPACK_bool * _Nonnull wantt,
  const __LAPACK_bool * _Nonnull wantz,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ilo,
  const __LAPACK_int * _Nonnull ihi,
  __LAPACK_double_complex * _Nullable h,
  const __LAPACK_int * _Nonnull ldh,
  __LAPACK_double_complex * _Nullable w,
  const __LAPACK_int * _Nonnull iloz,
  const __LAPACK_int * _Nonnull ihiz,
  __LAPACK_double_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zlahqr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zunmqr_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable tau,
  __LAPACK_double_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zunmqr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhseqr_(
  const char * _Nonnull job,
  const char * _Nonnull compz,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ilo,
  const __LAPACK_int * _Nonnull ihi,
  __LAPACK_double_complex * _Nullable h,
  const __LAPACK_int * _Nonnull ldh,
  __LAPACK_double_complex * _Nullable w,
  __LAPACK_double_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhseqr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ztrsyl_(
  const char * _Nonnull trana,
  const char * _Nonnull tranb,
  const __LAPACK_int * _Nonnull isgn,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  double * _Nonnull scale,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ztrsyl)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zunmlq_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable tau,
  __LAPACK_double_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zunmlq)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgelsx_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nullable jpvt,
  const double * _Nonnull rcond,
  __LAPACK_int * _Nonnull rank,
  __LAPACK_double_complex * _Nonnull work,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgelsx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zunmr3_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull l,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable tau,
  __LAPACK_double_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  __LAPACK_double_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zunmr3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ztgex2_(
  const __LAPACK_bool * _Nonnull wantq,
  const __LAPACK_bool * _Nonnull wantz,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  __LAPACK_double_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  const __LAPACK_int * _Nonnull j1,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ztgex2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zunm22_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull n1,
  const __LAPACK_int * _Nonnull n2,
  const __LAPACK_double_complex * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  __LAPACK_double_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zunm22)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zunmrq_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable tau,
  __LAPACK_double_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zunmrq)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zggglm_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull p,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nullable d,
  __LAPACK_double_complex * _Nullable x,
  __LAPACK_double_complex * _Nullable y,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zggglm)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgglse_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull p,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nullable c,
  __LAPACK_double_complex * _Nullable d,
  __LAPACK_double_complex * _Nullable x,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgglse)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlags2_(
  const __LAPACK_bool * _Nonnull upper,
  const double * _Nonnull a1,
  const __LAPACK_double_complex * _Nonnull a2,
  const double * _Nonnull a3,
  const double * _Nonnull b1,
  const __LAPACK_double_complex * _Nonnull b2,
  const double * _Nonnull b3,
  double * _Nonnull csu,
  __LAPACK_double_complex * _Nonnull snu,
  double * _Nonnull csv,
  __LAPACK_double_complex * _Nonnull snv,
  double * _Nonnull csq,
  __LAPACK_double_complex * _Nonnull snq)
__LAPACK_ALIAS(zlags2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhetrd_2stage_(
  const char * _Nonnull vect,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable d,
  double * _Nullable e,
  __LAPACK_double_complex * _Nullable tau,
  __LAPACK_double_complex * _Nullable hous2,
  const __LAPACK_int * _Nonnull lhous2,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhetrd_2stage)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhbev_2stage_(
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  __LAPACK_double_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  double * _Nullable w,
  __LAPACK_double_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhbev_2stage)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zstedc_(
  const char * _Nonnull compz,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable d,
  double * _Nullable e,
  __LAPACK_double_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  double * _Nullable rwork,
  const __LAPACK_int * _Nonnull lrwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zstedc)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zstein_(
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable d,
  const double * _Nullable e,
  const __LAPACK_int * _Nonnull m,
  const double * _Nullable w,
  const __LAPACK_int * _Nullable iblock,
  const __LAPACK_int * _Nullable isplit,
  __LAPACK_double_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nullable ifail,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zstein)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zunmql_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable tau,
  __LAPACK_double_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zunmql)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zunmtr_(
  const char * _Nonnull side,
  const char * _Nonnull uplo,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable tau,
  __LAPACK_double_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zunmtr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zheevd_(
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable w,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  double * _Nullable rwork,
  const __LAPACK_int * _Nonnull lrwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zheevd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zheevd_2stage_(
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable w,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  double * _Nullable rwork,
  const __LAPACK_int * _Nonnull lrwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zheevd_2stage)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhegv_(
  const __LAPACK_int * _Nonnull itype,
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nullable w,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhegv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhegv_2stage_(
  const __LAPACK_int * _Nonnull itype,
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nullable w,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhegv_2stage)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlaein_(
  const __LAPACK_bool * _Nonnull rightv,
  const __LAPACK_bool * _Nonnull noinit,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable h,
  const __LAPACK_int * _Nonnull ldh,
  const __LAPACK_double_complex * _Nonnull w,
  __LAPACK_double_complex * _Nullable v,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nullable rwork,
  const double * _Nonnull eps3,
  const double * _Nonnull smlnum,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zlaein)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



float
cla_gbrcond_x_(
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  const __LAPACK_float_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  const __LAPACK_float_complex * _Nullable afb,
  const __LAPACK_int * _Nonnull ldafb,
  const __LAPACK_int * _Nullable ipiv,
  const __LAPACK_float_complex * _Nullable x,
  __LAPACK_int * _Nonnull info,
  __LAPACK_float_complex * _Nonnull work,
  float * _Nullable rwork)
__LAPACK_ALIAS(cla_gbrcond_x)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



double
zla_gbrcond_x_(
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  const __LAPACK_double_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  const __LAPACK_double_complex * _Nullable afb,
  const __LAPACK_int * _Nonnull ldafb,
  const __LAPACK_int * _Nullable ipiv,
  const __LAPACK_double_complex * _Nullable x,
  __LAPACK_int * _Nonnull info,
  __LAPACK_double_complex * _Nonnull work,
  double * _Nullable rwork)
__LAPACK_ALIAS(zla_gbrcond_x)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slasq4_(
  const __LAPACK_int * _Nonnull i0,
  const __LAPACK_int * _Nonnull n0,
  const float * _Nullable z,
  const __LAPACK_int * _Nonnull pp,
  const __LAPACK_int * _Nonnull n0in,
  const float * _Nonnull dmin,
  const float * _Nonnull dmin1,
  const float * _Nonnull dmin2,
  const float * _Nonnull dn,
  const float * _Nonnull dn1,
  const float * _Nonnull dn2,
  float * _Nonnull tau,
  __LAPACK_int * _Nonnull ttype,
  float * _Nonnull g)
__LAPACK_ALIAS(slasq4)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slasq5_(
  const __LAPACK_int * _Nonnull i0,
  const __LAPACK_int * _Nonnull n0,
  float * _Nullable z,
  const __LAPACK_int * _Nonnull pp,
  float * _Nonnull tau,
  const float * _Nonnull sigma,
  float * _Nonnull dmin,
  float * _Nonnull dmin1,
  float * _Nonnull dmin2,
  float * _Nonnull dn,
  float * _Nonnull dnm1,
  float * _Nonnull dnm2,
  const __LAPACK_bool * _Nonnull ieee,
  const float * _Nonnull eps)
__LAPACK_ALIAS(slasq5)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cunmhr_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ilo,
  const __LAPACK_int * _Nonnull ihi,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable tau,
  __LAPACK_float_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cunmhr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgeev_(
  const char * _Nonnull jobvl,
  const char * _Nonnull jobvr,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable w,
  __LAPACK_float_complex * _Nullable vl,
  const __LAPACK_int * _Nonnull ldvl,
  __LAPACK_float_complex * _Nullable vr,
  const __LAPACK_int * _Nonnull ldvr,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgeev)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgghrd_(
  const char * _Nonnull compq,
  const char * _Nonnull compz,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ilo,
  const __LAPACK_int * _Nonnull ihi,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  __LAPACK_float_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgghrd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
claqps_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull offset,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_int * _Nonnull kb,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable jpvt,
  __LAPACK_float_complex * _Nullable tau,
  float * _Nullable vn1,
  float * _Nullable vn2,
  __LAPACK_float_complex * _Nullable auxv,
  __LAPACK_float_complex * _Nullable f,
  const __LAPACK_int * _Nonnull ldf)
__LAPACK_ALIAS(claqps)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
clalsd_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull smlsiz,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  float * _Nullable d,
  float * _Nullable e,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  const float * _Nonnull rcond,
  __LAPACK_int * _Nonnull rank,
  __LAPACK_float_complex * _Nonnull work,
  float * _Nullable rwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(clalsd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cunmbr_(
  const char * _Nonnull vect,
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable tau,
  __LAPACK_float_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cunmbr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgelss_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nullable s,
  const float * _Nonnull rcond,
  __LAPACK_int * _Nonnull rank,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgelss)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cunmrz_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull l,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable tau,
  __LAPACK_float_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cunmrz)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgelsy_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nullable jpvt,
  const float * _Nonnull rcond,
  __LAPACK_int * _Nonnull rank,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgelsy)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgemlqt_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull mb,
  const __LAPACK_float_complex * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  const __LAPACK_float_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_float_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  __LAPACK_float_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgemlqt)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgemlq_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable t,
  const __LAPACK_int * _Nonnull tsize,
  __LAPACK_float_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgemlq)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgemqrt_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull nb,
  const __LAPACK_float_complex * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  const __LAPACK_float_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_float_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  __LAPACK_float_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgemqrt)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgemqr_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable t,
  const __LAPACK_int * _Nonnull tsize,
  __LAPACK_float_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgemqr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slasd1_(
  const __LAPACK_int * _Nonnull nl,
  const __LAPACK_int * _Nonnull nr,
  const __LAPACK_int * _Nonnull sqre,
  float * _Nullable d,
  float * _Nonnull alpha,
  float * _Nonnull beta,
  float * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  float * _Nullable vt,
  const __LAPACK_int * _Nonnull ldvt,
  __LAPACK_int * _Nullable idxq,
  __LAPACK_int * _Nullable iwork,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slasd1)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sbdsdc_(
  const char * _Nonnull uplo,
  const char * _Nonnull compq,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable d,
  float * _Nullable e,
  float * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  float * _Nullable vt,
  const __LAPACK_int * _Nonnull ldvt,
  float * _Nullable q,
  __LAPACK_int * _Nullable iq,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sbdsdc)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ctgexc_(
  const __LAPACK_bool * _Nonnull wantq,
  const __LAPACK_bool * _Nonnull wantz,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  __LAPACK_float_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  const __LAPACK_int * _Nonnull ifst,
  __LAPACK_int * _Nonnull ilst,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ctgexc)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chetrd_hb2st_(
  const char * _Nonnull stage1,
  const char * _Nonnull vect,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  __LAPACK_float_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  float * _Nullable d,
  float * _Nullable e,
  __LAPACK_float_complex * _Nullable hous,
  const __LAPACK_int * _Nonnull lhous,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chetrd_hb2st)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slaeda_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull tlvls,
  const __LAPACK_int * _Nonnull curlvl,
  const __LAPACK_int * _Nonnull curpbm,
  const __LAPACK_int * _Nullable prmptr,
  const __LAPACK_int * _Nullable perm,
  const __LAPACK_int * _Nullable givptr,
  const __LAPACK_int * _Nullable givcol,
  const float * _Nullable givnum,
  const float * _Nullable q,
  const __LAPACK_int * _Nullable qptr,
  float * _Nullable z,
  float * _Nullable ztemp,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slaeda)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slaed3_(
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull n1,
  float * _Nullable d,
  float * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  const float * _Nonnull rho,
  float * _Nullable dlamda,
  const float * _Nullable q2,
  const __LAPACK_int * _Nullable indx,
  const __LAPACK_int * _Nullable ctot,
  float * _Nullable w,
  float * _Nullable s,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slaed3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chbgst_(
  const char * _Nonnull vect,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ka,
  const __LAPACK_int * _Nonnull kb,
  __LAPACK_float_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  const __LAPACK_float_complex * _Nullable bb,
  const __LAPACK_int * _Nonnull ldbb,
  __LAPACK_float_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  __LAPACK_float_complex * _Nonnull work,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chbgst)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slarrj_(
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable d,
  const float * _Nullable e2,
  const __LAPACK_int * _Nonnull ifirst,
  const __LAPACK_int * _Nonnull ilast,
  const float * _Nonnull rtol,
  const __LAPACK_int * _Nonnull offset,
  float * _Nullable w,
  float * _Nullable werr,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  const float * _Nonnull pivmin,
  const float * _Nonnull spdiam,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slarrj)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chesv_aa_2stage_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable tb,
  const __LAPACK_int * _Nonnull ltb,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nullable ipiv2,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chesv_aa_2stage)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chpevd_(
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable ap,
  float * _Nullable w,
  __LAPACK_float_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  float * _Nullable rwork,
  const __LAPACK_int * _Nonnull lrwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chpevd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cpprfs_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_float_complex * _Nullable ap,
  const __LAPACK_float_complex * _Nullable afp,
  const __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  float * _Nullable ferr,
  float * _Nullable berr,
  __LAPACK_float_complex * _Nonnull work,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cpprfs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
csysv_aa_2stage_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable tb,
  const __LAPACK_int * _Nonnull ltb,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nullable ipiv2,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(csysv_aa_2stage)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cunbdb6_(
  const __LAPACK_int * _Nonnull m1,
  const __LAPACK_int * _Nonnull m2,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable x1,
  const __LAPACK_int * _Nonnull incx1,
  __LAPACK_float_complex * _Nullable x2,
  const __LAPACK_int * _Nonnull incx2,
  const __LAPACK_float_complex * _Nullable q1,
  const __LAPACK_int * _Nonnull ldq1,
  const __LAPACK_float_complex * _Nullable q2,
  const __LAPACK_int * _Nonnull ldq2,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cunbdb6)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cunbdb5_(
  const __LAPACK_int * _Nonnull m1,
  const __LAPACK_int * _Nonnull m2,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable x1,
  const __LAPACK_int * _Nonnull incx1,
  __LAPACK_float_complex * _Nullable x2,
  const __LAPACK_int * _Nonnull incx2,
  const __LAPACK_float_complex * _Nullable q1,
  const __LAPACK_int * _Nonnull ldq1,
  const __LAPACK_float_complex * _Nullable q2,
  const __LAPACK_int * _Nonnull ldq2,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cunbdb5)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlasd1_(
  const __LAPACK_int * _Nonnull nl,
  const __LAPACK_int * _Nonnull nr,
  const __LAPACK_int * _Nonnull sqre,
  double * _Nullable d,
  double * _Nonnull alpha,
  double * _Nonnull beta,
  double * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  double * _Nullable vt,
  const __LAPACK_int * _Nonnull ldvt,
  __LAPACK_int * _Nullable idxq,
  __LAPACK_int * _Nullable iwork,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlasd1)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlasq4_(
  const __LAPACK_int * _Nonnull i0,
  const __LAPACK_int * _Nonnull n0,
  const double * _Nullable z,
  const __LAPACK_int * _Nonnull pp,
  const __LAPACK_int * _Nonnull n0in,
  const double * _Nonnull dmin,
  const double * _Nonnull dmin1,
  const double * _Nonnull dmin2,
  const double * _Nonnull dn,
  const double * _Nonnull dn1,
  const double * _Nonnull dn2,
  double * _Nonnull tau,
  __LAPACK_int * _Nonnull ttype,
  double * _Nonnull g)
__LAPACK_ALIAS(dlasq4)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlasq5_(
  const __LAPACK_int * _Nonnull i0,
  const __LAPACK_int * _Nonnull n0,
  double * _Nullable z,
  const __LAPACK_int * _Nonnull pp,
  double * _Nonnull tau,
  const double * _Nonnull sigma,
  double * _Nonnull dmin,
  double * _Nonnull dmin1,
  double * _Nonnull dmin2,
  double * _Nonnull dn,
  double * _Nonnull dnm1,
  double * _Nonnull dnm2,
  const __LAPACK_bool * _Nonnull ieee,
  const double * _Nonnull eps)
__LAPACK_ALIAS(dlasq5)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dbdsdc_(
  const char * _Nonnull uplo,
  const char * _Nonnull compq,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable d,
  double * _Nullable e,
  double * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  double * _Nullable vt,
  const __LAPACK_int * _Nonnull ldvt,
  double * _Nullable q,
  __LAPACK_int * _Nullable iq,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dbdsdc)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlahqr_(
  const __LAPACK_bool * _Nonnull wantt,
  const __LAPACK_bool * _Nonnull wantz,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ilo,
  const __LAPACK_int * _Nonnull ihi,
  double * _Nullable h,
  const __LAPACK_int * _Nonnull ldh,
  double * _Nullable wr,
  double * _Nullable wi,
  const __LAPACK_int * _Nonnull iloz,
  const __LAPACK_int * _Nonnull ihiz,
  double * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlahqr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dormhr_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ilo,
  const __LAPACK_int * _Nonnull ihi,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable tau,
  double * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dormhr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dhseqr_(
  const char * _Nonnull job,
  const char * _Nonnull compz,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ilo,
  const __LAPACK_int * _Nonnull ihi,
  double * _Nullable h,
  const __LAPACK_int * _Nonnull ldh,
  double * _Nullable wr,
  double * _Nullable wi,
  double * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dhseqr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgeev_(
  const char * _Nonnull jobvl,
  const char * _Nonnull jobvr,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable wr,
  double * _Nullable wi,
  double * _Nullable vl,
  const __LAPACK_int * _Nonnull ldvl,
  double * _Nullable vr,
  const __LAPACK_int * _Nonnull ldvr,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgeev)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgghrd_(
  const char * _Nonnull compq,
  const char * _Nonnull compz,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ilo,
  const __LAPACK_int * _Nonnull ihi,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  double * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgghrd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlaqps_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull offset,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_int * _Nonnull kb,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable jpvt,
  double * _Nullable tau,
  double * _Nullable vn1,
  double * _Nullable vn2,
  double * _Nullable auxv,
  double * _Nullable f,
  const __LAPACK_int * _Nonnull ldf)
__LAPACK_ALIAS(dlaqps)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgesvj_(
  const char * _Nonnull joba,
  const char * _Nonnull jobu,
  const char * _Nonnull jobv,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable sva,
  const __LAPACK_int * _Nonnull mv,
  double * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgesvj)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dormbr_(
  const char * _Nonnull vect,
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable tau,
  double * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dormbr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgelsd_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nullable s,
  const double * _Nonnull rcond,
  __LAPACK_int * _Nonnull rank,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgelsd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dormrz_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull l,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable tau,
  double * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dormrz)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgemlqt_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull mb,
  const double * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  const double * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  double * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgemlqt)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgemlq_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable t,
  const __LAPACK_int * _Nonnull tsize,
  double * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgemlq)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgemqrt_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull nb,
  const double * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  const double * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  double * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgemqrt)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgemqr_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable t,
  const __LAPACK_int * _Nonnull tsize,
  double * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgemqr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgesdd_(
  const char * _Nonnull jobz,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable s,
  double * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  double * _Nullable vt,
  const __LAPACK_int * _Nonnull ldvt,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgesdd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgesvd_(
  const char * _Nonnull jobu,
  const char * _Nonnull jobvt,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable s,
  double * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  double * _Nullable vt,
  const __LAPACK_int * _Nonnull ldvt,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgesvd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlaed3_(
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull n1,
  double * _Nullable d,
  double * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  const double * _Nonnull rho,
  double * _Nullable dlamda,
  const double * _Nullable q2,
  const __LAPACK_int * _Nullable indx,
  const __LAPACK_int * _Nullable ctot,
  double * _Nullable w,
  double * _Nullable s,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlaed3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlaeda_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull tlvls,
  const __LAPACK_int * _Nonnull curlvl,
  const __LAPACK_int * _Nonnull curpbm,
  const __LAPACK_int * _Nullable prmptr,
  const __LAPACK_int * _Nullable perm,
  const __LAPACK_int * _Nullable givptr,
  const __LAPACK_int * _Nullable givcol,
  const double * _Nullable givnum,
  const double * _Nullable q,
  const __LAPACK_int * _Nullable qptr,
  double * _Nullable z,
  double * _Nullable ztemp,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlaeda)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlarrj_(
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable d,
  const double * _Nullable e2,
  const __LAPACK_int * _Nonnull ifirst,
  const __LAPACK_int * _Nonnull ilast,
  const double * _Nonnull rtol,
  const __LAPACK_int * _Nonnull offset,
  double * _Nullable w,
  double * _Nullable werr,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  const double * _Nonnull pivmin,
  const double * _Nonnull spdiam,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlarrj)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dorbdb6_(
  const __LAPACK_int * _Nonnull m1,
  const __LAPACK_int * _Nonnull m2,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable x1,
  const __LAPACK_int * _Nonnull incx1,
  double * _Nullable x2,
  const __LAPACK_int * _Nonnull incx2,
  const double * _Nullable q1,
  const __LAPACK_int * _Nonnull ldq1,
  const double * _Nullable q2,
  const __LAPACK_int * _Nonnull ldq2,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dorbdb6)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dorbdb5_(
  const __LAPACK_int * _Nonnull m1,
  const __LAPACK_int * _Nonnull m2,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable x1,
  const __LAPACK_int * _Nonnull incx1,
  double * _Nullable x2,
  const __LAPACK_int * _Nonnull incx2,
  const double * _Nullable q1,
  const __LAPACK_int * _Nonnull ldq1,
  const double * _Nullable q2,
  const __LAPACK_int * _Nonnull ldq2,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dorbdb5)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dpprfs_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const double * _Nullable ap,
  const double * _Nullable afp,
  const double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  double * _Nullable ferr,
  double * _Nullable berr,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dpprfs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dptrfs_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const double * _Nullable d,
  const double * _Nullable e,
  const double * _Nullable df,
  const double * _Nullable ef,
  const double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  double * _Nullable ferr,
  double * _Nullable berr,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dptrfs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsytrd_sb2st_(
  const char * _Nonnull stage1,
  const char * _Nonnull vect,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  const double * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  double * _Nullable d,
  double * _Nullable e,
  double * _Nullable hous,
  const __LAPACK_int * _Nonnull lhous,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsytrd_sb2st)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsbevd_(
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  double * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  double * _Nullable w,
  double * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsbevd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsbevd_2stage_(
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  double * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  double * _Nullable w,
  double * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsbevd_2stage)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsbgv_(
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ka,
  const __LAPACK_int * _Nonnull kb,
  double * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  double * _Nullable bb,
  const __LAPACK_int * _Nonnull ldbb,
  double * _Nullable w,
  double * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsbgv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dspgvd_(
  const __LAPACK_int * _Nonnull itype,
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable ap,
  double * _Nullable bp,
  double * _Nullable w,
  double * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dspgvd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsygvd_(
  const __LAPACK_int * _Nonnull itype,
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nullable w,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsygvd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsysv_aa_2stage_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable tb,
  const __LAPACK_int * _Nonnull ltb,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nullable ipiv2,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsysv_aa_2stage)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dtrevc_(
  const char * _Nonnull side,
  const char * _Nonnull howmny,
  __LAPACK_bool * _Nullable select,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  double * _Nullable vl,
  const __LAPACK_int * _Nonnull ldvl,
  double * _Nullable vr,
  const __LAPACK_int * _Nonnull ldvr,
  const __LAPACK_int * _Nonnull mm,
  __LAPACK_int * _Nonnull m,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dtrevc)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slahqr_(
  const __LAPACK_bool * _Nonnull wantt,
  const __LAPACK_bool * _Nonnull wantz,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ilo,
  const __LAPACK_int * _Nonnull ihi,
  float * _Nullable h,
  const __LAPACK_int * _Nonnull ldh,
  float * _Nullable wr,
  float * _Nullable wi,
  const __LAPACK_int * _Nonnull iloz,
  const __LAPACK_int * _Nonnull ihiz,
  float * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slahqr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sormhr_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ilo,
  const __LAPACK_int * _Nonnull ihi,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable tau,
  float * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sormhr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
shseqr_(
  const char * _Nonnull job,
  const char * _Nonnull compz,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ilo,
  const __LAPACK_int * _Nonnull ihi,
  float * _Nullable h,
  const __LAPACK_int * _Nonnull ldh,
  float * _Nullable wr,
  float * _Nullable wi,
  float * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(shseqr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgeev_(
  const char * _Nonnull jobvl,
  const char * _Nonnull jobvr,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable wr,
  float * _Nullable wi,
  float * _Nullable vl,
  const __LAPACK_int * _Nonnull ldvl,
  float * _Nullable vr,
  const __LAPACK_int * _Nonnull ldvr,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgeev)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgghrd_(
  const char * _Nonnull compq,
  const char * _Nonnull compz,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ilo,
  const __LAPACK_int * _Nonnull ihi,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  float * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgghrd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slaqps_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull offset,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_int * _Nonnull kb,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable jpvt,
  float * _Nullable tau,
  float * _Nullable vn1,
  float * _Nullable vn2,
  float * _Nullable auxv,
  float * _Nullable f,
  const __LAPACK_int * _Nonnull ldf)
__LAPACK_ALIAS(slaqps)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgesvj_(
  const char * _Nonnull joba,
  const char * _Nonnull jobu,
  const char * _Nonnull jobv,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable sva,
  const __LAPACK_int * _Nonnull mv,
  float * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgesvj)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sormbr_(
  const char * _Nonnull vect,
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable tau,
  float * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sormbr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgelsd_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nullable s,
  const float * _Nonnull rcond,
  __LAPACK_int * _Nonnull rank,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgelsd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sormrz_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull l,
  const float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable tau,
  float * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sormrz)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgemlqt_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull mb,
  const float * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  const float * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  float * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgemlqt)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgemlq_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable t,
  const __LAPACK_int * _Nonnull tsize,
  float * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgemlq)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgemqrt_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull nb,
  const float * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  const float * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  float * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgemqrt)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgemqr_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable t,
  const __LAPACK_int * _Nonnull tsize,
  float * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgemqr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgesdd_(
  const char * _Nonnull jobz,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable s,
  float * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  float * _Nullable vt,
  const __LAPACK_int * _Nonnull ldvt,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgesdd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgesvd_(
  const char * _Nonnull jobu,
  const char * _Nonnull jobvt,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable s,
  float * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  float * _Nullable vt,
  const __LAPACK_int * _Nonnull ldvt,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgesvd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sorbdb6_(
  const __LAPACK_int * _Nonnull m1,
  const __LAPACK_int * _Nonnull m2,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable x1,
  const __LAPACK_int * _Nonnull incx1,
  float * _Nullable x2,
  const __LAPACK_int * _Nonnull incx2,
  const float * _Nullable q1,
  const __LAPACK_int * _Nonnull ldq1,
  const float * _Nullable q2,
  const __LAPACK_int * _Nonnull ldq2,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sorbdb6)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sorbdb5_(
  const __LAPACK_int * _Nonnull m1,
  const __LAPACK_int * _Nonnull m2,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable x1,
  const __LAPACK_int * _Nonnull incx1,
  float * _Nullable x2,
  const __LAPACK_int * _Nonnull incx2,
  const float * _Nullable q1,
  const __LAPACK_int * _Nonnull ldq1,
  const float * _Nullable q2,
  const __LAPACK_int * _Nonnull ldq2,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sorbdb5)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
spprfs_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const float * _Nullable ap,
  const float * _Nullable afp,
  const float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  float * _Nullable ferr,
  float * _Nullable berr,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(spprfs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sptrfs_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const float * _Nullable d,
  const float * _Nullable e,
  const float * _Nullable df,
  const float * _Nullable ef,
  const float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  float * _Nullable ferr,
  float * _Nullable berr,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sptrfs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssytrd_sb2st_(
  const char * _Nonnull stage1,
  const char * _Nonnull vect,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  const float * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  float * _Nullable d,
  float * _Nullable e,
  float * _Nullable hous,
  const __LAPACK_int * _Nonnull lhous,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssytrd_sb2st)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssbevd_(
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  float * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  float * _Nullable w,
  float * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssbevd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssbevd_2stage_(
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  float * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  float * _Nullable w,
  float * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssbevd_2stage)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssbgv_(
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ka,
  const __LAPACK_int * _Nonnull kb,
  float * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  float * _Nullable bb,
  const __LAPACK_int * _Nonnull ldbb,
  float * _Nullable w,
  float * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssbgv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sspgvd_(
  const __LAPACK_int * _Nonnull itype,
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable ap,
  float * _Nullable bp,
  float * _Nullable w,
  float * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sspgvd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssygvd_(
  const __LAPACK_int * _Nonnull itype,
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nullable w,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssygvd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssysv_aa_2stage_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable tb,
  const __LAPACK_int * _Nonnull ltb,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nullable ipiv2,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssysv_aa_2stage)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
strevc_(
  const char * _Nonnull side,
  const char * _Nonnull howmny,
  __LAPACK_bool * _Nullable select,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  float * _Nullable vl,
  const __LAPACK_int * _Nonnull ldvl,
  float * _Nullable vr,
  const __LAPACK_int * _Nonnull ldvr,
  const __LAPACK_int * _Nonnull mm,
  __LAPACK_int * _Nonnull m,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(strevc)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zcgesv_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable ipiv,
  const __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  __LAPACK_double_complex * _Nonnull work,
  __LAPACK_float_complex * _Nullable swork,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull iter,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zcgesv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zcposv_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  __LAPACK_double_complex * _Nonnull work,
  __LAPACK_float_complex * _Nullable swork,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull iter,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zcposv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zunmhr_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ilo,
  const __LAPACK_int * _Nonnull ihi,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable tau,
  __LAPACK_double_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zunmhr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgeev_(
  const char * _Nonnull jobvl,
  const char * _Nonnull jobvr,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable w,
  __LAPACK_double_complex * _Nullable vl,
  const __LAPACK_int * _Nonnull ldvl,
  __LAPACK_double_complex * _Nullable vr,
  const __LAPACK_int * _Nonnull ldvr,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgeev)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgghrd_(
  const char * _Nonnull compq,
  const char * _Nonnull compz,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ilo,
  const __LAPACK_int * _Nonnull ihi,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  __LAPACK_double_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgghrd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlaqps_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull offset,
  const __LAPACK_int * _Nonnull nb,
  __LAPACK_int * _Nonnull kb,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nullable jpvt,
  __LAPACK_double_complex * _Nullable tau,
  double * _Nullable vn1,
  double * _Nullable vn2,
  __LAPACK_double_complex * _Nullable auxv,
  __LAPACK_double_complex * _Nullable f,
  const __LAPACK_int * _Nonnull ldf)
__LAPACK_ALIAS(zlaqps)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlalsd_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull smlsiz,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  double * _Nullable d,
  double * _Nullable e,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  const double * _Nonnull rcond,
  __LAPACK_int * _Nonnull rank,
  __LAPACK_double_complex * _Nonnull work,
  double * _Nullable rwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zlalsd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zunmbr_(
  const char * _Nonnull vect,
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable tau,
  __LAPACK_double_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zunmbr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgelss_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nullable s,
  const double * _Nonnull rcond,
  __LAPACK_int * _Nonnull rank,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgelss)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zunmrz_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull l,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable tau,
  __LAPACK_double_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zunmrz)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgelsy_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nullable jpvt,
  const double * _Nonnull rcond,
  __LAPACK_int * _Nonnull rank,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgelsy)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgemlqt_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull mb,
  const __LAPACK_double_complex * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  const __LAPACK_double_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_double_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  __LAPACK_double_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgemlqt)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgemlq_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable t,
  const __LAPACK_int * _Nonnull tsize,
  __LAPACK_double_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgemlq)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgemqrt_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull nb,
  const __LAPACK_double_complex * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  const __LAPACK_double_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_double_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  __LAPACK_double_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgemqrt)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgemqr_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable t,
  const __LAPACK_int * _Nonnull tsize,
  __LAPACK_double_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgemqr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ztgexc_(
  const __LAPACK_bool * _Nonnull wantq,
  const __LAPACK_bool * _Nonnull wantz,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  __LAPACK_double_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  const __LAPACK_int * _Nonnull ifst,
  __LAPACK_int * _Nonnull ilst,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ztgexc)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhetrd_hb2st_(
  const char * _Nonnull stage1,
  const char * _Nonnull vect,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  __LAPACK_double_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  double * _Nullable d,
  double * _Nullable e,
  __LAPACK_double_complex * _Nullable hous,
  const __LAPACK_int * _Nonnull lhous,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhetrd_hb2st)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhbgst_(
  const char * _Nonnull vect,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ka,
  const __LAPACK_int * _Nonnull kb,
  __LAPACK_double_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  const __LAPACK_double_complex * _Nullable bb,
  const __LAPACK_int * _Nonnull ldbb,
  __LAPACK_double_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  __LAPACK_double_complex * _Nonnull work,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhbgst)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhesv_aa_2stage_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable tb,
  const __LAPACK_int * _Nonnull ltb,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nullable ipiv2,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhesv_aa_2stage)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhpevd_(
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable ap,
  double * _Nullable w,
  __LAPACK_double_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  double * _Nullable rwork,
  const __LAPACK_int * _Nonnull lrwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhpevd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zpprfs_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_double_complex * _Nullable ap,
  const __LAPACK_double_complex * _Nullable afp,
  const __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  double * _Nullable ferr,
  double * _Nullable berr,
  __LAPACK_double_complex * _Nonnull work,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zpprfs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zsysv_aa_2stage_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable tb,
  const __LAPACK_int * _Nonnull ltb,
  __LAPACK_int * _Nullable ipiv,
  __LAPACK_int * _Nullable ipiv2,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zsysv_aa_2stage)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zunbdb6_(
  const __LAPACK_int * _Nonnull m1,
  const __LAPACK_int * _Nonnull m2,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable x1,
  const __LAPACK_int * _Nonnull incx1,
  __LAPACK_double_complex * _Nullable x2,
  const __LAPACK_int * _Nonnull incx2,
  const __LAPACK_double_complex * _Nullable q1,
  const __LAPACK_int * _Nonnull ldq1,
  const __LAPACK_double_complex * _Nullable q2,
  const __LAPACK_int * _Nonnull ldq2,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zunbdb6)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zunbdb5_(
  const __LAPACK_int * _Nonnull m1,
  const __LAPACK_int * _Nonnull m2,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable x1,
  const __LAPACK_int * _Nonnull incx1,
  __LAPACK_double_complex * _Nullable x2,
  const __LAPACK_int * _Nonnull incx2,
  const __LAPACK_double_complex * _Nullable q1,
  const __LAPACK_int * _Nonnull ldq1,
  const __LAPACK_double_complex * _Nullable q2,
  const __LAPACK_int * _Nonnull ldq2,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zunbdb5)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



float
cla_gbrcond_c_(
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  const __LAPACK_float_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  const __LAPACK_float_complex * _Nullable afb,
  const __LAPACK_int * _Nonnull ldafb,
  const __LAPACK_int * _Nullable ipiv,
  const float * _Nullable c,
  const __LAPACK_bool * _Nonnull capply,
  __LAPACK_int * _Nonnull info,
  __LAPACK_float_complex * _Nonnull work,
  float * _Nullable rwork)
__LAPACK_ALIAS(cla_gbrcond_c)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



float
sla_gbrcond_(
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  const float * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  const float * _Nullable afb,
  const __LAPACK_int * _Nonnull ldafb,
  const __LAPACK_int * _Nullable ipiv,
  const __LAPACK_int * _Nonnull cmode,
  const float * _Nullable c,
  __LAPACK_int * _Nonnull info,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork)
__LAPACK_ALIAS(sla_gbrcond)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



double
dla_gbrcond_(
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  const double * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  const double * _Nullable afb,
  const __LAPACK_int * _Nonnull ldafb,
  const __LAPACK_int * _Nullable ipiv,
  const __LAPACK_int * _Nonnull cmode,
  const double * _Nullable c,
  __LAPACK_int * _Nonnull info,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork)
__LAPACK_ALIAS(dla_gbrcond)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



double
zla_gbrcond_c_(
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  const __LAPACK_double_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  const __LAPACK_double_complex * _Nullable afb,
  const __LAPACK_int * _Nonnull ldafb,
  const __LAPACK_int * _Nullable ipiv,
  const double * _Nullable c,
  const __LAPACK_bool * _Nonnull capply,
  __LAPACK_int * _Nonnull info,
  __LAPACK_double_complex * _Nonnull work,
  double * _Nullable rwork)
__LAPACK_ALIAS(zla_gbrcond_c)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cbdsqr_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ncvt,
  const __LAPACK_int * _Nonnull nru,
  const __LAPACK_int * _Nonnull ncc,
  float * _Nullable d,
  float * _Nullable e,
  __LAPACK_float_complex * _Nullable vt,
  const __LAPACK_int * _Nonnull ldvt,
  __LAPACK_float_complex * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  __LAPACK_float_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cbdsqr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
clarfb_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const char * _Nonnull direct,
  const char * _Nonnull storev,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_float_complex * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  const __LAPACK_float_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_float_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull ldwork)
__LAPACK_ALIAS(clarfb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
claqr4_(
  const __LAPACK_bool * _Nonnull wantt,
  const __LAPACK_bool * _Nonnull wantz,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ilo,
  const __LAPACK_int * _Nonnull ihi,
  __LAPACK_float_complex * _Nullable h,
  const __LAPACK_int * _Nonnull ldh,
  __LAPACK_float_complex * _Nullable w,
  const __LAPACK_int * _Nonnull iloz,
  const __LAPACK_int * _Nonnull ihiz,
  __LAPACK_float_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(claqr4)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
claqr0_(
  const __LAPACK_bool * _Nonnull wantt,
  const __LAPACK_bool * _Nonnull wantz,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ilo,
  const __LAPACK_int * _Nonnull ihi,
  __LAPACK_float_complex * _Nullable h,
  const __LAPACK_int * _Nonnull ldh,
  __LAPACK_float_complex * _Nullable w,
  const __LAPACK_int * _Nonnull iloz,
  const __LAPACK_int * _Nonnull ihiz,
  __LAPACK_float_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(claqr0)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ctrsen_(
  const char * _Nonnull job,
  const char * _Nonnull compq,
  const __LAPACK_bool * _Nullable select,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_float_complex * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  __LAPACK_float_complex * _Nullable w,
  __LAPACK_int * _Nonnull m,
  float * _Nonnull s,
  float * _Nonnull sep,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ctrsen)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgees_(
  const char * _Nonnull jobvs,
  const char * _Nonnull sort,
  __LAPACK_cgees_func_ptr select,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nonnull sdim,
  __LAPACK_float_complex * _Nullable w,
  __LAPACK_float_complex * _Nullable vs,
  const __LAPACK_int * _Nonnull ldvs,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  float * _Nullable rwork,
  __LAPACK_bool * _Nullable bwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgees)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sbdsqr_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ncvt,
  const __LAPACK_int * _Nonnull nru,
  const __LAPACK_int * _Nonnull ncc,
  float * _Nullable d,
  float * _Nullable e,
  float * _Nullable vt,
  const __LAPACK_int * _Nonnull ldvt,
  float * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  float * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sbdsqr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgelsd_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nullable s,
  const float * _Nonnull rcond,
  __LAPACK_int * _Nonnull rank,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  float * _Nullable rwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgelsd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgesdd_(
  const char * _Nonnull jobz,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable s,
  __LAPACK_float_complex * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  __LAPACK_float_complex * _Nullable vt,
  const __LAPACK_int * _Nonnull ldvt,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  float * _Nullable rwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgesdd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgesvd_(
  const char * _Nonnull jobu,
  const char * _Nonnull jobvt,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable s,
  __LAPACK_float_complex * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  __LAPACK_float_complex * _Nullable vt,
  const __LAPACK_int * _Nonnull ldvt,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgesvd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chb2st_kernels_(
  const char * _Nonnull uplo,
  const __LAPACK_bool * _Nonnull wantz,
  const __LAPACK_int * _Nonnull ttype,
  const __LAPACK_int * _Nonnull st,
  const __LAPACK_int * _Nonnull ed,
  const __LAPACK_int * _Nonnull sweep,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nb,
  const __LAPACK_int * _Nonnull ib,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable v,
  __LAPACK_float_complex * _Nullable tau,
  const __LAPACK_int * _Nonnull ldvt,
  __LAPACK_float_complex * _Nullable work)
__LAPACK_ALIAS(chb2st_kernels)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chbgv_(
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ka,
  const __LAPACK_int * _Nonnull kb,
  __LAPACK_float_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  __LAPACK_float_complex * _Nullable bb,
  const __LAPACK_int * _Nonnull ldbb,
  float * _Nullable w,
  __LAPACK_float_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_float_complex * _Nonnull work,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chbgv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chprfs_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_float_complex * _Nullable ap,
  const __LAPACK_float_complex * _Nullable afp,
  const __LAPACK_int * _Nullable ipiv,
  const __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  float * _Nullable ferr,
  float * _Nullable berr,
  __LAPACK_float_complex * _Nonnull work,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chprfs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
csprfs_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_float_complex * _Nullable ap,
  const __LAPACK_float_complex * _Nullable afp,
  const __LAPACK_int * _Nullable ipiv,
  const __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  float * _Nullable ferr,
  float * _Nullable berr,
  __LAPACK_float_complex * _Nonnull work,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(csprfs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ctprfs_(
  const char * _Nonnull uplo,
  const char * _Nonnull trans,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_float_complex * _Nullable ap,
  const __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  const __LAPACK_float_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  float * _Nullable ferr,
  float * _Nullable berr,
  __LAPACK_float_complex * _Nonnull work,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ctprfs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ctrevc_(
  const char * _Nonnull side,
  const char * _Nonnull howmny,
  const __LAPACK_bool * _Nullable select,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_float_complex * _Nullable vl,
  const __LAPACK_int * _Nonnull ldvl,
  __LAPACK_float_complex * _Nullable vr,
  const __LAPACK_int * _Nonnull ldvr,
  const __LAPACK_int * _Nonnull mm,
  __LAPACK_int * _Nonnull m,
  __LAPACK_float_complex * _Nonnull work,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ctrevc)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cunbdb1_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull p,
  const __LAPACK_int * _Nonnull q,
  __LAPACK_float_complex * _Nullable x11,
  const __LAPACK_int * _Nonnull ldx11,
  __LAPACK_float_complex * _Nullable x21,
  const __LAPACK_int * _Nonnull ldx21,
  float * _Nullable theta,
  float * _Nullable phi,
  __LAPACK_float_complex * _Nullable taup1,
  __LAPACK_float_complex * _Nullable taup2,
  __LAPACK_float_complex * _Nullable tauq1,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cunbdb1)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cunbdb2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull p,
  const __LAPACK_int * _Nonnull q,
  __LAPACK_float_complex * _Nullable x11,
  const __LAPACK_int * _Nonnull ldx11,
  __LAPACK_float_complex * _Nullable x21,
  const __LAPACK_int * _Nonnull ldx21,
  float * _Nullable theta,
  float * _Nullable phi,
  __LAPACK_float_complex * _Nullable taup1,
  __LAPACK_float_complex * _Nullable taup2,
  __LAPACK_float_complex * _Nullable tauq1,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cunbdb2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cunbdb3_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull p,
  const __LAPACK_int * _Nonnull q,
  __LAPACK_float_complex * _Nullable x11,
  const __LAPACK_int * _Nonnull ldx11,
  __LAPACK_float_complex * _Nullable x21,
  const __LAPACK_int * _Nonnull ldx21,
  float * _Nullable theta,
  float * _Nullable phi,
  __LAPACK_float_complex * _Nullable taup1,
  __LAPACK_float_complex * _Nullable taup2,
  __LAPACK_float_complex * _Nullable tauq1,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cunbdb3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dbdsqr_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ncvt,
  const __LAPACK_int * _Nonnull nru,
  const __LAPACK_int * _Nonnull ncc,
  double * _Nullable d,
  double * _Nullable e,
  double * _Nullable vt,
  const __LAPACK_int * _Nonnull ldvt,
  double * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  double * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dbdsqr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlarfb_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const char * _Nonnull direct,
  const char * _Nonnull storev,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const double * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  const double * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  double * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull ldwork)
__LAPACK_ALIAS(dlarfb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgees_(
  const char * _Nonnull jobvs,
  const char * _Nonnull sort,
  __LAPACK_dgees_func_ptr select,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nonnull sdim,
  double * _Nullable wr,
  double * _Nullable wi,
  double * _Nullable vs,
  const __LAPACK_int * _Nonnull ldvs,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_bool * _Nullable bwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgees)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dtrevc3_(
  const char * _Nonnull side,
  const char * _Nonnull howmny,
  __LAPACK_bool * _Nullable select,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  double * _Nullable vl,
  const __LAPACK_int * _Nonnull ldvl,
  double * _Nullable vr,
  const __LAPACK_int * _Nonnull ldvr,
  const __LAPACK_int * _Nonnull mm,
  __LAPACK_int * _Nonnull m,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dtrevc3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dorbdb1_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull p,
  const __LAPACK_int * _Nonnull q,
  double * _Nullable x11,
  const __LAPACK_int * _Nonnull ldx11,
  double * _Nullable x21,
  const __LAPACK_int * _Nonnull ldx21,
  double * _Nullable theta,
  double * _Nullable phi,
  double * _Nullable taup1,
  double * _Nullable taup2,
  double * _Nullable tauq1,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dorbdb1)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dorbdb2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull p,
  const __LAPACK_int * _Nonnull q,
  double * _Nullable x11,
  const __LAPACK_int * _Nonnull ldx11,
  double * _Nullable x21,
  const __LAPACK_int * _Nonnull ldx21,
  double * _Nullable theta,
  double * _Nullable phi,
  double * _Nullable taup1,
  double * _Nullable taup2,
  double * _Nullable tauq1,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dorbdb2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dorbdb3_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull p,
  const __LAPACK_int * _Nonnull q,
  double * _Nullable x11,
  const __LAPACK_int * _Nonnull ldx11,
  double * _Nullable x21,
  const __LAPACK_int * _Nonnull ldx21,
  double * _Nullable theta,
  double * _Nullable phi,
  double * _Nullable taup1,
  double * _Nullable taup2,
  double * _Nullable tauq1,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dorbdb3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsb2st_kernels_(
  const char * _Nonnull uplo,
  const __LAPACK_bool * _Nonnull wantz,
  const __LAPACK_int * _Nonnull ttype,
  const __LAPACK_int * _Nonnull st,
  const __LAPACK_int * _Nonnull ed,
  const __LAPACK_int * _Nonnull sweep,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nb,
  const __LAPACK_int * _Nonnull ib,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable v,
  double * _Nullable tau,
  const __LAPACK_int * _Nonnull ldvt,
  double * _Nullable work)
__LAPACK_ALIAS(dsb2st_kernels)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsprfs_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const double * _Nullable ap,
  const double * _Nullable afp,
  const __LAPACK_int * _Nullable ipiv,
  const double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  double * _Nullable ferr,
  double * _Nullable berr,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsprfs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dtprfs_(
  const char * _Nonnull uplo,
  const char * _Nonnull trans,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const double * _Nullable ap,
  const double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  const double * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  double * _Nullable ferr,
  double * _Nullable berr,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dtprfs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slarfb_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const char * _Nonnull direct,
  const char * _Nonnull storev,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const float * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  const float * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  float * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull ldwork)
__LAPACK_ALIAS(slarfb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgees_(
  const char * _Nonnull jobvs,
  const char * _Nonnull sort,
  __LAPACK_sgees_func_ptr select,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nonnull sdim,
  float * _Nullable wr,
  float * _Nullable wi,
  float * _Nullable vs,
  const __LAPACK_int * _Nonnull ldvs,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_bool * _Nullable bwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgees)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
strevc3_(
  const char * _Nonnull side,
  const char * _Nonnull howmny,
  __LAPACK_bool * _Nullable select,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  float * _Nullable vl,
  const __LAPACK_int * _Nonnull ldvl,
  float * _Nullable vr,
  const __LAPACK_int * _Nonnull ldvr,
  const __LAPACK_int * _Nonnull mm,
  __LAPACK_int * _Nonnull m,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(strevc3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sorbdb1_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull p,
  const __LAPACK_int * _Nonnull q,
  float * _Nullable x11,
  const __LAPACK_int * _Nonnull ldx11,
  float * _Nullable x21,
  const __LAPACK_int * _Nonnull ldx21,
  float * _Nullable theta,
  float * _Nullable phi,
  float * _Nullable taup1,
  float * _Nullable taup2,
  float * _Nullable tauq1,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sorbdb1)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sorbdb2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull p,
  const __LAPACK_int * _Nonnull q,
  float * _Nullable x11,
  const __LAPACK_int * _Nonnull ldx11,
  float * _Nullable x21,
  const __LAPACK_int * _Nonnull ldx21,
  float * _Nullable theta,
  float * _Nullable phi,
  float * _Nullable taup1,
  float * _Nullable taup2,
  float * _Nullable tauq1,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sorbdb2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sorbdb3_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull p,
  const __LAPACK_int * _Nonnull q,
  float * _Nullable x11,
  const __LAPACK_int * _Nonnull ldx11,
  float * _Nullable x21,
  const __LAPACK_int * _Nonnull ldx21,
  float * _Nullable theta,
  float * _Nullable phi,
  float * _Nullable taup1,
  float * _Nullable taup2,
  float * _Nullable tauq1,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sorbdb3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssb2st_kernels_(
  const char * _Nonnull uplo,
  const __LAPACK_bool * _Nonnull wantz,
  const __LAPACK_int * _Nonnull ttype,
  const __LAPACK_int * _Nonnull st,
  const __LAPACK_int * _Nonnull ed,
  const __LAPACK_int * _Nonnull sweep,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nb,
  const __LAPACK_int * _Nonnull ib,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable v,
  float * _Nullable tau,
  const __LAPACK_int * _Nonnull ldvt,
  float * _Nullable work)
__LAPACK_ALIAS(ssb2st_kernels)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssprfs_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const float * _Nullable ap,
  const float * _Nullable afp,
  const __LAPACK_int * _Nullable ipiv,
  const float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  float * _Nullable ferr,
  float * _Nullable berr,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssprfs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
stprfs_(
  const char * _Nonnull uplo,
  const char * _Nonnull trans,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const float * _Nullable ap,
  const float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  const float * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  float * _Nullable ferr,
  float * _Nullable berr,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(stprfs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zbdsqr_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ncvt,
  const __LAPACK_int * _Nonnull nru,
  const __LAPACK_int * _Nonnull ncc,
  double * _Nullable d,
  double * _Nullable e,
  __LAPACK_double_complex * _Nullable vt,
  const __LAPACK_int * _Nonnull ldvt,
  __LAPACK_double_complex * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  __LAPACK_double_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zbdsqr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlarfb_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const char * _Nonnull direct,
  const char * _Nonnull storev,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_double_complex * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  const __LAPACK_double_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_double_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull ldwork)
__LAPACK_ALIAS(zlarfb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlaqr4_(
  const __LAPACK_bool * _Nonnull wantt,
  const __LAPACK_bool * _Nonnull wantz,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ilo,
  const __LAPACK_int * _Nonnull ihi,
  __LAPACK_double_complex * _Nullable h,
  const __LAPACK_int * _Nonnull ldh,
  __LAPACK_double_complex * _Nullable w,
  const __LAPACK_int * _Nonnull iloz,
  const __LAPACK_int * _Nonnull ihiz,
  __LAPACK_double_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zlaqr4)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlaqr0_(
  const __LAPACK_bool * _Nonnull wantt,
  const __LAPACK_bool * _Nonnull wantz,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ilo,
  const __LAPACK_int * _Nonnull ihi,
  __LAPACK_double_complex * _Nullable h,
  const __LAPACK_int * _Nonnull ldh,
  __LAPACK_double_complex * _Nullable w,
  const __LAPACK_int * _Nonnull iloz,
  const __LAPACK_int * _Nonnull ihiz,
  __LAPACK_double_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zlaqr0)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ztrsen_(
  const char * _Nonnull job,
  const char * _Nonnull compq,
  const __LAPACK_bool * _Nullable select,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_double_complex * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  __LAPACK_double_complex * _Nullable w,
  __LAPACK_int * _Nonnull m,
  double * _Nonnull s,
  double * _Nonnull sep,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ztrsen)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgees_(
  const char * _Nonnull jobvs,
  const char * _Nonnull sort,
  __LAPACK_zgees_func_ptr select,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nonnull sdim,
  __LAPACK_double_complex * _Nullable w,
  __LAPACK_double_complex * _Nullable vs,
  const __LAPACK_int * _Nonnull ldvs,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  double * _Nullable rwork,
  __LAPACK_bool * _Nullable bwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgees)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgelsd_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nullable s,
  const double * _Nonnull rcond,
  __LAPACK_int * _Nonnull rank,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  double * _Nullable rwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgelsd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgesdd_(
  const char * _Nonnull jobz,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable s,
  __LAPACK_double_complex * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  __LAPACK_double_complex * _Nullable vt,
  const __LAPACK_int * _Nonnull ldvt,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  double * _Nullable rwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgesdd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgesvd_(
  const char * _Nonnull jobu,
  const char * _Nonnull jobvt,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable s,
  __LAPACK_double_complex * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  __LAPACK_double_complex * _Nullable vt,
  const __LAPACK_int * _Nonnull ldvt,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgesvd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhb2st_kernels_(
  const char * _Nonnull uplo,
  const __LAPACK_bool * _Nonnull wantz,
  const __LAPACK_int * _Nonnull ttype,
  const __LAPACK_int * _Nonnull st,
  const __LAPACK_int * _Nonnull ed,
  const __LAPACK_int * _Nonnull sweep,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nb,
  const __LAPACK_int * _Nonnull ib,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable v,
  __LAPACK_double_complex * _Nullable tau,
  const __LAPACK_int * _Nonnull ldvt,
  __LAPACK_double_complex * _Nullable work)
__LAPACK_ALIAS(zhb2st_kernels)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhbgv_(
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ka,
  const __LAPACK_int * _Nonnull kb,
  __LAPACK_double_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  __LAPACK_double_complex * _Nullable bb,
  const __LAPACK_int * _Nonnull ldbb,
  double * _Nullable w,
  __LAPACK_double_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_double_complex * _Nonnull work,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhbgv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhprfs_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_double_complex * _Nullable ap,
  const __LAPACK_double_complex * _Nullable afp,
  const __LAPACK_int * _Nullable ipiv,
  const __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  double * _Nullable ferr,
  double * _Nullable berr,
  __LAPACK_double_complex * _Nonnull work,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhprfs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zsprfs_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_double_complex * _Nullable ap,
  const __LAPACK_double_complex * _Nullable afp,
  const __LAPACK_int * _Nullable ipiv,
  const __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  double * _Nullable ferr,
  double * _Nullable berr,
  __LAPACK_double_complex * _Nonnull work,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zsprfs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ztprfs_(
  const char * _Nonnull uplo,
  const char * _Nonnull trans,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_double_complex * _Nullable ap,
  const __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  const __LAPACK_double_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  double * _Nullable ferr,
  double * _Nullable berr,
  __LAPACK_double_complex * _Nonnull work,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ztprfs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ztrevc_(
  const char * _Nonnull side,
  const char * _Nonnull howmny,
  const __LAPACK_bool * _Nullable select,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_double_complex * _Nullable vl,
  const __LAPACK_int * _Nonnull ldvl,
  __LAPACK_double_complex * _Nullable vr,
  const __LAPACK_int * _Nonnull ldvr,
  const __LAPACK_int * _Nonnull mm,
  __LAPACK_int * _Nonnull m,
  __LAPACK_double_complex * _Nonnull work,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ztrevc)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zunbdb1_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull p,
  const __LAPACK_int * _Nonnull q,
  __LAPACK_double_complex * _Nullable x11,
  const __LAPACK_int * _Nonnull ldx11,
  __LAPACK_double_complex * _Nullable x21,
  const __LAPACK_int * _Nonnull ldx21,
  double * _Nullable theta,
  double * _Nullable phi,
  __LAPACK_double_complex * _Nullable taup1,
  __LAPACK_double_complex * _Nullable taup2,
  __LAPACK_double_complex * _Nullable tauq1,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zunbdb1)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zunbdb2_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull p,
  const __LAPACK_int * _Nonnull q,
  __LAPACK_double_complex * _Nullable x11,
  const __LAPACK_int * _Nonnull ldx11,
  __LAPACK_double_complex * _Nullable x21,
  const __LAPACK_int * _Nonnull ldx21,
  double * _Nullable theta,
  double * _Nullable phi,
  __LAPACK_double_complex * _Nullable taup1,
  __LAPACK_double_complex * _Nullable taup2,
  __LAPACK_double_complex * _Nullable tauq1,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zunbdb2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zunbdb3_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull p,
  const __LAPACK_int * _Nonnull q,
  __LAPACK_double_complex * _Nullable x11,
  const __LAPACK_int * _Nonnull ldx11,
  __LAPACK_double_complex * _Nullable x21,
  const __LAPACK_int * _Nonnull ldx21,
  double * _Nullable theta,
  double * _Nullable phi,
  __LAPACK_double_complex * _Nullable taup1,
  __LAPACK_double_complex * _Nullable taup2,
  __LAPACK_double_complex * _Nullable tauq1,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zunbdb3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgesvj_(
  const char * _Nonnull joba,
  const char * _Nonnull jobu,
  const char * _Nonnull jobv,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable sva,
  const __LAPACK_int * _Nonnull mv,
  __LAPACK_float_complex * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  __LAPACK_float_complex * _Nullable cwork,
  const __LAPACK_int * _Nonnull lwork,
  float * _Nullable rwork,
  const __LAPACK_int * _Nonnull lrwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgesvj)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slasdq_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull sqre,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ncvt,
  const __LAPACK_int * _Nonnull nru,
  const __LAPACK_int * _Nonnull ncc,
  float * _Nullable d,
  float * _Nullable e,
  float * _Nullable vt,
  const __LAPACK_int * _Nonnull ldvt,
  float * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  float * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slasdq)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
clarzb_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const char * _Nonnull direct,
  const char * _Nonnull storev,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull l,
  __LAPACK_float_complex * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  __LAPACK_float_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_float_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull ldwork)
__LAPACK_ALIAS(clarzb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
clamswlq_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull mb,
  const __LAPACK_int * _Nonnull nb,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_float_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(clamswlq)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
clamtsqr_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull mb,
  const __LAPACK_int * _Nonnull nb,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_float_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(clamtsqr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgghd3_(
  const char * _Nonnull compq,
  const char * _Nonnull compz,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ilo,
  const __LAPACK_int * _Nonnull ihi,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  __LAPACK_float_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgghd3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chbevd_(
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  __LAPACK_float_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  float * _Nullable w,
  __LAPACK_float_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  float * _Nullable rwork,
  const __LAPACK_int * _Nonnull lrwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chbevd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chbevd_2stage_(
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  __LAPACK_float_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  float * _Nullable w,
  __LAPACK_float_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  float * _Nullable rwork,
  const __LAPACK_int * _Nonnull lrwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chbevd_2stage)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chegvd_(
  const __LAPACK_int * _Nonnull itype,
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nullable w,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  float * _Nullable rwork,
  const __LAPACK_int * _Nonnull lrwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chegvd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chpgvd_(
  const __LAPACK_int * _Nonnull itype,
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable ap,
  __LAPACK_float_complex * _Nullable bp,
  float * _Nullable w,
  __LAPACK_float_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  float * _Nullable rwork,
  const __LAPACK_int * _Nonnull lrwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chpgvd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cporfs_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  const __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  float * _Nullable ferr,
  float * _Nullable berr,
  __LAPACK_float_complex * _Nonnull work,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cporfs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cptrfs_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const float * _Nullable d,
  const __LAPACK_float_complex * _Nullable e,
  const float * _Nullable df,
  const __LAPACK_float_complex * _Nullable ef,
  const __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  float * _Nullable ferr,
  float * _Nullable berr,
  __LAPACK_float_complex * _Nonnull work,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cptrfs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ctrrfs_(
  const char * _Nonnull uplo,
  const char * _Nonnull trans,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  const __LAPACK_float_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  float * _Nullable ferr,
  float * _Nullable berr,
  __LAPACK_float_complex * _Nonnull work,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ctrrfs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cunbdb4_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull p,
  const __LAPACK_int * _Nonnull q,
  __LAPACK_float_complex * _Nullable x11,
  const __LAPACK_int * _Nonnull ldx11,
  __LAPACK_float_complex * _Nullable x21,
  const __LAPACK_int * _Nonnull ldx21,
  float * _Nullable theta,
  float * _Nullable phi,
  __LAPACK_float_complex * _Nullable taup1,
  __LAPACK_float_complex * _Nullable taup2,
  __LAPACK_float_complex * _Nullable tauq1,
  __LAPACK_float_complex * _Nullable phantom,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cunbdb4)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlasdq_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull sqre,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ncvt,
  const __LAPACK_int * _Nonnull nru,
  const __LAPACK_int * _Nonnull ncc,
  double * _Nullable d,
  double * _Nullable e,
  double * _Nullable vt,
  const __LAPACK_int * _Nonnull ldvt,
  double * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  double * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlasdq)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlasy2_(
  const __LAPACK_bool * _Nonnull ltranl,
  const __LAPACK_bool * _Nonnull ltranr,
  const __LAPACK_int * _Nonnull isgn,
  const __LAPACK_int * _Nonnull n1,
  const __LAPACK_int * _Nonnull n2,
  const double * _Nullable tl,
  const __LAPACK_int * _Nonnull ldtl,
  const double * _Nullable tr,
  const __LAPACK_int * _Nonnull ldtr,
  const double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nonnull scale,
  double * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  double * _Nonnull xnorm,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlasy2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlaqr4_(
  const __LAPACK_bool * _Nonnull wantt,
  const __LAPACK_bool * _Nonnull wantz,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ilo,
  const __LAPACK_int * _Nonnull ihi,
  double * _Nullable h,
  const __LAPACK_int * _Nonnull ldh,
  double * _Nullable wr,
  double * _Nullable wi,
  const __LAPACK_int * _Nonnull iloz,
  const __LAPACK_int * _Nonnull ihiz,
  double * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlaqr4)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlaqr0_(
  const __LAPACK_bool * _Nonnull wantt,
  const __LAPACK_bool * _Nonnull wantz,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ilo,
  const __LAPACK_int * _Nonnull ihi,
  double * _Nullable h,
  const __LAPACK_int * _Nonnull ldh,
  double * _Nullable wr,
  double * _Nullable wi,
  const __LAPACK_int * _Nonnull iloz,
  const __LAPACK_int * _Nonnull ihiz,
  double * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlaqr0)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dtgevc_(
  const char * _Nonnull side,
  const char * _Nonnull howmny,
  const __LAPACK_bool * _Nullable select,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable s,
  const __LAPACK_int * _Nonnull lds,
  const double * _Nullable p,
  const __LAPACK_int * _Nonnull ldp,
  double * _Nullable vl,
  const __LAPACK_int * _Nonnull ldvl,
  double * _Nullable vr,
  const __LAPACK_int * _Nonnull ldvr,
  const __LAPACK_int * _Nonnull mm,
  __LAPACK_int * _Nonnull m,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dtgevc)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlarzb_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const char * _Nonnull direct,
  const char * _Nonnull storev,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull l,
  const double * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  const double * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  double * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull ldwork)
__LAPACK_ALIAS(dlarzb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlamswlq_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull mb,
  const __LAPACK_int * _Nonnull nb,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  double * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlamswlq)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlamtsqr_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull mb,
  const __LAPACK_int * _Nonnull nb,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  double * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlamtsqr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dtgexc_(
  const __LAPACK_bool * _Nonnull wantq,
  const __LAPACK_bool * _Nonnull wantz,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  double * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_int * _Nonnull ifst,
  __LAPACK_int * _Nonnull ilst,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dtgexc)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgghd3_(
  const char * _Nonnull compq,
  const char * _Nonnull compz,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ilo,
  const __LAPACK_int * _Nonnull ihi,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  double * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgghd3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlaein_(
  const __LAPACK_bool * _Nonnull rightv,
  const __LAPACK_bool * _Nonnull noinit,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable h,
  const __LAPACK_int * _Nonnull ldh,
  const double * _Nonnull wr,
  const double * _Nonnull wi,
  double * _Nullable vr,
  double * _Nullable vi,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nonnull work,
  const double * _Nonnull eps3,
  const double * _Nonnull smlnum,
  const double * _Nonnull bignum,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlaein)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dorbdb4_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull p,
  const __LAPACK_int * _Nonnull q,
  double * _Nullable x11,
  const __LAPACK_int * _Nonnull ldx11,
  double * _Nullable x21,
  const __LAPACK_int * _Nonnull ldx21,
  double * _Nullable theta,
  double * _Nullable phi,
  double * _Nullable taup1,
  double * _Nullable taup2,
  double * _Nullable tauq1,
  double * _Nullable phantom,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dorbdb4)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dporfs_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  const double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  double * _Nullable ferr,
  double * _Nullable berr,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dporfs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dptsvx_(
  const char * _Nonnull fact,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const double * _Nullable d,
  const double * _Nullable e,
  double * _Nullable df,
  double * _Nullable ef,
  const double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  double * _Nonnull rcond,
  double * _Nullable ferr,
  double * _Nullable berr,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dptsvx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dtrrfs_(
  const char * _Nonnull uplo,
  const char * _Nonnull trans,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  const double * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  double * _Nullable ferr,
  double * _Nullable berr,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dtrrfs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slasy2_(
  const __LAPACK_bool * _Nonnull ltranl,
  const __LAPACK_bool * _Nonnull ltranr,
  const __LAPACK_int * _Nonnull isgn,
  const __LAPACK_int * _Nonnull n1,
  const __LAPACK_int * _Nonnull n2,
  const float * _Nullable tl,
  const __LAPACK_int * _Nonnull ldtl,
  const float * _Nullable tr,
  const __LAPACK_int * _Nonnull ldtr,
  const float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nonnull scale,
  float * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  float * _Nonnull xnorm,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slasy2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slaqr4_(
  const __LAPACK_bool * _Nonnull wantt,
  const __LAPACK_bool * _Nonnull wantz,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ilo,
  const __LAPACK_int * _Nonnull ihi,
  float * _Nullable h,
  const __LAPACK_int * _Nonnull ldh,
  float * _Nullable wr,
  float * _Nullable wi,
  const __LAPACK_int * _Nonnull iloz,
  const __LAPACK_int * _Nonnull ihiz,
  float * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slaqr4)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slaqr0_(
  const __LAPACK_bool * _Nonnull wantt,
  const __LAPACK_bool * _Nonnull wantz,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ilo,
  const __LAPACK_int * _Nonnull ihi,
  float * _Nullable h,
  const __LAPACK_int * _Nonnull ldh,
  float * _Nullable wr,
  float * _Nullable wi,
  const __LAPACK_int * _Nonnull iloz,
  const __LAPACK_int * _Nonnull ihiz,
  float * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slaqr0)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
stgevc_(
  const char * _Nonnull side,
  const char * _Nonnull howmny,
  const __LAPACK_bool * _Nullable select,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable s,
  const __LAPACK_int * _Nonnull lds,
  const float * _Nullable p,
  const __LAPACK_int * _Nonnull ldp,
  float * _Nullable vl,
  const __LAPACK_int * _Nonnull ldvl,
  float * _Nullable vr,
  const __LAPACK_int * _Nonnull ldvr,
  const __LAPACK_int * _Nonnull mm,
  __LAPACK_int * _Nonnull m,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(stgevc)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slarzb_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const char * _Nonnull direct,
  const char * _Nonnull storev,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull l,
  const float * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  const float * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  float * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull ldwork)
__LAPACK_ALIAS(slarzb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slamswlq_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull mb,
  const __LAPACK_int * _Nonnull nb,
  const float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  float * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slamswlq)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slamtsqr_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull mb,
  const __LAPACK_int * _Nonnull nb,
  const float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  float * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slamtsqr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
stgexc_(
  const __LAPACK_bool * _Nonnull wantq,
  const __LAPACK_bool * _Nonnull wantz,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  float * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_int * _Nonnull ifst,
  __LAPACK_int * _Nonnull ilst,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(stgexc)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgghd3_(
  const char * _Nonnull compq,
  const char * _Nonnull compz,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ilo,
  const __LAPACK_int * _Nonnull ihi,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  float * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgghd3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slaein_(
  const __LAPACK_bool * _Nonnull rightv,
  const __LAPACK_bool * _Nonnull noinit,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable h,
  const __LAPACK_int * _Nonnull ldh,
  const float * _Nonnull wr,
  const float * _Nonnull wi,
  float * _Nullable vr,
  float * _Nullable vi,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nonnull work,
  const float * _Nonnull eps3,
  const float * _Nonnull smlnum,
  const float * _Nonnull bignum,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slaein)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sorbdb4_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull p,
  const __LAPACK_int * _Nonnull q,
  float * _Nullable x11,
  const __LAPACK_int * _Nonnull ldx11,
  float * _Nullable x21,
  const __LAPACK_int * _Nonnull ldx21,
  float * _Nullable theta,
  float * _Nullable phi,
  float * _Nullable taup1,
  float * _Nullable taup2,
  float * _Nullable tauq1,
  float * _Nullable phantom,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sorbdb4)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sporfs_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  const float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  float * _Nullable ferr,
  float * _Nullable berr,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sporfs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sptsvx_(
  const char * _Nonnull fact,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const float * _Nullable d,
  const float * _Nullable e,
  float * _Nullable df,
  float * _Nullable ef,
  const float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  float * _Nonnull rcond,
  float * _Nullable ferr,
  float * _Nullable berr,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sptsvx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
strrfs_(
  const char * _Nonnull uplo,
  const char * _Nonnull trans,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  const float * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  float * _Nullable ferr,
  float * _Nullable berr,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(strrfs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgesvj_(
  const char * _Nonnull joba,
  const char * _Nonnull jobu,
  const char * _Nonnull jobv,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable sva,
  const __LAPACK_int * _Nonnull mv,
  __LAPACK_double_complex * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  __LAPACK_double_complex * _Nullable cwork,
  const __LAPACK_int * _Nonnull lwork,
  double * _Nullable rwork,
  const __LAPACK_int * _Nonnull lrwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgesvj)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlarzb_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const char * _Nonnull direct,
  const char * _Nonnull storev,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull l,
  __LAPACK_double_complex * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  __LAPACK_double_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_double_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull ldwork)
__LAPACK_ALIAS(zlarzb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlamswlq_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull mb,
  const __LAPACK_int * _Nonnull nb,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_double_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zlamswlq)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlamtsqr_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull mb,
  const __LAPACK_int * _Nonnull nb,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_double_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zlamtsqr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgghd3_(
  const char * _Nonnull compq,
  const char * _Nonnull compz,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ilo,
  const __LAPACK_int * _Nonnull ihi,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  __LAPACK_double_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgghd3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhbevd_(
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  __LAPACK_double_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  double * _Nullable w,
  __LAPACK_double_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  double * _Nullable rwork,
  const __LAPACK_int * _Nonnull lrwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhbevd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhbevd_2stage_(
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  __LAPACK_double_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  double * _Nullable w,
  __LAPACK_double_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  double * _Nullable rwork,
  const __LAPACK_int * _Nonnull lrwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhbevd_2stage)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhegvd_(
  const __LAPACK_int * _Nonnull itype,
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nullable w,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  double * _Nullable rwork,
  const __LAPACK_int * _Nonnull lrwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhegvd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhpgvd_(
  const __LAPACK_int * _Nonnull itype,
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable ap,
  __LAPACK_double_complex * _Nullable bp,
  double * _Nullable w,
  __LAPACK_double_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  double * _Nullable rwork,
  const __LAPACK_int * _Nonnull lrwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhpgvd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zporfs_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  const __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  double * _Nullable ferr,
  double * _Nullable berr,
  __LAPACK_double_complex * _Nonnull work,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zporfs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zptrfs_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const double * _Nullable d,
  const __LAPACK_double_complex * _Nullable e,
  const double * _Nullable df,
  const __LAPACK_double_complex * _Nullable ef,
  const __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  double * _Nullable ferr,
  double * _Nullable berr,
  __LAPACK_double_complex * _Nonnull work,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zptrfs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ztrrfs_(
  const char * _Nonnull uplo,
  const char * _Nonnull trans,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  const __LAPACK_double_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  double * _Nullable ferr,
  double * _Nullable berr,
  __LAPACK_double_complex * _Nonnull work,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ztrrfs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zunbdb4_(
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull p,
  const __LAPACK_int * _Nonnull q,
  __LAPACK_double_complex * _Nullable x11,
  const __LAPACK_int * _Nonnull ldx11,
  __LAPACK_double_complex * _Nullable x21,
  const __LAPACK_int * _Nonnull ldx21,
  double * _Nullable theta,
  double * _Nullable phi,
  __LAPACK_double_complex * _Nullable taup1,
  __LAPACK_double_complex * _Nullable taup2,
  __LAPACK_double_complex * _Nullable tauq1,
  __LAPACK_double_complex * _Nullable phantom,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zunbdb4)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ctrevc3_(
  const char * _Nonnull side,
  const char * _Nonnull howmny,
  const __LAPACK_bool * _Nullable select,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_float_complex * _Nullable vl,
  const __LAPACK_int * _Nonnull ldvl,
  __LAPACK_float_complex * _Nullable vr,
  const __LAPACK_int * _Nonnull ldvr,
  const __LAPACK_int * _Nonnull mm,
  __LAPACK_int * _Nonnull m,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  float * _Nullable rwork,
  const __LAPACK_int * _Nonnull lrwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ctrevc3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgegs_(
  const char * _Nonnull jobvsl,
  const char * _Nonnull jobvsr,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nullable alpha,
  __LAPACK_float_complex * _Nullable beta,
  __LAPACK_float_complex * _Nullable vsl,
  const __LAPACK_int * _Nonnull ldvsl,
  __LAPACK_float_complex * _Nullable vsr,
  const __LAPACK_int * _Nonnull ldvsr,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgegs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ctgevc_(
  const char * _Nonnull side,
  const char * _Nonnull howmny,
  const __LAPACK_bool * _Nullable select,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable s,
  const __LAPACK_int * _Nonnull lds,
  const __LAPACK_float_complex * _Nullable p,
  const __LAPACK_int * _Nonnull ldp,
  __LAPACK_float_complex * _Nullable vl,
  const __LAPACK_int * _Nonnull ldvl,
  __LAPACK_float_complex * _Nullable vr,
  const __LAPACK_int * _Nonnull ldvr,
  const __LAPACK_int * _Nonnull mm,
  __LAPACK_int * _Nonnull m,
  __LAPACK_float_complex * _Nonnull work,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ctgevc)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgegv_(
  const char * _Nonnull jobvl,
  const char * _Nonnull jobvr,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nullable alpha,
  __LAPACK_float_complex * _Nullable beta,
  __LAPACK_float_complex * _Nullable vl,
  const __LAPACK_int * _Nonnull ldvl,
  __LAPACK_float_complex * _Nullable vr,
  const __LAPACK_int * _Nonnull ldvr,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgegv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgsvj0_(
  const char * _Nonnull jobv,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable d,
  float * _Nullable sva,
  const __LAPACK_int * _Nonnull mv,
  __LAPACK_float_complex * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  const float * _Nonnull eps,
  const float * _Nonnull sfmin,
  const float * _Nonnull tol,
  const __LAPACK_int * _Nonnull nsweep,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgsvj0)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ctpmlqt_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull l,
  const __LAPACK_int * _Nonnull mb,
  const __LAPACK_float_complex * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  const __LAPACK_float_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ctpmlqt)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ctpmqrt_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull l,
  const __LAPACK_int * _Nonnull nb,
  const __LAPACK_float_complex * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  const __LAPACK_float_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ctpmqrt)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgerfs_(
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  const __LAPACK_int * _Nullable ipiv,
  const __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  float * _Nullable ferr,
  float * _Nullable berr,
  __LAPACK_float_complex * _Nonnull work,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgerfs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sbdsvdx_(
  const char * _Nonnull uplo,
  const char * _Nonnull jobz,
  const char * _Nonnull range,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable d,
  float * _Nullable e,
  const float * _Nonnull vl,
  const float * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  __LAPACK_int * _Nonnull ns,
  float * _Nullable s,
  float * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sbdsvdx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cggev_(
  const char * _Nonnull jobvl,
  const char * _Nonnull jobvr,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nullable alpha,
  __LAPACK_float_complex * _Nullable beta,
  __LAPACK_float_complex * _Nullable vl,
  const __LAPACK_int * _Nonnull ldvl,
  __LAPACK_float_complex * _Nullable vr,
  const __LAPACK_int * _Nonnull ldvr,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cggev)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cggev3_(
  const char * _Nonnull jobvl,
  const char * _Nonnull jobvr,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nullable alpha,
  __LAPACK_float_complex * _Nullable beta,
  __LAPACK_float_complex * _Nullable vl,
  const __LAPACK_int * _Nonnull ldvl,
  __LAPACK_float_complex * _Nullable vr,
  const __LAPACK_int * _Nonnull ldvr,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cggev3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slaed2_(
  __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull n1,
  float * _Nullable d,
  float * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  __LAPACK_int * _Nullable indxq,
  float * _Nonnull rho,
  float * _Nullable z,
  float * _Nullable dlamda,
  float * _Nullable w,
  float * _Nullable q2,
  __LAPACK_int * _Nullable indx,
  __LAPACK_int * _Nullable indxc,
  __LAPACK_int * _Nullable indxp,
  __LAPACK_int * _Nullable coltyp,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slaed2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slarrb_(
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable d,
  const float * _Nullable lld,
  const __LAPACK_int * _Nonnull ifirst,
  const __LAPACK_int * _Nonnull ilast,
  const float * _Nonnull rtol1,
  const float * _Nonnull rtol2,
  const __LAPACK_int * _Nonnull offset,
  float * _Nullable w,
  float * _Nullable wgap,
  float * _Nullable werr,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  const float * _Nonnull pivmin,
  const float * _Nonnull spdiam,
  const __LAPACK_int * _Nonnull twist,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slarrb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cherfs_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  const __LAPACK_int * _Nullable ipiv,
  const __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  float * _Nullable ferr,
  float * _Nullable berr,
  __LAPACK_float_complex * _Nonnull work,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cherfs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chpsvx_(
  const char * _Nonnull fact,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_float_complex * _Nullable ap,
  __LAPACK_float_complex * _Nullable afp,
  __LAPACK_int * _Nullable ipiv,
  const __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  float * _Nonnull rcond,
  float * _Nullable ferr,
  float * _Nullable berr,
  __LAPACK_float_complex * _Nonnull work,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chpsvx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cpbrfs_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_float_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  const __LAPACK_float_complex * _Nullable afb,
  const __LAPACK_int * _Nonnull ldafb,
  const __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  float * _Nullable ferr,
  float * _Nullable berr,
  __LAPACK_float_complex * _Nonnull work,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cpbrfs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cptsvx_(
  const char * _Nonnull fact,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const float * _Nullable d,
  const __LAPACK_float_complex * _Nullable e,
  float * _Nullable df,
  __LAPACK_float_complex * _Nullable ef,
  const __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  float * _Nonnull rcond,
  float * _Nullable ferr,
  float * _Nullable berr,
  __LAPACK_float_complex * _Nonnull work,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cptsvx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cspsvx_(
  const char * _Nonnull fact,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_float_complex * _Nullable ap,
  __LAPACK_float_complex * _Nullable afp,
  __LAPACK_int * _Nullable ipiv,
  const __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  float * _Nonnull rcond,
  float * _Nullable ferr,
  float * _Nullable berr,
  __LAPACK_float_complex * _Nonnull work,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cspsvx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
csyrfs_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  const __LAPACK_int * _Nullable ipiv,
  const __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  float * _Nullable ferr,
  float * _Nullable berr,
  __LAPACK_float_complex * _Nonnull work,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(csyrfs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ctbrfs_(
  const char * _Nonnull uplo,
  const char * _Nonnull trans,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_float_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  const __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  const __LAPACK_float_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  float * _Nullable ferr,
  float * _Nullable berr,
  __LAPACK_float_complex * _Nonnull work,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ctbrfs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dbdsvdx_(
  const char * _Nonnull uplo,
  const char * _Nonnull jobz,
  const char * _Nonnull range,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable d,
  double * _Nullable e,
  const double * _Nonnull vl,
  const double * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  __LAPACK_int * _Nonnull ns,
  double * _Nullable s,
  double * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dbdsvdx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgegs_(
  const char * _Nonnull jobvsl,
  const char * _Nonnull jobvsr,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nullable alphar,
  double * _Nullable alphai,
  double * _Nullable beta,
  double * _Nullable vsl,
  const __LAPACK_int * _Nonnull ldvsl,
  double * _Nullable vsr,
  const __LAPACK_int * _Nonnull ldvsr,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgegs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgegv_(
  const char * _Nonnull jobvl,
  const char * _Nonnull jobvr,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nullable alphar,
  double * _Nullable alphai,
  double * _Nullable beta,
  double * _Nullable vl,
  const __LAPACK_int * _Nonnull ldvl,
  double * _Nullable vr,
  const __LAPACK_int * _Nonnull ldvr,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgegv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgsvj0_(
  const char * _Nonnull jobv,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable d,
  double * _Nullable sva,
  const __LAPACK_int * _Nonnull mv,
  double * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  const double * _Nonnull eps,
  const double * _Nonnull sfmin,
  const double * _Nonnull tol,
  const __LAPACK_int * _Nonnull nsweep,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgsvj0)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dtpmlqt_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull l,
  const __LAPACK_int * _Nonnull mb,
  const double * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  const double * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dtpmlqt)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dtpmqrt_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull l,
  const __LAPACK_int * _Nonnull nb,
  const double * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  const double * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dtpmqrt)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgerfs_(
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  const __LAPACK_int * _Nullable ipiv,
  const double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  double * _Nullable ferr,
  double * _Nullable berr,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgerfs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dtgex2_(
  const __LAPACK_bool * _Nonnull wantq,
  const __LAPACK_bool * _Nonnull wantz,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  double * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  const __LAPACK_int * _Nonnull j1,
  const __LAPACK_int * _Nonnull n1,
  const __LAPACK_int * _Nonnull n2,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dtgex2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dggev_(
  const char * _Nonnull jobvl,
  const char * _Nonnull jobvr,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nullable alphar,
  double * _Nullable alphai,
  double * _Nullable beta,
  double * _Nullable vl,
  const __LAPACK_int * _Nonnull ldvl,
  double * _Nullable vr,
  const __LAPACK_int * _Nonnull ldvr,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dggev)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dggev3_(
  const char * _Nonnull jobvl,
  const char * _Nonnull jobvr,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nullable alphar,
  double * _Nullable alphai,
  double * _Nullable beta,
  double * _Nullable vl,
  const __LAPACK_int * _Nonnull ldvl,
  double * _Nullable vr,
  const __LAPACK_int * _Nonnull ldvr,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dggev3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlaed2_(
  __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull n1,
  double * _Nullable d,
  double * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  __LAPACK_int * _Nullable indxq,
  double * _Nonnull rho,
  double * _Nullable z,
  double * _Nullable dlamda,
  double * _Nullable w,
  double * _Nullable q2,
  __LAPACK_int * _Nullable indx,
  __LAPACK_int * _Nullable indxc,
  __LAPACK_int * _Nullable indxp,
  __LAPACK_int * _Nullable coltyp,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlaed2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlarrb_(
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable d,
  const double * _Nullable lld,
  const __LAPACK_int * _Nonnull ifirst,
  const __LAPACK_int * _Nonnull ilast,
  const double * _Nonnull rtol1,
  const double * _Nonnull rtol2,
  const __LAPACK_int * _Nonnull offset,
  double * _Nullable w,
  double * _Nullable wgap,
  double * _Nullable werr,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  const double * _Nonnull pivmin,
  const double * _Nonnull spdiam,
  const __LAPACK_int * _Nonnull twist,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlarrb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dpbrfs_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  const __LAPACK_int * _Nonnull nrhs,
  const double * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  const double * _Nullable afb,
  const __LAPACK_int * _Nonnull ldafb,
  const double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  double * _Nullable ferr,
  double * _Nullable berr,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dpbrfs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsbgvd_(
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ka,
  const __LAPACK_int * _Nonnull kb,
  double * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  double * _Nullable bb,
  const __LAPACK_int * _Nonnull ldbb,
  double * _Nullable w,
  double * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsbgvd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dspsvx_(
  const char * _Nonnull fact,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const double * _Nullable ap,
  double * _Nullable afp,
  __LAPACK_int * _Nullable ipiv,
  const double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  double * _Nonnull rcond,
  double * _Nullable ferr,
  double * _Nullable berr,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dspsvx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsyrfs_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  const __LAPACK_int * _Nullable ipiv,
  const double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  double * _Nullable ferr,
  double * _Nullable berr,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsyrfs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dtbrfs_(
  const char * _Nonnull uplo,
  const char * _Nonnull trans,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  const __LAPACK_int * _Nonnull nrhs,
  const double * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  const double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  const double * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  double * _Nullable ferr,
  double * _Nullable berr,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dtbrfs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgegs_(
  const char * _Nonnull jobvsl,
  const char * _Nonnull jobvsr,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nullable alphar,
  float * _Nullable alphai,
  float * _Nullable beta,
  float * _Nullable vsl,
  const __LAPACK_int * _Nonnull ldvsl,
  float * _Nullable vsr,
  const __LAPACK_int * _Nonnull ldvsr,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgegs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgegv_(
  const char * _Nonnull jobvl,
  const char * _Nonnull jobvr,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nullable alphar,
  float * _Nullable alphai,
  float * _Nullable beta,
  float * _Nullable vl,
  const __LAPACK_int * _Nonnull ldvl,
  float * _Nullable vr,
  const __LAPACK_int * _Nonnull ldvr,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgegv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgsvj0_(
  const char * _Nonnull jobv,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable d,
  float * _Nullable sva,
  const __LAPACK_int * _Nonnull mv,
  float * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  const float * _Nonnull eps,
  const float * _Nonnull sfmin,
  const float * _Nonnull tol,
  const __LAPACK_int * _Nonnull nsweep,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgsvj0)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
stpmlqt_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull l,
  const __LAPACK_int * _Nonnull mb,
  const float * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  const float * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(stpmlqt)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
stpmqrt_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull l,
  const __LAPACK_int * _Nonnull nb,
  const float * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  const float * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(stpmqrt)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgerfs_(
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  const __LAPACK_int * _Nullable ipiv,
  const float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  float * _Nullable ferr,
  float * _Nullable berr,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgerfs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
stgex2_(
  const __LAPACK_bool * _Nonnull wantq,
  const __LAPACK_bool * _Nonnull wantz,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  float * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  const __LAPACK_int * _Nonnull j1,
  const __LAPACK_int * _Nonnull n1,
  const __LAPACK_int * _Nonnull n2,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(stgex2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sggev_(
  const char * _Nonnull jobvl,
  const char * _Nonnull jobvr,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nullable alphar,
  float * _Nullable alphai,
  float * _Nullable beta,
  float * _Nullable vl,
  const __LAPACK_int * _Nonnull ldvl,
  float * _Nullable vr,
  const __LAPACK_int * _Nonnull ldvr,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sggev)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sggev3_(
  const char * _Nonnull jobvl,
  const char * _Nonnull jobvr,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nullable alphar,
  float * _Nullable alphai,
  float * _Nullable beta,
  float * _Nullable vl,
  const __LAPACK_int * _Nonnull ldvl,
  float * _Nullable vr,
  const __LAPACK_int * _Nonnull ldvr,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sggev3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
spbrfs_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  const __LAPACK_int * _Nonnull nrhs,
  const float * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  const float * _Nullable afb,
  const __LAPACK_int * _Nonnull ldafb,
  const float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  float * _Nullable ferr,
  float * _Nullable berr,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(spbrfs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssbgvd_(
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ka,
  const __LAPACK_int * _Nonnull kb,
  float * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  float * _Nullable bb,
  const __LAPACK_int * _Nonnull ldbb,
  float * _Nullable w,
  float * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssbgvd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sspsvx_(
  const char * _Nonnull fact,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const float * _Nullable ap,
  float * _Nullable afp,
  __LAPACK_int * _Nullable ipiv,
  const float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  float * _Nonnull rcond,
  float * _Nullable ferr,
  float * _Nullable berr,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sspsvx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssyrfs_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  const __LAPACK_int * _Nullable ipiv,
  const float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  float * _Nullable ferr,
  float * _Nullable berr,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssyrfs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
stbrfs_(
  const char * _Nonnull uplo,
  const char * _Nonnull trans,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  const __LAPACK_int * _Nonnull nrhs,
  const float * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  const float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  const float * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  float * _Nullable ferr,
  float * _Nullable berr,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(stbrfs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ztrevc3_(
  const char * _Nonnull side,
  const char * _Nonnull howmny,
  const __LAPACK_bool * _Nullable select,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_double_complex * _Nullable vl,
  const __LAPACK_int * _Nonnull ldvl,
  __LAPACK_double_complex * _Nullable vr,
  const __LAPACK_int * _Nonnull ldvr,
  const __LAPACK_int * _Nonnull mm,
  __LAPACK_int * _Nonnull m,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  double * _Nullable rwork,
  const __LAPACK_int * _Nonnull lrwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ztrevc3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgegs_(
  const char * _Nonnull jobvsl,
  const char * _Nonnull jobvsr,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nullable alpha,
  __LAPACK_double_complex * _Nullable beta,
  __LAPACK_double_complex * _Nullable vsl,
  const __LAPACK_int * _Nonnull ldvsl,
  __LAPACK_double_complex * _Nullable vsr,
  const __LAPACK_int * _Nonnull ldvsr,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgegs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ztgevc_(
  const char * _Nonnull side,
  const char * _Nonnull howmny,
  const __LAPACK_bool * _Nullable select,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable s,
  const __LAPACK_int * _Nonnull lds,
  const __LAPACK_double_complex * _Nullable p,
  const __LAPACK_int * _Nonnull ldp,
  __LAPACK_double_complex * _Nullable vl,
  const __LAPACK_int * _Nonnull ldvl,
  __LAPACK_double_complex * _Nullable vr,
  const __LAPACK_int * _Nonnull ldvr,
  const __LAPACK_int * _Nonnull mm,
  __LAPACK_int * _Nonnull m,
  __LAPACK_double_complex * _Nonnull work,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ztgevc)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgegv_(
  const char * _Nonnull jobvl,
  const char * _Nonnull jobvr,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nullable alpha,
  __LAPACK_double_complex * _Nullable beta,
  __LAPACK_double_complex * _Nullable vl,
  const __LAPACK_int * _Nonnull ldvl,
  __LAPACK_double_complex * _Nullable vr,
  const __LAPACK_int * _Nonnull ldvr,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgegv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgsvj0_(
  const char * _Nonnull jobv,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable d,
  double * _Nullable sva,
  const __LAPACK_int * _Nonnull mv,
  __LAPACK_double_complex * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  const double * _Nonnull eps,
  const double * _Nonnull sfmin,
  const double * _Nonnull tol,
  const __LAPACK_int * _Nonnull nsweep,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgsvj0)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ztpmlqt_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull l,
  const __LAPACK_int * _Nonnull mb,
  const __LAPACK_double_complex * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  const __LAPACK_double_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ztpmlqt)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ztpmqrt_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull l,
  const __LAPACK_int * _Nonnull nb,
  const __LAPACK_double_complex * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  const __LAPACK_double_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ztpmqrt)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgerfs_(
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  const __LAPACK_int * _Nullable ipiv,
  const __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  double * _Nullable ferr,
  double * _Nullable berr,
  __LAPACK_double_complex * _Nonnull work,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgerfs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zggev_(
  const char * _Nonnull jobvl,
  const char * _Nonnull jobvr,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nullable alpha,
  __LAPACK_double_complex * _Nullable beta,
  __LAPACK_double_complex * _Nullable vl,
  const __LAPACK_int * _Nonnull ldvl,
  __LAPACK_double_complex * _Nullable vr,
  const __LAPACK_int * _Nonnull ldvr,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zggev)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zggev3_(
  const char * _Nonnull jobvl,
  const char * _Nonnull jobvr,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nullable alpha,
  __LAPACK_double_complex * _Nullable beta,
  __LAPACK_double_complex * _Nullable vl,
  const __LAPACK_int * _Nonnull ldvl,
  __LAPACK_double_complex * _Nullable vr,
  const __LAPACK_int * _Nonnull ldvr,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zggev3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zherfs_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  const __LAPACK_int * _Nullable ipiv,
  const __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  double * _Nullable ferr,
  double * _Nullable berr,
  __LAPACK_double_complex * _Nonnull work,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zherfs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhpsvx_(
  const char * _Nonnull fact,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_double_complex * _Nullable ap,
  __LAPACK_double_complex * _Nullable afp,
  __LAPACK_int * _Nullable ipiv,
  const __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  double * _Nonnull rcond,
  double * _Nullable ferr,
  double * _Nullable berr,
  __LAPACK_double_complex * _Nonnull work,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhpsvx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zpbrfs_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_double_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  const __LAPACK_double_complex * _Nullable afb,
  const __LAPACK_int * _Nonnull ldafb,
  const __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  double * _Nullable ferr,
  double * _Nullable berr,
  __LAPACK_double_complex * _Nonnull work,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zpbrfs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zptsvx_(
  const char * _Nonnull fact,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const double * _Nullable d,
  const __LAPACK_double_complex * _Nullable e,
  double * _Nullable df,
  __LAPACK_double_complex * _Nullable ef,
  const __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  double * _Nonnull rcond,
  double * _Nullable ferr,
  double * _Nullable berr,
  __LAPACK_double_complex * _Nonnull work,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zptsvx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zspsvx_(
  const char * _Nonnull fact,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_double_complex * _Nullable ap,
  __LAPACK_double_complex * _Nullable afp,
  __LAPACK_int * _Nullable ipiv,
  const __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  double * _Nonnull rcond,
  double * _Nullable ferr,
  double * _Nullable berr,
  __LAPACK_double_complex * _Nonnull work,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zspsvx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zsyrfs_(
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  const __LAPACK_int * _Nullable ipiv,
  const __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  double * _Nullable ferr,
  double * _Nullable berr,
  __LAPACK_double_complex * _Nonnull work,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zsyrfs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ztbrfs_(
  const char * _Nonnull uplo,
  const char * _Nonnull trans,
  const char * _Nonnull diag,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_double_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  const __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  const __LAPACK_double_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  double * _Nullable ferr,
  double * _Nullable berr,
  __LAPACK_double_complex * _Nonnull work,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ztbrfs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgeesx_(
  const char * _Nonnull jobvs,
  const char * _Nonnull sort,
  __LAPACK_cgees_func_ptr select,
  const char * _Nonnull sense,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nonnull sdim,
  __LAPACK_float_complex * _Nullable w,
  __LAPACK_float_complex * _Nullable vs,
  const __LAPACK_int * _Nonnull ldvs,
  float * _Nonnull rconde,
  float * _Nonnull rcondv,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  float * _Nullable rwork,
  __LAPACK_bool * _Nullable bwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgeesx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ctrsna_(
  const char * _Nonnull job,
  const char * _Nonnull howmny,
  const __LAPACK_bool * _Nullable select,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  const __LAPACK_float_complex * _Nullable vl,
  const __LAPACK_int * _Nonnull ldvl,
  const __LAPACK_float_complex * _Nullable vr,
  const __LAPACK_int * _Nonnull ldvr,
  float * _Nullable s,
  float * _Nullable sep,
  const __LAPACK_int * _Nonnull mm,
  __LAPACK_int * _Nonnull m,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull ldwork,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ctrsna)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgsvj1_(
  const char * _Nonnull jobv,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull n1,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable d,
  float * _Nullable sva,
  const __LAPACK_int * _Nonnull mv,
  __LAPACK_float_complex * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  const float * _Nonnull eps,
  const float * _Nonnull sfmin,
  const float * _Nonnull tol,
  const __LAPACK_int * _Nonnull nsweep,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgsvj1)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ctprfb_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const char * _Nonnull direct,
  const char * _Nonnull storev,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull l,
  const __LAPACK_float_complex * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  const __LAPACK_float_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull ldwork)
__LAPACK_ALIAS(ctprfb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sstebz_(
  const char * _Nonnull range,
  const char * _Nonnull order,
  const __LAPACK_int * _Nonnull n,
  const float * _Nonnull vl,
  const float * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  const float * _Nonnull abstol,
  const float * _Nullable d,
  const float * _Nullable e,
  __LAPACK_int * _Nonnull m,
  __LAPACK_int * _Nonnull nsplit,
  float * _Nullable w,
  __LAPACK_int * _Nullable iblock,
  __LAPACK_int * _Nullable isplit,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sstebz)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sstevx_(
  const char * _Nonnull jobz,
  const char * _Nonnull range,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable d,
  float * _Nullable e,
  const float * _Nonnull vl,
  const float * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  const float * _Nonnull abstol,
  __LAPACK_int * _Nonnull m,
  float * _Nullable w,
  float * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nullable ifail,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sstevx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slarrf_(
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable d,
  const float * _Nullable l,
  const float * _Nullable ld,
  const __LAPACK_int * _Nonnull clstrt,
  const __LAPACK_int * _Nonnull clend,
  const float * _Nullable w,
  const float * _Nullable wgap,
  const float * _Nullable werr,
  const float * _Nonnull spdiam,
  const float * _Nonnull clgapl,
  const float * _Nonnull clgapr,
  const float * _Nonnull pivmin,
  float * _Nonnull sigma,
  float * _Nullable dplus,
  float * _Nullable lplus,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slarrf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cppsvx_(
  const char * _Nonnull fact,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_float_complex * _Nullable ap,
  __LAPACK_float_complex * _Nullable afp,
  char * _Nonnull equed,
  float * _Nullable s,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  float * _Nonnull rcond,
  float * _Nullable ferr,
  float * _Nullable berr,
  __LAPACK_float_complex * _Nonnull work,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cppsvx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dstebz_(
  const char * _Nonnull range,
  const char * _Nonnull order,
  const __LAPACK_int * _Nonnull n,
  const double * _Nonnull vl,
  const double * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  const double * _Nonnull abstol,
  const double * _Nullable d,
  const double * _Nullable e,
  __LAPACK_int * _Nonnull m,
  __LAPACK_int * _Nonnull nsplit,
  double * _Nullable w,
  __LAPACK_int * _Nullable iblock,
  __LAPACK_int * _Nullable isplit,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dstebz)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dstevx_(
  const char * _Nonnull jobz,
  const char * _Nonnull range,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable d,
  double * _Nullable e,
  const double * _Nonnull vl,
  const double * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  const double * _Nonnull abstol,
  __LAPACK_int * _Nonnull m,
  double * _Nullable w,
  double * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nullable ifail,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dstevx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgbbrd_(
  const char * _Nonnull vect,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ncc,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  double * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  double * _Nullable d,
  double * _Nullable e,
  double * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  double * _Nullable pt,
  const __LAPACK_int * _Nonnull ldpt,
  double * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgbbrd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlaln2_(
  const __LAPACK_bool * _Nonnull ltrans,
  const __LAPACK_int * _Nonnull na,
  const __LAPACK_int * _Nonnull nw,
  const double * _Nonnull smin,
  const double * _Nonnull ca,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nonnull d1,
  const double * _Nonnull d2,
  const double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  const double * _Nonnull wr,
  const double * _Nonnull wi,
  double * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  double * _Nonnull scale,
  double * _Nonnull xnorm,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlaln2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dtrsen_(
  const char * _Nonnull job,
  const char * _Nonnull compq,
  const __LAPACK_bool * _Nullable select,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  double * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  double * _Nullable wr,
  double * _Nullable wi,
  __LAPACK_int * _Nonnull m,
  double * _Nonnull s,
  double * _Nonnull sep,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dtrsen)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dtrsna_(
  const char * _Nonnull job,
  const char * _Nonnull howmny,
  const __LAPACK_bool * _Nullable select,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  const double * _Nullable vl,
  const __LAPACK_int * _Nonnull ldvl,
  const double * _Nullable vr,
  const __LAPACK_int * _Nonnull ldvr,
  double * _Nullable s,
  double * _Nullable sep,
  const __LAPACK_int * _Nonnull mm,
  __LAPACK_int * _Nonnull m,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull ldwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dtrsna)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgsvj1_(
  const char * _Nonnull jobv,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull n1,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable d,
  double * _Nullable sva,
  const __LAPACK_int * _Nonnull mv,
  double * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  const double * _Nonnull eps,
  const double * _Nonnull sfmin,
  const double * _Nonnull tol,
  const __LAPACK_int * _Nonnull nsweep,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgsvj1)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dtprfb_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const char * _Nonnull direct,
  const char * _Nonnull storev,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull l,
  const double * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  const double * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull ldwork)
__LAPACK_ALIAS(dtprfb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlarrf_(
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable d,
  const double * _Nullable l,
  const double * _Nullable ld,
  const __LAPACK_int * _Nonnull clstrt,
  const __LAPACK_int * _Nonnull clend,
  const double * _Nullable w,
  const double * _Nullable wgap,
  const double * _Nullable werr,
  const double * _Nonnull spdiam,
  const double * _Nonnull clgapl,
  const double * _Nonnull clgapr,
  const double * _Nonnull pivmin,
  double * _Nonnull sigma,
  double * _Nullable dplus,
  double * _Nullable lplus,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlarrf)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dppsvx_(
  const char * _Nonnull fact,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  double * _Nullable ap,
  double * _Nullable afp,
  char * _Nonnull equed,
  double * _Nullable s,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  double * _Nonnull rcond,
  double * _Nullable ferr,
  double * _Nullable berr,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dppsvx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dspevx_(
  const char * _Nonnull jobz,
  const char * _Nonnull range,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable ap,
  const double * _Nonnull vl,
  const double * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  const double * _Nonnull abstol,
  __LAPACK_int * _Nonnull m,
  double * _Nullable w,
  double * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nullable ifail,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dspevx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgbbrd_(
  const char * _Nonnull vect,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ncc,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  float * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  float * _Nullable d,
  float * _Nullable e,
  float * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  float * _Nullable pt,
  const __LAPACK_int * _Nonnull ldpt,
  float * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgbbrd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slaln2_(
  const __LAPACK_bool * _Nonnull ltrans,
  const __LAPACK_int * _Nonnull na,
  const __LAPACK_int * _Nonnull nw,
  const float * _Nonnull smin,
  const float * _Nonnull ca,
  const float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nonnull d1,
  const float * _Nonnull d2,
  const float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  const float * _Nonnull wr,
  const float * _Nonnull wi,
  float * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  float * _Nonnull scale,
  float * _Nonnull xnorm,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slaln2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
strsen_(
  const char * _Nonnull job,
  const char * _Nonnull compq,
  const __LAPACK_bool * _Nullable select,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  float * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  float * _Nullable wr,
  float * _Nullable wi,
  __LAPACK_int * _Nonnull m,
  float * _Nonnull s,
  float * _Nonnull sep,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(strsen)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
strsna_(
  const char * _Nonnull job,
  const char * _Nonnull howmny,
  const __LAPACK_bool * _Nullable select,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  const float * _Nullable vl,
  const __LAPACK_int * _Nonnull ldvl,
  const float * _Nullable vr,
  const __LAPACK_int * _Nonnull ldvr,
  float * _Nullable s,
  float * _Nullable sep,
  const __LAPACK_int * _Nonnull mm,
  __LAPACK_int * _Nonnull m,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull ldwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(strsna)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgsvj1_(
  const char * _Nonnull jobv,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull n1,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable d,
  float * _Nullable sva,
  const __LAPACK_int * _Nonnull mv,
  float * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  const float * _Nonnull eps,
  const float * _Nonnull sfmin,
  const float * _Nonnull tol,
  const __LAPACK_int * _Nonnull nsweep,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgsvj1)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
stprfb_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const char * _Nonnull direct,
  const char * _Nonnull storev,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull l,
  const float * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  const float * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull ldwork)
__LAPACK_ALIAS(stprfb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sppsvx_(
  const char * _Nonnull fact,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  float * _Nullable ap,
  float * _Nullable afp,
  char * _Nonnull equed,
  float * _Nullable s,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  float * _Nonnull rcond,
  float * _Nullable ferr,
  float * _Nullable berr,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sppsvx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sspevx_(
  const char * _Nonnull jobz,
  const char * _Nonnull range,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable ap,
  const float * _Nonnull vl,
  const float * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  const float * _Nonnull abstol,
  __LAPACK_int * _Nonnull m,
  float * _Nullable w,
  float * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nullable ifail,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sspevx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgeesx_(
  const char * _Nonnull jobvs,
  const char * _Nonnull sort,
  __LAPACK_zgees_func_ptr select,
  const char * _Nonnull sense,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nonnull sdim,
  __LAPACK_double_complex * _Nullable w,
  __LAPACK_double_complex * _Nullable vs,
  const __LAPACK_int * _Nonnull ldvs,
  double * _Nonnull rconde,
  double * _Nonnull rcondv,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  double * _Nullable rwork,
  __LAPACK_bool * _Nullable bwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgeesx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ztrsna_(
  const char * _Nonnull job,
  const char * _Nonnull howmny,
  const __LAPACK_bool * _Nullable select,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  const __LAPACK_double_complex * _Nullable vl,
  const __LAPACK_int * _Nonnull ldvl,
  const __LAPACK_double_complex * _Nullable vr,
  const __LAPACK_int * _Nonnull ldvr,
  double * _Nullable s,
  double * _Nullable sep,
  const __LAPACK_int * _Nonnull mm,
  __LAPACK_int * _Nonnull m,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull ldwork,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ztrsna)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgsvj1_(
  const char * _Nonnull jobv,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull n1,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable d,
  double * _Nullable sva,
  const __LAPACK_int * _Nonnull mv,
  __LAPACK_double_complex * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  const double * _Nonnull eps,
  const double * _Nonnull sfmin,
  const double * _Nonnull tol,
  const __LAPACK_int * _Nonnull nsweep,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgsvj1)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ztprfb_(
  const char * _Nonnull side,
  const char * _Nonnull trans,
  const char * _Nonnull direct,
  const char * _Nonnull storev,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull l,
  const __LAPACK_double_complex * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  const __LAPACK_double_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull ldwork)
__LAPACK_ALIAS(ztprfb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zppsvx_(
  const char * _Nonnull fact,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_double_complex * _Nullable ap,
  __LAPACK_double_complex * _Nullable afp,
  char * _Nonnull equed,
  double * _Nullable s,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  double * _Nonnull rcond,
  double * _Nullable ferr,
  double * _Nullable berr,
  __LAPACK_double_complex * _Nonnull work,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zppsvx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgbbrd_(
  const char * _Nonnull vect,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ncc,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  __LAPACK_float_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  float * _Nullable d,
  float * _Nullable e,
  __LAPACK_float_complex * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  __LAPACK_float_complex * _Nullable pt,
  const __LAPACK_int * _Nonnull ldpt,
  __LAPACK_float_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  __LAPACK_float_complex * _Nonnull work,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgbbrd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgbrfs_(
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_float_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  const __LAPACK_float_complex * _Nullable afb,
  const __LAPACK_int * _Nonnull ldafb,
  const __LAPACK_int * _Nullable ipiv,
  const __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  float * _Nullable ferr,
  float * _Nullable berr,
  __LAPACK_float_complex * _Nonnull work,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgbrfs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chbgvd_(
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ka,
  const __LAPACK_int * _Nonnull kb,
  __LAPACK_float_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  __LAPACK_float_complex * _Nullable bb,
  const __LAPACK_int * _Nonnull ldbb,
  float * _Nullable w,
  __LAPACK_float_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  float * _Nullable rwork,
  const __LAPACK_int * _Nonnull lrwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chbgvd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chpevx_(
  const char * _Nonnull jobz,
  const char * _Nonnull range,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable ap,
  const float * _Nonnull vl,
  const float * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  const float * _Nonnull abstol,
  __LAPACK_int * _Nonnull m,
  float * _Nullable w,
  __LAPACK_float_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_float_complex * _Nonnull work,
  float * _Nullable rwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nullable ifail,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chpevx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chsein_(
  const char * _Nonnull side,
  const char * _Nonnull eigsrc,
  const char * _Nonnull initv,
  const __LAPACK_bool * _Nullable select,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable h,
  const __LAPACK_int * _Nonnull ldh,
  __LAPACK_float_complex * _Nullable w,
  __LAPACK_float_complex * _Nullable vl,
  const __LAPACK_int * _Nonnull ldvl,
  __LAPACK_float_complex * _Nullable vr,
  const __LAPACK_int * _Nonnull ldvr,
  const __LAPACK_int * _Nonnull mm,
  __LAPACK_int * _Nonnull m,
  __LAPACK_float_complex * _Nonnull work,
  float * _Nullable rwork,
  __LAPACK_int * _Nullable ifaill,
  __LAPACK_int * _Nullable ifailr,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chsein)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgbrfs_(
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  const __LAPACK_int * _Nonnull nrhs,
  const double * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  const double * _Nullable afb,
  const __LAPACK_int * _Nonnull ldafb,
  const __LAPACK_int * _Nullable ipiv,
  const double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  double * _Nullable ferr,
  double * _Nullable berr,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgbrfs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgejsv_(
  const char * _Nonnull joba,
  const char * _Nonnull jobu,
  const char * _Nonnull jobv,
  const char * _Nonnull jobr,
  const char * _Nonnull jobt,
  const char * _Nonnull jobp,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable sva,
  double * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  double * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgejsv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dhsein_(
  const char * _Nonnull side,
  const char * _Nonnull eigsrc,
  const char * _Nonnull initv,
  __LAPACK_bool * _Nullable select,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable h,
  const __LAPACK_int * _Nonnull ldh,
  double * _Nullable wr,
  const double * _Nullable wi,
  double * _Nullable vl,
  const __LAPACK_int * _Nonnull ldvl,
  double * _Nullable vr,
  const __LAPACK_int * _Nonnull ldvr,
  const __LAPACK_int * _Nonnull mm,
  __LAPACK_int * _Nonnull m,
  double * _Nonnull work,
  __LAPACK_int * _Nullable ifaill,
  __LAPACK_int * _Nullable ifailr,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dhsein)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgbrfs_(
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  const __LAPACK_int * _Nonnull nrhs,
  const float * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  const float * _Nullable afb,
  const __LAPACK_int * _Nonnull ldafb,
  const __LAPACK_int * _Nullable ipiv,
  const float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  float * _Nullable ferr,
  float * _Nullable berr,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgbrfs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgejsv_(
  const char * _Nonnull joba,
  const char * _Nonnull jobu,
  const char * _Nonnull jobv,
  const char * _Nonnull jobr,
  const char * _Nonnull jobt,
  const char * _Nonnull jobp,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable sva,
  float * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  float * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgejsv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
shsein_(
  const char * _Nonnull side,
  const char * _Nonnull eigsrc,
  const char * _Nonnull initv,
  __LAPACK_bool * _Nullable select,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable h,
  const __LAPACK_int * _Nonnull ldh,
  float * _Nullable wr,
  const float * _Nullable wi,
  float * _Nullable vl,
  const __LAPACK_int * _Nonnull ldvl,
  float * _Nullable vr,
  const __LAPACK_int * _Nonnull ldvr,
  const __LAPACK_int * _Nonnull mm,
  __LAPACK_int * _Nonnull m,
  float * _Nonnull work,
  __LAPACK_int * _Nullable ifaill,
  __LAPACK_int * _Nullable ifailr,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(shsein)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgbbrd_(
  const char * _Nonnull vect,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ncc,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  __LAPACK_double_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  double * _Nullable d,
  double * _Nullable e,
  __LAPACK_double_complex * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  __LAPACK_double_complex * _Nullable pt,
  const __LAPACK_int * _Nonnull ldpt,
  __LAPACK_double_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  __LAPACK_double_complex * _Nonnull work,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgbbrd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgbrfs_(
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_double_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  const __LAPACK_double_complex * _Nullable afb,
  const __LAPACK_int * _Nonnull ldafb,
  const __LAPACK_int * _Nullable ipiv,
  const __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  double * _Nullable ferr,
  double * _Nullable berr,
  __LAPACK_double_complex * _Nonnull work,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgbrfs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhbgvd_(
  const char * _Nonnull jobz,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ka,
  const __LAPACK_int * _Nonnull kb,
  __LAPACK_double_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  __LAPACK_double_complex * _Nullable bb,
  const __LAPACK_int * _Nonnull ldbb,
  double * _Nullable w,
  __LAPACK_double_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  double * _Nullable rwork,
  const __LAPACK_int * _Nonnull lrwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhbgvd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhpevx_(
  const char * _Nonnull jobz,
  const char * _Nonnull range,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable ap,
  const double * _Nonnull vl,
  const double * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  const double * _Nonnull abstol,
  __LAPACK_int * _Nonnull m,
  double * _Nullable w,
  __LAPACK_double_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_double_complex * _Nonnull work,
  double * _Nullable rwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nullable ifail,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhpevx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhsein_(
  const char * _Nonnull side,
  const char * _Nonnull eigsrc,
  const char * _Nonnull initv,
  const __LAPACK_bool * _Nullable select,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable h,
  const __LAPACK_int * _Nonnull ldh,
  __LAPACK_double_complex * _Nullable w,
  __LAPACK_double_complex * _Nullable vl,
  const __LAPACK_int * _Nonnull ldvl,
  __LAPACK_double_complex * _Nullable vr,
  const __LAPACK_int * _Nonnull ldvr,
  const __LAPACK_int * _Nonnull mm,
  __LAPACK_int * _Nonnull m,
  __LAPACK_double_complex * _Nonnull work,
  double * _Nullable rwork,
  __LAPACK_int * _Nullable ifaill,
  __LAPACK_int * _Nullable ifailr,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhsein)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slasq3_(
  const __LAPACK_int * _Nonnull i0,
  __LAPACK_int * _Nonnull n0,
  float * _Nullable z,
  __LAPACK_int * _Nonnull pp,
  float * _Nonnull dmin,
  float * _Nonnull sigma,
  float * _Nonnull desig,
  float * _Nonnull qmax,
  __LAPACK_int * _Nonnull nfail,
  __LAPACK_int * _Nonnull iter,
  __LAPACK_int * _Nonnull ndiv,
  const __LAPACK_bool * _Nonnull ieee,
  __LAPACK_int * _Nonnull ttype,
  float * _Nonnull dmin1,
  float * _Nonnull dmin2,
  float * _Nonnull dn,
  float * _Nonnull dn1,
  float * _Nonnull dn2,
  float * _Nonnull g,
  float * _Nonnull tau)
__LAPACK_ALIAS(slasq3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chgeqz_(
  const char * _Nonnull job,
  const char * _Nonnull compq,
  const char * _Nonnull compz,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ilo,
  const __LAPACK_int * _Nonnull ihi,
  __LAPACK_float_complex * _Nullable h,
  const __LAPACK_int * _Nonnull ldh,
  __LAPACK_float_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_float_complex * _Nullable alpha,
  __LAPACK_float_complex * _Nullable beta,
  __LAPACK_float_complex * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  __LAPACK_float_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chgeqz)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slasd3_(
  const __LAPACK_int * _Nonnull nl,
  const __LAPACK_int * _Nonnull nr,
  const __LAPACK_int * _Nonnull sqre,
  const __LAPACK_int * _Nonnull k,
  float * _Nullable d,
  float * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  float * _Nullable dsigma,
  float * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  const float * _Nullable u2,
  const __LAPACK_int * _Nonnull ldu2,
  float * _Nullable vt,
  const __LAPACK_int * _Nonnull ldvt,
  float * _Nullable vt2,
  const __LAPACK_int * _Nonnull ldvt2,
  const __LAPACK_int * _Nullable idxc,
  const __LAPACK_int * _Nullable ctot,
  float * _Nullable z,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slasd3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slaebz_(
  const __LAPACK_int * _Nonnull ijob,
  const __LAPACK_int * _Nonnull nitmax,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull mmax,
  const __LAPACK_int * _Nonnull minp,
  const __LAPACK_int * _Nonnull nbmin,
  const float * _Nonnull abstol,
  const float * _Nonnull reltol,
  const float * _Nonnull pivmin,
  const float * _Nullable d,
  const float * _Nullable e,
  const float * _Nullable e2,
  __LAPACK_int * _Nullable nval,
  float * _Nullable ab,
  float * _Nullable c,
  __LAPACK_int * _Nonnull mout,
  __LAPACK_int * _Nullable nab,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slaebz)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ctgsy2_(
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull ijob,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  const __LAPACK_float_complex * _Nullable d,
  const __LAPACK_int * _Nonnull ldd,
  const __LAPACK_float_complex * _Nullable e,
  const __LAPACK_int * _Nonnull lde,
  __LAPACK_float_complex * _Nullable f,
  const __LAPACK_int * _Nonnull ldf,
  float * _Nonnull scale,
  float * _Nonnull rdsum,
  float * _Nonnull rdscal,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ctgsy2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ctgsna_(
  const char * _Nonnull job,
  const char * _Nonnull howmny,
  const __LAPACK_bool * _Nullable select,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  const __LAPACK_float_complex * _Nullable vl,
  const __LAPACK_int * _Nonnull ldvl,
  const __LAPACK_float_complex * _Nullable vr,
  const __LAPACK_int * _Nonnull ldvr,
  float * _Nullable s,
  float * _Nullable dif,
  const __LAPACK_int * _Nonnull mm,
  __LAPACK_int * _Nonnull m,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ctgsna)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgtrfs_(
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_float_complex * _Nullable dl,
  const __LAPACK_float_complex * _Nullable d,
  const __LAPACK_float_complex * _Nullable du,
  const __LAPACK_float_complex * _Nullable dlf,
  const __LAPACK_float_complex * _Nullable df,
  const __LAPACK_float_complex * _Nullable duf,
  const __LAPACK_float_complex * _Nullable du2,
  const __LAPACK_int * _Nullable ipiv,
  const __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  float * _Nullable ferr,
  float * _Nullable berr,
  __LAPACK_float_complex * _Nonnull work,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgtrfs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chesvx_(
  const char * _Nonnull fact,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  __LAPACK_int * _Nullable ipiv,
  const __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  float * _Nonnull rcond,
  float * _Nullable ferr,
  float * _Nullable berr,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chesvx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cposvx_(
  const char * _Nonnull fact,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  char * _Nonnull equed,
  float * _Nullable s,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  float * _Nonnull rcond,
  float * _Nullable ferr,
  float * _Nullable berr,
  __LAPACK_float_complex * _Nonnull work,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cposvx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cstegr_(
  const char * _Nonnull jobz,
  const char * _Nonnull range,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable d,
  float * _Nullable e,
  const float * _Nonnull vl,
  const float * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  const float * _Nonnull abstol,
  __LAPACK_int * _Nonnull m,
  float * _Nullable w,
  __LAPACK_float_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_int * _Nullable isuppz,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cstegr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
csysvx_(
  const char * _Nonnull fact,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  __LAPACK_int * _Nullable ipiv,
  const __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  float * _Nonnull rcond,
  float * _Nullable ferr,
  float * _Nullable berr,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(csysvx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlasd3_(
  const __LAPACK_int * _Nonnull nl,
  const __LAPACK_int * _Nonnull nr,
  const __LAPACK_int * _Nonnull sqre,
  const __LAPACK_int * _Nonnull k,
  double * _Nullable d,
  double * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  double * _Nullable dsigma,
  double * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  const double * _Nullable u2,
  const __LAPACK_int * _Nonnull ldu2,
  double * _Nullable vt,
  const __LAPACK_int * _Nonnull ldvt,
  double * _Nullable vt2,
  const __LAPACK_int * _Nonnull ldvt2,
  const __LAPACK_int * _Nullable idxc,
  const __LAPACK_int * _Nullable ctot,
  double * _Nullable z,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlasd3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlasq3_(
  const __LAPACK_int * _Nonnull i0,
  __LAPACK_int * _Nonnull n0,
  double * _Nullable z,
  __LAPACK_int * _Nonnull pp,
  double * _Nonnull dmin,
  double * _Nonnull sigma,
  double * _Nonnull desig,
  double * _Nonnull qmax,
  __LAPACK_int * _Nonnull nfail,
  __LAPACK_int * _Nonnull iter,
  __LAPACK_int * _Nonnull ndiv,
  const __LAPACK_bool * _Nonnull ieee,
  __LAPACK_int * _Nonnull ttype,
  double * _Nonnull dmin1,
  double * _Nonnull dmin2,
  double * _Nonnull dn,
  double * _Nonnull dn1,
  double * _Nonnull dn2,
  double * _Nonnull g,
  double * _Nonnull tau)
__LAPACK_ALIAS(dlasq3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlaebz_(
  const __LAPACK_int * _Nonnull ijob,
  const __LAPACK_int * _Nonnull nitmax,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull mmax,
  const __LAPACK_int * _Nonnull minp,
  const __LAPACK_int * _Nonnull nbmin,
  const double * _Nonnull abstol,
  const double * _Nonnull reltol,
  const double * _Nonnull pivmin,
  const double * _Nullable d,
  const double * _Nullable e,
  const double * _Nullable e2,
  __LAPACK_int * _Nullable nval,
  double * _Nullable ab,
  double * _Nullable c,
  __LAPACK_int * _Nonnull mout,
  __LAPACK_int * _Nullable nab,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlaebz)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgeesx_(
  const char * _Nonnull jobvs,
  const char * _Nonnull sort,
  __LAPACK_dgees_func_ptr select,
  const char * _Nonnull sense,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nonnull sdim,
  double * _Nullable wr,
  double * _Nullable wi,
  double * _Nullable vs,
  const __LAPACK_int * _Nonnull ldvs,
  double * _Nonnull rconde,
  double * _Nonnull rcondv,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_bool * _Nullable bwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgeesx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dhgeqz_(
  const char * _Nonnull job,
  const char * _Nonnull compq,
  const char * _Nonnull compz,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ilo,
  const __LAPACK_int * _Nonnull ihi,
  double * _Nullable h,
  const __LAPACK_int * _Nonnull ldh,
  double * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  double * _Nullable alphar,
  double * _Nullable alphai,
  double * _Nullable beta,
  double * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  double * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dhgeqz)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dtgsna_(
  const char * _Nonnull job,
  const char * _Nonnull howmny,
  const __LAPACK_bool * _Nullable select,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  const double * _Nullable vl,
  const __LAPACK_int * _Nonnull ldvl,
  const double * _Nullable vr,
  const __LAPACK_int * _Nonnull ldvr,
  double * _Nullable s,
  double * _Nullable dif,
  const __LAPACK_int * _Nonnull mm,
  __LAPACK_int * _Nonnull m,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dtgsna)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgtrfs_(
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const double * _Nullable dl,
  const double * _Nullable d,
  const double * _Nullable du,
  const double * _Nullable dlf,
  const double * _Nullable df,
  const double * _Nullable duf,
  const double * _Nullable du2,
  const __LAPACK_int * _Nullable ipiv,
  const double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  double * _Nullable ferr,
  double * _Nullable berr,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgtrfs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dposvx_(
  const char * _Nonnull fact,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  char * _Nonnull equed,
  double * _Nullable s,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  double * _Nonnull rcond,
  double * _Nullable ferr,
  double * _Nullable berr,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dposvx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dspgvx_(
  const __LAPACK_int * _Nonnull itype,
  const char * _Nonnull jobz,
  const char * _Nonnull range,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable ap,
  double * _Nullable bp,
  const double * _Nonnull vl,
  const double * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  const double * _Nonnull abstol,
  __LAPACK_int * _Nonnull m,
  double * _Nullable w,
  double * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nullable ifail,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dspgvx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dstegr_(
  const char * _Nonnull jobz,
  const char * _Nonnull range,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable d,
  double * _Nullable e,
  const double * _Nonnull vl,
  const double * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  const double * _Nonnull abstol,
  __LAPACK_int * _Nonnull m,
  double * _Nullable w,
  double * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_int * _Nullable isuppz,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dstegr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dstevr_(
  const char * _Nonnull jobz,
  const char * _Nonnull range,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable d,
  double * _Nullable e,
  const double * _Nonnull vl,
  const double * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  const double * _Nonnull abstol,
  __LAPACK_int * _Nonnull m,
  double * _Nullable w,
  double * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_int * _Nullable isuppz,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dstevr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsyevx_(
  const char * _Nonnull jobz,
  const char * _Nonnull range,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nonnull vl,
  const double * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  const double * _Nonnull abstol,
  __LAPACK_int * _Nonnull m,
  double * _Nullable w,
  double * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nullable ifail,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsyevx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsyevx_2stage_(
  const char * _Nonnull jobz,
  const char * _Nonnull range,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nonnull vl,
  const double * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  const double * _Nonnull abstol,
  __LAPACK_int * _Nonnull m,
  double * _Nullable w,
  double * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nullable ifail,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsyevx_2stage)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsysvx_(
  const char * _Nonnull fact,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  __LAPACK_int * _Nullable ipiv,
  const double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  double * _Nonnull rcond,
  double * _Nullable ferr,
  double * _Nullable berr,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsysvx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgeesx_(
  const char * _Nonnull jobvs,
  const char * _Nonnull sort,
  __LAPACK_sgees_func_ptr select,
  const char * _Nonnull sense,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_int * _Nonnull sdim,
  float * _Nullable wr,
  float * _Nullable wi,
  float * _Nullable vs,
  const __LAPACK_int * _Nonnull ldvs,
  float * _Nonnull rconde,
  float * _Nonnull rcondv,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_bool * _Nullable bwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgeesx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
shgeqz_(
  const char * _Nonnull job,
  const char * _Nonnull compq,
  const char * _Nonnull compz,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ilo,
  const __LAPACK_int * _Nonnull ihi,
  float * _Nullable h,
  const __LAPACK_int * _Nonnull ldh,
  float * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  float * _Nullable alphar,
  float * _Nullable alphai,
  float * _Nullable beta,
  float * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  float * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(shgeqz)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
stgsna_(
  const char * _Nonnull job,
  const char * _Nonnull howmny,
  const __LAPACK_bool * _Nullable select,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  const float * _Nullable vl,
  const __LAPACK_int * _Nonnull ldvl,
  const float * _Nullable vr,
  const __LAPACK_int * _Nonnull ldvr,
  float * _Nullable s,
  float * _Nullable dif,
  const __LAPACK_int * _Nonnull mm,
  __LAPACK_int * _Nonnull m,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(stgsna)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgtrfs_(
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const float * _Nullable dl,
  const float * _Nullable d,
  const float * _Nullable du,
  const float * _Nullable dlf,
  const float * _Nullable df,
  const float * _Nullable duf,
  const float * _Nullable du2,
  const __LAPACK_int * _Nullable ipiv,
  const float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  float * _Nullable ferr,
  float * _Nullable berr,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgtrfs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sposvx_(
  const char * _Nonnull fact,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  char * _Nonnull equed,
  float * _Nullable s,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  float * _Nonnull rcond,
  float * _Nullable ferr,
  float * _Nullable berr,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sposvx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sspgvx_(
  const __LAPACK_int * _Nonnull itype,
  const char * _Nonnull jobz,
  const char * _Nonnull range,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable ap,
  float * _Nullable bp,
  const float * _Nonnull vl,
  const float * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  const float * _Nonnull abstol,
  __LAPACK_int * _Nonnull m,
  float * _Nullable w,
  float * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nullable ifail,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sspgvx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sstegr_(
  const char * _Nonnull jobz,
  const char * _Nonnull range,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable d,
  float * _Nullable e,
  const float * _Nonnull vl,
  const float * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  const float * _Nonnull abstol,
  __LAPACK_int * _Nonnull m,
  float * _Nullable w,
  float * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_int * _Nullable isuppz,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sstegr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sstevr_(
  const char * _Nonnull jobz,
  const char * _Nonnull range,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable d,
  float * _Nullable e,
  const float * _Nonnull vl,
  const float * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  const float * _Nonnull abstol,
  __LAPACK_int * _Nonnull m,
  float * _Nullable w,
  float * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_int * _Nullable isuppz,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sstevr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssyevx_(
  const char * _Nonnull jobz,
  const char * _Nonnull range,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nonnull vl,
  const float * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  const float * _Nonnull abstol,
  __LAPACK_int * _Nonnull m,
  float * _Nullable w,
  float * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nullable ifail,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssyevx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssyevx_2stage_(
  const char * _Nonnull jobz,
  const char * _Nonnull range,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nonnull vl,
  const float * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  const float * _Nonnull abstol,
  __LAPACK_int * _Nonnull m,
  float * _Nullable w,
  float * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nullable ifail,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssyevx_2stage)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssysvx_(
  const char * _Nonnull fact,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  __LAPACK_int * _Nullable ipiv,
  const float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  float * _Nonnull rcond,
  float * _Nullable ferr,
  float * _Nullable berr,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssysvx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhgeqz_(
  const char * _Nonnull job,
  const char * _Nonnull compq,
  const char * _Nonnull compz,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ilo,
  const __LAPACK_int * _Nonnull ihi,
  __LAPACK_double_complex * _Nullable h,
  const __LAPACK_int * _Nonnull ldh,
  __LAPACK_double_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  __LAPACK_double_complex * _Nullable alpha,
  __LAPACK_double_complex * _Nullable beta,
  __LAPACK_double_complex * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  __LAPACK_double_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhgeqz)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ztgsy2_(
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull ijob,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  const __LAPACK_double_complex * _Nullable d,
  const __LAPACK_int * _Nonnull ldd,
  const __LAPACK_double_complex * _Nullable e,
  const __LAPACK_int * _Nonnull lde,
  __LAPACK_double_complex * _Nullable f,
  const __LAPACK_int * _Nonnull ldf,
  double * _Nonnull scale,
  double * _Nonnull rdsum,
  double * _Nonnull rdscal,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ztgsy2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ztgsna_(
  const char * _Nonnull job,
  const char * _Nonnull howmny,
  const __LAPACK_bool * _Nullable select,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  const __LAPACK_double_complex * _Nullable vl,
  const __LAPACK_int * _Nonnull ldvl,
  const __LAPACK_double_complex * _Nullable vr,
  const __LAPACK_int * _Nonnull ldvr,
  double * _Nullable s,
  double * _Nullable dif,
  const __LAPACK_int * _Nonnull mm,
  __LAPACK_int * _Nonnull m,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ztgsna)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgtrfs_(
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_double_complex * _Nullable dl,
  const __LAPACK_double_complex * _Nullable d,
  const __LAPACK_double_complex * _Nullable du,
  const __LAPACK_double_complex * _Nullable dlf,
  const __LAPACK_double_complex * _Nullable df,
  const __LAPACK_double_complex * _Nullable duf,
  const __LAPACK_double_complex * _Nullable du2,
  const __LAPACK_int * _Nullable ipiv,
  const __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  double * _Nullable ferr,
  double * _Nullable berr,
  __LAPACK_double_complex * _Nonnull work,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgtrfs)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhesvx_(
  const char * _Nonnull fact,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  __LAPACK_int * _Nullable ipiv,
  const __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  double * _Nonnull rcond,
  double * _Nullable ferr,
  double * _Nullable berr,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhesvx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zposvx_(
  const char * _Nonnull fact,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  char * _Nonnull equed,
  double * _Nullable s,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  double * _Nonnull rcond,
  double * _Nullable ferr,
  double * _Nullable berr,
  __LAPACK_double_complex * _Nonnull work,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zposvx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zstegr_(
  const char * _Nonnull jobz,
  const char * _Nonnull range,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable d,
  double * _Nullable e,
  const double * _Nonnull vl,
  const double * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  const double * _Nonnull abstol,
  __LAPACK_int * _Nonnull m,
  double * _Nullable w,
  __LAPACK_double_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_int * _Nullable isuppz,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zstegr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zsysvx_(
  const char * _Nonnull fact,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  __LAPACK_int * _Nullable ipiv,
  const __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  double * _Nonnull rcond,
  double * _Nullable ferr,
  double * _Nullable berr,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zsysvx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgejsv_(
  const char * _Nonnull joba,
  const char * _Nonnull jobu,
  const char * _Nonnull jobv,
  const char * _Nonnull jobr,
  const char * _Nonnull jobt,
  const char * _Nonnull jobp,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable sva,
  __LAPACK_float_complex * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  __LAPACK_float_complex * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  __LAPACK_float_complex * _Nullable cwork,
  const __LAPACK_int * _Nonnull lwork,
  float * _Nullable rwork,
  const __LAPACK_int * _Nonnull lrwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgejsv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgges_(
  const char * _Nonnull jobvsl,
  const char * _Nonnull jobvsr,
  const char * _Nonnull sort,
  __LAPACK_cgges_func_ptr selctg,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull sdim,
  __LAPACK_float_complex * _Nullable alpha,
  __LAPACK_float_complex * _Nullable beta,
  __LAPACK_float_complex * _Nullable vsl,
  const __LAPACK_int * _Nonnull ldvsl,
  __LAPACK_float_complex * _Nullable vsr,
  const __LAPACK_int * _Nonnull ldvsr,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  float * _Nullable rwork,
  __LAPACK_bool * _Nullable bwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgges)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgges3_(
  const char * _Nonnull jobvsl,
  const char * _Nonnull jobvsr,
  const char * _Nonnull sort,
  __LAPACK_cgges_func_ptr selctg,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull sdim,
  __LAPACK_float_complex * _Nullable alpha,
  __LAPACK_float_complex * _Nullable beta,
  __LAPACK_float_complex * _Nullable vsl,
  const __LAPACK_int * _Nonnull ldvsl,
  __LAPACK_float_complex * _Nullable vsr,
  const __LAPACK_int * _Nonnull ldvsr,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  float * _Nullable rwork,
  __LAPACK_bool * _Nullable bwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgges3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
claed8_(
  __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull qsiz,
  __LAPACK_float_complex * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  float * _Nullable d,
  float * _Nonnull rho,
  const __LAPACK_int * _Nonnull cutpnt,
  float * _Nullable z,
  float * _Nullable dlamda,
  __LAPACK_float_complex * _Nullable q2,
  const __LAPACK_int * _Nonnull ldq2,
  float * _Nullable w,
  __LAPACK_int * _Nullable indxp,
  __LAPACK_int * _Nullable indx,
  __LAPACK_int * _Nullable indxq,
  __LAPACK_int * _Nullable perm,
  __LAPACK_int * _Nonnull givptr,
  __LAPACK_int * _Nullable givcol,
  float * _Nullable givnum,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(claed8)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
clar1v_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull b1,
  const __LAPACK_int * _Nonnull bn,
  const float * _Nonnull lambda,
  const float * _Nullable d,
  const float * _Nullable l,
  const float * _Nullable ld,
  const float * _Nullable lld,
  const float * _Nonnull pivmin,
  const float * _Nonnull gaptol,
  __LAPACK_float_complex * _Nullable z,
  const __LAPACK_bool * _Nonnull wantnc,
  __LAPACK_int * _Nonnull negcnt,
  float * _Nonnull ztz,
  float * _Nonnull mingma,
  __LAPACK_int * _Nonnull r,
  __LAPACK_int * _Nullable isuppz,
  float * _Nonnull nrminv,
  float * _Nonnull resid,
  float * _Nonnull rqcorr,
  float * _Nullable work)
__LAPACK_ALIAS(clar1v)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cstemr_(
  const char * _Nonnull jobz,
  const char * _Nonnull range,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable d,
  float * _Nullable e,
  const float * _Nonnull vl,
  const float * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  __LAPACK_int * _Nonnull m,
  float * _Nullable w,
  __LAPACK_float_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  const __LAPACK_int * _Nonnull nzc,
  __LAPACK_int * _Nullable isuppz,
  __LAPACK_bool * _Nonnull tryrac,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cstemr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cheevx_(
  const char * _Nonnull jobz,
  const char * _Nonnull range,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nonnull vl,
  const float * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  const float * _Nonnull abstol,
  __LAPACK_int * _Nonnull m,
  float * _Nullable w,
  __LAPACK_float_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  float * _Nullable rwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nullable ifail,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cheevx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cheevx_2stage_(
  const char * _Nonnull jobz,
  const char * _Nonnull range,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nonnull vl,
  const float * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  const float * _Nonnull abstol,
  __LAPACK_int * _Nonnull m,
  float * _Nullable w,
  __LAPACK_float_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  float * _Nullable rwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nullable ifail,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cheevx_2stage)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chpgvx_(
  const __LAPACK_int * _Nonnull itype,
  const char * _Nonnull jobz,
  const char * _Nonnull range,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable ap,
  __LAPACK_float_complex * _Nullable bp,
  const float * _Nonnull vl,
  const float * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  const float * _Nonnull abstol,
  __LAPACK_int * _Nonnull m,
  float * _Nullable w,
  __LAPACK_float_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_float_complex * _Nonnull work,
  float * _Nullable rwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nullable ifail,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chpgvx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cpbsvx_(
  const char * _Nonnull fact,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_float_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  __LAPACK_float_complex * _Nullable afb,
  const __LAPACK_int * _Nonnull ldafb,
  char * _Nonnull equed,
  float * _Nullable s,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  float * _Nonnull rcond,
  float * _Nullable ferr,
  float * _Nullable berr,
  __LAPACK_float_complex * _Nonnull work,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cpbsvx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgesvdx_(
  const char * _Nonnull jobu,
  const char * _Nonnull jobvt,
  const char * _Nonnull range,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nonnull vl,
  const double * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  __LAPACK_int * _Nonnull ns,
  double * _Nullable s,
  double * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  double * _Nullable vt,
  const __LAPACK_int * _Nonnull ldvt,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgesvdx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgges_(
  const char * _Nonnull jobvsl,
  const char * _Nonnull jobvsr,
  const char * _Nonnull sort,
  __LAPACK_dgges_func_ptr selctg,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull sdim,
  double * _Nullable alphar,
  double * _Nullable alphai,
  double * _Nullable beta,
  double * _Nullable vsl,
  const __LAPACK_int * _Nonnull ldvsl,
  double * _Nullable vsr,
  const __LAPACK_int * _Nonnull ldvsr,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_bool * _Nullable bwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgges)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgges3_(
  const char * _Nonnull jobvsl,
  const char * _Nonnull jobvsr,
  const char * _Nonnull sort,
  __LAPACK_dgges_func_ptr selctg,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull sdim,
  double * _Nullable alphar,
  double * _Nullable alphai,
  double * _Nullable beta,
  double * _Nullable vsl,
  const __LAPACK_int * _Nonnull ldvsl,
  double * _Nullable vsr,
  const __LAPACK_int * _Nonnull ldvsr,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_bool * _Nullable bwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgges3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlar1v_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull b1,
  const __LAPACK_int * _Nonnull bn,
  const double * _Nonnull lambda,
  const double * _Nullable d,
  const double * _Nullable l,
  const double * _Nullable ld,
  const double * _Nullable lld,
  const double * _Nonnull pivmin,
  const double * _Nonnull gaptol,
  double * _Nullable z,
  const __LAPACK_bool * _Nonnull wantnc,
  __LAPACK_int * _Nonnull negcnt,
  double * _Nonnull ztz,
  double * _Nonnull mingma,
  __LAPACK_int * _Nonnull r,
  __LAPACK_int * _Nullable isuppz,
  double * _Nonnull nrminv,
  double * _Nonnull resid,
  double * _Nonnull rqcorr,
  double * _Nullable work)
__LAPACK_ALIAS(dlar1v)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dorcsd2by1_(
  const char * _Nonnull jobu1,
  const char * _Nonnull jobu2,
  const char * _Nonnull jobv1t,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull p,
  const __LAPACK_int * _Nonnull q,
  double * _Nullable x11,
  const __LAPACK_int * _Nonnull ldx11,
  double * _Nullable x21,
  const __LAPACK_int * _Nonnull ldx21,
  double * _Nullable theta,
  double * _Nullable u1,
  const __LAPACK_int * _Nonnull ldu1,
  double * _Nullable u2,
  const __LAPACK_int * _Nonnull ldu2,
  double * _Nullable v1t,
  const __LAPACK_int * _Nonnull ldv1t,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dorcsd2by1)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dpbsvx_(
  const char * _Nonnull fact,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  const __LAPACK_int * _Nonnull nrhs,
  double * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  double * _Nullable afb,
  const __LAPACK_int * _Nonnull ldafb,
  char * _Nonnull equed,
  double * _Nullable s,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  double * _Nonnull rcond,
  double * _Nullable ferr,
  double * _Nullable berr,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dpbsvx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dstemr_(
  const char * _Nonnull jobz,
  const char * _Nonnull range,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable d,
  double * _Nullable e,
  const double * _Nonnull vl,
  const double * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  __LAPACK_int * _Nonnull m,
  double * _Nullable w,
  double * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  const __LAPACK_int * _Nonnull nzc,
  __LAPACK_int * _Nullable isuppz,
  __LAPACK_bool * _Nonnull tryrac,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dstemr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsyevr_(
  const char * _Nonnull jobz,
  const char * _Nonnull range,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nonnull vl,
  const double * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  const double * _Nonnull abstol,
  __LAPACK_int * _Nonnull m,
  double * _Nullable w,
  double * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_int * _Nullable isuppz,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsyevr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsyevr_2stage_(
  const char * _Nonnull jobz,
  const char * _Nonnull range,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nonnull vl,
  const double * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  const double * _Nonnull abstol,
  __LAPACK_int * _Nonnull m,
  double * _Nullable w,
  double * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_int * _Nullable isuppz,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsyevr_2stage)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgesvdx_(
  const char * _Nonnull jobu,
  const char * _Nonnull jobvt,
  const char * _Nonnull range,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nonnull vl,
  const float * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  __LAPACK_int * _Nonnull ns,
  float * _Nullable s,
  float * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  float * _Nullable vt,
  const __LAPACK_int * _Nonnull ldvt,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgesvdx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgges_(
  const char * _Nonnull jobvsl,
  const char * _Nonnull jobvsr,
  const char * _Nonnull sort,
  __LAPACK_sgges_func_ptr selctg,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull sdim,
  float * _Nullable alphar,
  float * _Nullable alphai,
  float * _Nullable beta,
  float * _Nullable vsl,
  const __LAPACK_int * _Nonnull ldvsl,
  float * _Nullable vsr,
  const __LAPACK_int * _Nonnull ldvsr,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_bool * _Nullable bwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgges)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgges3_(
  const char * _Nonnull jobvsl,
  const char * _Nonnull jobvsr,
  const char * _Nonnull sort,
  __LAPACK_sgges_func_ptr selctg,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull sdim,
  float * _Nullable alphar,
  float * _Nullable alphai,
  float * _Nullable beta,
  float * _Nullable vsl,
  const __LAPACK_int * _Nonnull ldvsl,
  float * _Nullable vsr,
  const __LAPACK_int * _Nonnull ldvsr,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_bool * _Nullable bwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgges3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slar1v_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull b1,
  const __LAPACK_int * _Nonnull bn,
  const float * _Nonnull lambda,
  const float * _Nullable d,
  const float * _Nullable l,
  const float * _Nullable ld,
  const float * _Nullable lld,
  const float * _Nonnull pivmin,
  const float * _Nonnull gaptol,
  float * _Nullable z,
  const __LAPACK_bool * _Nonnull wantnc,
  __LAPACK_int * _Nonnull negcnt,
  float * _Nonnull ztz,
  float * _Nonnull mingma,
  __LAPACK_int * _Nonnull r,
  __LAPACK_int * _Nullable isuppz,
  float * _Nonnull nrminv,
  float * _Nonnull resid,
  float * _Nonnull rqcorr,
  float * _Nullable work)
__LAPACK_ALIAS(slar1v)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sorcsd2by1_(
  const char * _Nonnull jobu1,
  const char * _Nonnull jobu2,
  const char * _Nonnull jobv1t,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull p,
  const __LAPACK_int * _Nonnull q,
  float * _Nullable x11,
  const __LAPACK_int * _Nonnull ldx11,
  float * _Nullable x21,
  const __LAPACK_int * _Nonnull ldx21,
  float * _Nullable theta,
  float * _Nullable u1,
  const __LAPACK_int * _Nonnull ldu1,
  float * _Nullable u2,
  const __LAPACK_int * _Nonnull ldu2,
  float * _Nullable v1t,
  const __LAPACK_int * _Nonnull ldv1t,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sorcsd2by1)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
spbsvx_(
  const char * _Nonnull fact,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  const __LAPACK_int * _Nonnull nrhs,
  float * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  float * _Nullable afb,
  const __LAPACK_int * _Nonnull ldafb,
  char * _Nonnull equed,
  float * _Nullable s,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  float * _Nonnull rcond,
  float * _Nullable ferr,
  float * _Nullable berr,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(spbsvx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sstemr_(
  const char * _Nonnull jobz,
  const char * _Nonnull range,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable d,
  float * _Nullable e,
  const float * _Nonnull vl,
  const float * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  __LAPACK_int * _Nonnull m,
  float * _Nullable w,
  float * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  const __LAPACK_int * _Nonnull nzc,
  __LAPACK_int * _Nullable isuppz,
  __LAPACK_bool * _Nonnull tryrac,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sstemr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssyevr_(
  const char * _Nonnull jobz,
  const char * _Nonnull range,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nonnull vl,
  const float * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  const float * _Nonnull abstol,
  __LAPACK_int * _Nonnull m,
  float * _Nullable w,
  float * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_int * _Nullable isuppz,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssyevr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssyevr_2stage_(
  const char * _Nonnull jobz,
  const char * _Nonnull range,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nonnull vl,
  const float * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  const float * _Nonnull abstol,
  __LAPACK_int * _Nonnull m,
  float * _Nullable w,
  float * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_int * _Nullable isuppz,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssyevr_2stage)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgejsv_(
  const char * _Nonnull joba,
  const char * _Nonnull jobu,
  const char * _Nonnull jobv,
  const char * _Nonnull jobr,
  const char * _Nonnull jobt,
  const char * _Nonnull jobp,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable sva,
  __LAPACK_double_complex * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  __LAPACK_double_complex * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  __LAPACK_double_complex * _Nullable cwork,
  const __LAPACK_int * _Nonnull lwork,
  double * _Nullable rwork,
  const __LAPACK_int * _Nonnull lrwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgejsv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgges_(
  const char * _Nonnull jobvsl,
  const char * _Nonnull jobvsr,
  const char * _Nonnull sort,
  __LAPACK_zgges_func_ptr selctg,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull sdim,
  __LAPACK_double_complex * _Nullable alpha,
  __LAPACK_double_complex * _Nullable beta,
  __LAPACK_double_complex * _Nullable vsl,
  const __LAPACK_int * _Nonnull ldvsl,
  __LAPACK_double_complex * _Nullable vsr,
  const __LAPACK_int * _Nonnull ldvsr,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  double * _Nullable rwork,
  __LAPACK_bool * _Nullable bwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgges)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgges3_(
  const char * _Nonnull jobvsl,
  const char * _Nonnull jobvsr,
  const char * _Nonnull sort,
  __LAPACK_zgges_func_ptr selctg,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull sdim,
  __LAPACK_double_complex * _Nullable alpha,
  __LAPACK_double_complex * _Nullable beta,
  __LAPACK_double_complex * _Nullable vsl,
  const __LAPACK_int * _Nonnull ldvsl,
  __LAPACK_double_complex * _Nullable vsr,
  const __LAPACK_int * _Nonnull ldvsr,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  double * _Nullable rwork,
  __LAPACK_bool * _Nullable bwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgges3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlaed8_(
  __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull qsiz,
  __LAPACK_double_complex * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  double * _Nullable d,
  double * _Nonnull rho,
  const __LAPACK_int * _Nonnull cutpnt,
  double * _Nullable z,
  double * _Nullable dlamda,
  __LAPACK_double_complex * _Nullable q2,
  const __LAPACK_int * _Nonnull ldq2,
  double * _Nullable w,
  __LAPACK_int * _Nullable indxp,
  __LAPACK_int * _Nullable indx,
  __LAPACK_int * _Nullable indxq,
  __LAPACK_int * _Nullable perm,
  __LAPACK_int * _Nonnull givptr,
  __LAPACK_int * _Nullable givcol,
  double * _Nullable givnum,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zlaed8)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlar1v_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull b1,
  const __LAPACK_int * _Nonnull bn,
  const double * _Nonnull lambda,
  const double * _Nullable d,
  const double * _Nullable l,
  const double * _Nullable ld,
  const double * _Nullable lld,
  const double * _Nonnull pivmin,
  const double * _Nonnull gaptol,
  __LAPACK_double_complex * _Nullable z,
  const __LAPACK_bool * _Nonnull wantnc,
  __LAPACK_int * _Nonnull negcnt,
  double * _Nonnull ztz,
  double * _Nonnull mingma,
  __LAPACK_int * _Nonnull r,
  __LAPACK_int * _Nullable isuppz,
  double * _Nonnull nrminv,
  double * _Nonnull resid,
  double * _Nonnull rqcorr,
  double * _Nullable work)
__LAPACK_ALIAS(zlar1v)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zstemr_(
  const char * _Nonnull jobz,
  const char * _Nonnull range,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable d,
  double * _Nullable e,
  const double * _Nonnull vl,
  const double * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  __LAPACK_int * _Nonnull m,
  double * _Nullable w,
  __LAPACK_double_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  const __LAPACK_int * _Nonnull nzc,
  __LAPACK_int * _Nullable isuppz,
  __LAPACK_bool * _Nonnull tryrac,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zstemr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zheevx_(
  const char * _Nonnull jobz,
  const char * _Nonnull range,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nonnull vl,
  const double * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  const double * _Nonnull abstol,
  __LAPACK_int * _Nonnull m,
  double * _Nullable w,
  __LAPACK_double_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  double * _Nullable rwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nullable ifail,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zheevx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zheevx_2stage_(
  const char * _Nonnull jobz,
  const char * _Nonnull range,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nonnull vl,
  const double * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  const double * _Nonnull abstol,
  __LAPACK_int * _Nonnull m,
  double * _Nullable w,
  __LAPACK_double_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  double * _Nullable rwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nullable ifail,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zheevx_2stage)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhpgvx_(
  const __LAPACK_int * _Nonnull itype,
  const char * _Nonnull jobz,
  const char * _Nonnull range,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable ap,
  __LAPACK_double_complex * _Nullable bp,
  const double * _Nonnull vl,
  const double * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  const double * _Nonnull abstol,
  __LAPACK_int * _Nonnull m,
  double * _Nullable w,
  __LAPACK_double_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_double_complex * _Nonnull work,
  double * _Nullable rwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nullable ifail,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhpgvx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zpbsvx_(
  const char * _Nonnull fact,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_double_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  __LAPACK_double_complex * _Nullable afb,
  const __LAPACK_int * _Nonnull ldafb,
  char * _Nonnull equed,
  double * _Nullable s,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  double * _Nonnull rcond,
  double * _Nullable ferr,
  double * _Nullable berr,
  __LAPACK_double_complex * _Nonnull work,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zpbsvx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgeevx_(
  const char * _Nonnull balanc,
  const char * _Nonnull jobvl,
  const char * _Nonnull jobvr,
  const char * _Nonnull sense,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable w,
  __LAPACK_float_complex * _Nullable vl,
  const __LAPACK_int * _Nonnull ldvl,
  __LAPACK_float_complex * _Nullable vr,
  const __LAPACK_int * _Nonnull ldvr,
  __LAPACK_int * _Nonnull ilo,
  __LAPACK_int * _Nonnull ihi,
  float * _Nullable scale,
  float * _Nonnull abnrm,
  float * _Nullable rconde,
  float * _Nullable rcondv,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgeevx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgesvdq_(
  const char * _Nonnull joba,
  const char * _Nonnull jobp,
  const char * _Nonnull jobr,
  const char * _Nonnull jobu,
  const char * _Nonnull jobv,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable s,
  __LAPACK_float_complex * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  __LAPACK_float_complex * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  __LAPACK_int * _Nonnull numrank,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_float_complex * _Nullable cwork,
  const __LAPACK_int * _Nonnull lcwork,
  float * _Nullable rwork,
  const __LAPACK_int * _Nonnull lrwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgesvdq)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgesvdx_(
  const char * _Nonnull jobu,
  const char * _Nonnull jobvt,
  const char * _Nonnull range,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nonnull vl,
  const float * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  __LAPACK_int * _Nonnull ns,
  float * _Nullable s,
  __LAPACK_float_complex * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  __LAPACK_float_complex * _Nullable vt,
  const __LAPACK_int * _Nonnull ldvt,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  float * _Nullable rwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgesvdx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgesvx_(
  const char * _Nonnull fact,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  __LAPACK_int * _Nullable ipiv,
  char * _Nonnull equed,
  float * _Nullable r,
  float * _Nullable c,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  float * _Nonnull rcond,
  float * _Nullable ferr,
  float * _Nullable berr,
  __LAPACK_float_complex * _Nonnull work,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgesvx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ctgsyl_(
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull ijob,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  const __LAPACK_float_complex * _Nullable d,
  const __LAPACK_int * _Nonnull ldd,
  const __LAPACK_float_complex * _Nullable e,
  const __LAPACK_int * _Nonnull lde,
  __LAPACK_float_complex * _Nullable f,
  const __LAPACK_int * _Nonnull ldf,
  float * _Nonnull scale,
  float * _Nonnull dif,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ctgsyl)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgtsvx_(
  const char * _Nonnull fact,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_float_complex * _Nullable dl,
  const __LAPACK_float_complex * _Nullable d,
  const __LAPACK_float_complex * _Nullable du,
  __LAPACK_float_complex * _Nullable dlf,
  __LAPACK_float_complex * _Nullable df,
  __LAPACK_float_complex * _Nullable duf,
  __LAPACK_float_complex * _Nullable du2,
  __LAPACK_int * _Nullable ipiv,
  const __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  float * _Nonnull rcond,
  float * _Nullable ferr,
  float * _Nullable berr,
  __LAPACK_float_complex * _Nonnull work,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgtsvx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
claed7_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull cutpnt,
  const __LAPACK_int * _Nonnull qsiz,
  const __LAPACK_int * _Nonnull tlvls,
  const __LAPACK_int * _Nonnull curlvl,
  const __LAPACK_int * _Nonnull curpbm,
  float * _Nullable d,
  __LAPACK_float_complex * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  float * _Nonnull rho,
  __LAPACK_int * _Nullable indxq,
  float * _Nullable qstore,
  __LAPACK_int * _Nullable qptr,
  __LAPACK_int * _Nullable prmptr,
  __LAPACK_int * _Nullable perm,
  __LAPACK_int * _Nullable givptr,
  __LAPACK_int * _Nullable givcol,
  float * _Nullable givnum,
  __LAPACK_float_complex * _Nonnull work,
  float * _Nullable rwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(claed7)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slaed8_(
  const __LAPACK_int * _Nonnull icompq,
  __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull qsiz,
  float * _Nullable d,
  float * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  __LAPACK_int * _Nullable indxq,
  float * _Nonnull rho,
  const __LAPACK_int * _Nonnull cutpnt,
  float * _Nullable z,
  float * _Nullable dlamda,
  float * _Nullable q2,
  const __LAPACK_int * _Nonnull ldq2,
  float * _Nullable w,
  __LAPACK_int * _Nullable perm,
  __LAPACK_int * _Nonnull givptr,
  __LAPACK_int * _Nullable givcol,
  float * _Nullable givnum,
  __LAPACK_int * _Nullable indxp,
  __LAPACK_int * _Nullable indx,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slaed8)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slaed7_(
  const __LAPACK_int * _Nonnull icompq,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull qsiz,
  const __LAPACK_int * _Nonnull tlvls,
  const __LAPACK_int * _Nonnull curlvl,
  const __LAPACK_int * _Nonnull curpbm,
  float * _Nullable d,
  float * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  __LAPACK_int * _Nullable indxq,
  float * _Nonnull rho,
  const __LAPACK_int * _Nonnull cutpnt,
  float * _Nullable qstore,
  __LAPACK_int * _Nullable qptr,
  __LAPACK_int * _Nullable prmptr,
  __LAPACK_int * _Nullable perm,
  __LAPACK_int * _Nullable givptr,
  __LAPACK_int * _Nullable givcol,
  float * _Nullable givnum,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slaed7)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cunbdb_(
  const char * _Nonnull trans,
  const char * _Nonnull signs,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull p,
  const __LAPACK_int * _Nonnull q,
  __LAPACK_float_complex * _Nullable x11,
  const __LAPACK_int * _Nonnull ldx11,
  __LAPACK_float_complex * _Nullable x12,
  const __LAPACK_int * _Nonnull ldx12,
  __LAPACK_float_complex * _Nullable x21,
  const __LAPACK_int * _Nonnull ldx21,
  __LAPACK_float_complex * _Nullable x22,
  const __LAPACK_int * _Nonnull ldx22,
  float * _Nullable theta,
  float * _Nullable phi,
  __LAPACK_float_complex * _Nullable taup1,
  __LAPACK_float_complex * _Nullable taup2,
  __LAPACK_float_complex * _Nullable tauq1,
  __LAPACK_float_complex * _Nullable tauq2,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cunbdb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgesvdq_(
  const char * _Nonnull joba,
  const char * _Nonnull jobp,
  const char * _Nonnull jobr,
  const char * _Nonnull jobu,
  const char * _Nonnull jobv,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable s,
  double * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  double * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  __LAPACK_int * _Nonnull numrank,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  double * _Nullable rwork,
  const __LAPACK_int * _Nonnull lrwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgesvdq)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgesvx_(
  const char * _Nonnull fact,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  __LAPACK_int * _Nullable ipiv,
  char * _Nonnull equed,
  double * _Nullable r,
  double * _Nullable c,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  double * _Nonnull rcond,
  double * _Nullable ferr,
  double * _Nullable berr,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgesvx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dtgsy2_(
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull ijob,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  const double * _Nullable d,
  const __LAPACK_int * _Nonnull ldd,
  const double * _Nullable e,
  const __LAPACK_int * _Nonnull lde,
  double * _Nullable f,
  const __LAPACK_int * _Nonnull ldf,
  double * _Nonnull scale,
  double * _Nonnull rdsum,
  double * _Nonnull rdscal,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull pq,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dtgsy2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dtgsyl_(
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull ijob,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  const double * _Nullable d,
  const __LAPACK_int * _Nonnull ldd,
  const double * _Nullable e,
  const __LAPACK_int * _Nonnull lde,
  double * _Nullable f,
  const __LAPACK_int * _Nonnull ldf,
  double * _Nonnull scale,
  double * _Nonnull dif,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dtgsyl)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgtsvx_(
  const char * _Nonnull fact,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const double * _Nullable dl,
  const double * _Nullable d,
  const double * _Nullable du,
  double * _Nullable dlf,
  double * _Nullable df,
  double * _Nullable duf,
  double * _Nullable du2,
  __LAPACK_int * _Nullable ipiv,
  const double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  double * _Nonnull rcond,
  double * _Nullable ferr,
  double * _Nullable berr,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgtsvx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlaed8_(
  const __LAPACK_int * _Nonnull icompq,
  __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull qsiz,
  double * _Nullable d,
  double * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  __LAPACK_int * _Nullable indxq,
  double * _Nonnull rho,
  const __LAPACK_int * _Nonnull cutpnt,
  double * _Nullable z,
  double * _Nullable dlamda,
  double * _Nullable q2,
  const __LAPACK_int * _Nonnull ldq2,
  double * _Nullable w,
  __LAPACK_int * _Nullable perm,
  __LAPACK_int * _Nonnull givptr,
  __LAPACK_int * _Nullable givcol,
  double * _Nullable givnum,
  __LAPACK_int * _Nullable indxp,
  __LAPACK_int * _Nullable indx,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlaed8)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlaed7_(
  const __LAPACK_int * _Nonnull icompq,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull qsiz,
  const __LAPACK_int * _Nonnull tlvls,
  const __LAPACK_int * _Nonnull curlvl,
  const __LAPACK_int * _Nonnull curpbm,
  double * _Nullable d,
  double * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  __LAPACK_int * _Nullable indxq,
  double * _Nonnull rho,
  const __LAPACK_int * _Nonnull cutpnt,
  double * _Nullable qstore,
  __LAPACK_int * _Nullable qptr,
  __LAPACK_int * _Nullable prmptr,
  __LAPACK_int * _Nullable perm,
  __LAPACK_int * _Nullable givptr,
  __LAPACK_int * _Nullable givcol,
  double * _Nullable givnum,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlaed7)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dorbdb_(
  const char * _Nonnull trans,
  const char * _Nonnull signs,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull p,
  const __LAPACK_int * _Nonnull q,
  double * _Nullable x11,
  const __LAPACK_int * _Nonnull ldx11,
  double * _Nullable x12,
  const __LAPACK_int * _Nonnull ldx12,
  double * _Nullable x21,
  const __LAPACK_int * _Nonnull ldx21,
  double * _Nullable x22,
  const __LAPACK_int * _Nonnull ldx22,
  double * _Nullable theta,
  double * _Nullable phi,
  double * _Nullable taup1,
  double * _Nullable taup2,
  double * _Nullable tauq1,
  double * _Nullable tauq2,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dorbdb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsbevx_(
  const char * _Nonnull jobz,
  const char * _Nonnull range,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  double * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  double * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  const double * _Nonnull vl,
  const double * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  const double * _Nonnull abstol,
  __LAPACK_int * _Nonnull m,
  double * _Nullable w,
  double * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nullable ifail,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsbevx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgesvdq_(
  const char * _Nonnull joba,
  const char * _Nonnull jobp,
  const char * _Nonnull jobr,
  const char * _Nonnull jobu,
  const char * _Nonnull jobv,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable s,
  float * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  float * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  __LAPACK_int * _Nonnull numrank,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  float * _Nullable rwork,
  const __LAPACK_int * _Nonnull lrwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgesvdq)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgesvx_(
  const char * _Nonnull fact,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  __LAPACK_int * _Nullable ipiv,
  char * _Nonnull equed,
  float * _Nullable r,
  float * _Nullable c,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  float * _Nonnull rcond,
  float * _Nullable ferr,
  float * _Nullable berr,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgesvx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
stgsy2_(
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull ijob,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  const float * _Nullable d,
  const __LAPACK_int * _Nonnull ldd,
  const float * _Nullable e,
  const __LAPACK_int * _Nonnull lde,
  float * _Nullable f,
  const __LAPACK_int * _Nonnull ldf,
  float * _Nonnull scale,
  float * _Nonnull rdsum,
  float * _Nonnull rdscal,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull pq,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(stgsy2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
stgsyl_(
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull ijob,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  const float * _Nullable d,
  const __LAPACK_int * _Nonnull ldd,
  const float * _Nullable e,
  const __LAPACK_int * _Nonnull lde,
  float * _Nullable f,
  const __LAPACK_int * _Nonnull ldf,
  float * _Nonnull scale,
  float * _Nonnull dif,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(stgsyl)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgtsvx_(
  const char * _Nonnull fact,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const float * _Nullable dl,
  const float * _Nullable d,
  const float * _Nullable du,
  float * _Nullable dlf,
  float * _Nullable df,
  float * _Nullable duf,
  float * _Nullable du2,
  __LAPACK_int * _Nullable ipiv,
  const float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  float * _Nonnull rcond,
  float * _Nullable ferr,
  float * _Nullable berr,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgtsvx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sorbdb_(
  const char * _Nonnull trans,
  const char * _Nonnull signs,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull p,
  const __LAPACK_int * _Nonnull q,
  float * _Nullable x11,
  const __LAPACK_int * _Nonnull ldx11,
  float * _Nullable x12,
  const __LAPACK_int * _Nonnull ldx12,
  float * _Nullable x21,
  const __LAPACK_int * _Nonnull ldx21,
  float * _Nullable x22,
  const __LAPACK_int * _Nonnull ldx22,
  float * _Nullable theta,
  float * _Nullable phi,
  float * _Nullable taup1,
  float * _Nullable taup2,
  float * _Nullable tauq1,
  float * _Nullable tauq2,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sorbdb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssbevx_(
  const char * _Nonnull jobz,
  const char * _Nonnull range,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  float * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  float * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  const float * _Nonnull vl,
  const float * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  const float * _Nonnull abstol,
  __LAPACK_int * _Nonnull m,
  float * _Nullable w,
  float * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nullable ifail,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssbevx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgeevx_(
  const char * _Nonnull balanc,
  const char * _Nonnull jobvl,
  const char * _Nonnull jobvr,
  const char * _Nonnull sense,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable w,
  __LAPACK_double_complex * _Nullable vl,
  const __LAPACK_int * _Nonnull ldvl,
  __LAPACK_double_complex * _Nullable vr,
  const __LAPACK_int * _Nonnull ldvr,
  __LAPACK_int * _Nonnull ilo,
  __LAPACK_int * _Nonnull ihi,
  double * _Nullable scale,
  double * _Nonnull abnrm,
  double * _Nullable rconde,
  double * _Nullable rcondv,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgeevx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgesvdq_(
  const char * _Nonnull joba,
  const char * _Nonnull jobp,
  const char * _Nonnull jobr,
  const char * _Nonnull jobu,
  const char * _Nonnull jobv,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable s,
  __LAPACK_double_complex * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  __LAPACK_double_complex * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  __LAPACK_int * _Nonnull numrank,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_double_complex * _Nullable cwork,
  const __LAPACK_int * _Nonnull lcwork,
  double * _Nullable rwork,
  const __LAPACK_int * _Nonnull lrwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgesvdq)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgesvdx_(
  const char * _Nonnull jobu,
  const char * _Nonnull jobvt,
  const char * _Nonnull range,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nonnull vl,
  const double * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  __LAPACK_int * _Nonnull ns,
  double * _Nullable s,
  __LAPACK_double_complex * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  __LAPACK_double_complex * _Nullable vt,
  const __LAPACK_int * _Nonnull ldvt,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  double * _Nullable rwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgesvdx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgesvx_(
  const char * _Nonnull fact,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable af,
  const __LAPACK_int * _Nonnull ldaf,
  __LAPACK_int * _Nullable ipiv,
  char * _Nonnull equed,
  double * _Nullable r,
  double * _Nullable c,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  double * _Nonnull rcond,
  double * _Nullable ferr,
  double * _Nullable berr,
  __LAPACK_double_complex * _Nonnull work,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgesvx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ztgsyl_(
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull ijob,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nullable c,
  const __LAPACK_int * _Nonnull ldc,
  const __LAPACK_double_complex * _Nullable d,
  const __LAPACK_int * _Nonnull ldd,
  const __LAPACK_double_complex * _Nullable e,
  const __LAPACK_int * _Nonnull lde,
  __LAPACK_double_complex * _Nullable f,
  const __LAPACK_int * _Nonnull ldf,
  double * _Nonnull scale,
  double * _Nonnull dif,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ztgsyl)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgtsvx_(
  const char * _Nonnull fact,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  const __LAPACK_double_complex * _Nullable dl,
  const __LAPACK_double_complex * _Nullable d,
  const __LAPACK_double_complex * _Nullable du,
  __LAPACK_double_complex * _Nullable dlf,
  __LAPACK_double_complex * _Nullable df,
  __LAPACK_double_complex * _Nullable duf,
  __LAPACK_double_complex * _Nullable du2,
  __LAPACK_int * _Nullable ipiv,
  const __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  double * _Nonnull rcond,
  double * _Nullable ferr,
  double * _Nullable berr,
  __LAPACK_double_complex * _Nonnull work,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgtsvx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlaed7_(
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull cutpnt,
  const __LAPACK_int * _Nonnull qsiz,
  const __LAPACK_int * _Nonnull tlvls,
  const __LAPACK_int * _Nonnull curlvl,
  const __LAPACK_int * _Nonnull curpbm,
  double * _Nullable d,
  __LAPACK_double_complex * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  double * _Nonnull rho,
  __LAPACK_int * _Nullable indxq,
  double * _Nullable qstore,
  __LAPACK_int * _Nullable qptr,
  __LAPACK_int * _Nullable prmptr,
  __LAPACK_int * _Nullable perm,
  __LAPACK_int * _Nullable givptr,
  __LAPACK_int * _Nullable givcol,
  double * _Nullable givnum,
  __LAPACK_double_complex * _Nonnull work,
  double * _Nullable rwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zlaed7)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zunbdb_(
  const char * _Nonnull trans,
  const char * _Nonnull signs,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull p,
  const __LAPACK_int * _Nonnull q,
  __LAPACK_double_complex * _Nullable x11,
  const __LAPACK_int * _Nonnull ldx11,
  __LAPACK_double_complex * _Nullable x12,
  const __LAPACK_int * _Nonnull ldx12,
  __LAPACK_double_complex * _Nullable x21,
  const __LAPACK_int * _Nonnull ldx21,
  __LAPACK_double_complex * _Nullable x22,
  const __LAPACK_int * _Nonnull ldx22,
  double * _Nullable theta,
  double * _Nullable phi,
  __LAPACK_double_complex * _Nullable taup1,
  __LAPACK_double_complex * _Nullable taup2,
  __LAPACK_double_complex * _Nullable tauq1,
  __LAPACK_double_complex * _Nullable tauq2,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zunbdb)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slasd2_(
  const __LAPACK_int * _Nonnull nl,
  const __LAPACK_int * _Nonnull nr,
  const __LAPACK_int * _Nonnull sqre,
  __LAPACK_int * _Nonnull k,
  float * _Nullable d,
  float * _Nullable z,
  const float * _Nonnull alpha,
  const float * _Nonnull beta,
  float * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  float * _Nullable vt,
  const __LAPACK_int * _Nonnull ldvt,
  float * _Nullable dsigma,
  float * _Nullable u2,
  const __LAPACK_int * _Nonnull ldu2,
  float * _Nullable vt2,
  const __LAPACK_int * _Nonnull ldvt2,
  __LAPACK_int * _Nullable idxp,
  __LAPACK_int * _Nullable idx,
  __LAPACK_int * _Nullable idxc,
  __LAPACK_int * _Nullable idxq,
  __LAPACK_int * _Nullable coltyp,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slasd2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chbevx_(
  const char * _Nonnull jobz,
  const char * _Nonnull range,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  __LAPACK_float_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  __LAPACK_float_complex * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  const float * _Nonnull vl,
  const float * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  const float * _Nonnull abstol,
  __LAPACK_int * _Nonnull m,
  float * _Nullable w,
  __LAPACK_float_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_float_complex * _Nonnull work,
  float * _Nullable rwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nullable ifail,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chbevx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cheevr_(
  const char * _Nonnull jobz,
  const char * _Nonnull range,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nonnull vl,
  const float * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  const float * _Nonnull abstol,
  __LAPACK_int * _Nonnull m,
  float * _Nullable w,
  __LAPACK_float_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_int * _Nullable isuppz,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  float * _Nullable rwork,
  const __LAPACK_int * _Nonnull lrwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cheevr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cheevr_2stage_(
  const char * _Nonnull jobz,
  const char * _Nonnull range,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const float * _Nonnull vl,
  const float * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  const float * _Nonnull abstol,
  __LAPACK_int * _Nonnull m,
  float * _Nullable w,
  __LAPACK_float_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_int * _Nullable isuppz,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  float * _Nullable rwork,
  const __LAPACK_int * _Nonnull lrwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cheevr_2stage)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cuncsd2by1_(
  const char * _Nonnull jobu1,
  const char * _Nonnull jobu2,
  const char * _Nonnull jobv1t,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull p,
  const __LAPACK_int * _Nonnull q,
  __LAPACK_float_complex * _Nullable x11,
  const __LAPACK_int * _Nonnull ldx11,
  __LAPACK_float_complex * _Nullable x21,
  const __LAPACK_int * _Nonnull ldx21,
  float * _Nullable theta,
  __LAPACK_float_complex * _Nullable u1,
  const __LAPACK_int * _Nonnull ldu1,
  __LAPACK_float_complex * _Nullable u2,
  const __LAPACK_int * _Nonnull ldu2,
  __LAPACK_float_complex * _Nullable v1t,
  const __LAPACK_int * _Nonnull ldv1t,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  float * _Nullable rwork,
  const __LAPACK_int * _Nonnull lrwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cuncsd2by1)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlasd2_(
  const __LAPACK_int * _Nonnull nl,
  const __LAPACK_int * _Nonnull nr,
  const __LAPACK_int * _Nonnull sqre,
  __LAPACK_int * _Nonnull k,
  double * _Nullable d,
  double * _Nullable z,
  const double * _Nonnull alpha,
  const double * _Nonnull beta,
  double * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  double * _Nullable vt,
  const __LAPACK_int * _Nonnull ldvt,
  double * _Nullable dsigma,
  double * _Nullable u2,
  const __LAPACK_int * _Nonnull ldu2,
  double * _Nullable vt2,
  const __LAPACK_int * _Nonnull ldvt2,
  __LAPACK_int * _Nullable idxp,
  __LAPACK_int * _Nullable idx,
  __LAPACK_int * _Nullable idxc,
  __LAPACK_int * _Nullable idxq,
  __LAPACK_int * _Nullable coltyp,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlasd2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgeevx_(
  const char * _Nonnull balanc,
  const char * _Nonnull jobvl,
  const char * _Nonnull jobvr,
  const char * _Nonnull sense,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable wr,
  double * _Nullable wi,
  double * _Nullable vl,
  const __LAPACK_int * _Nonnull ldvl,
  double * _Nullable vr,
  const __LAPACK_int * _Nonnull ldvr,
  __LAPACK_int * _Nonnull ilo,
  __LAPACK_int * _Nonnull ihi,
  double * _Nullable scale,
  double * _Nonnull abnrm,
  double * _Nullable rconde,
  double * _Nullable rcondv,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgeevx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dggsvd_(
  const char * _Nonnull jobu,
  const char * _Nonnull jobv,
  const char * _Nonnull jobq,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull p,
  __LAPACK_int * _Nonnull k,
  __LAPACK_int * _Nonnull l,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nullable alpha,
  double * _Nullable beta,
  double * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  double * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  double * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dggsvd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsbevx_2stage_(
  const char * _Nonnull jobz,
  const char * _Nonnull range,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  double * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  const double * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  const double * _Nonnull vl,
  const double * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  const double * _Nonnull abstol,
  __LAPACK_int * _Nonnull m,
  double * _Nullable w,
  double * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nullable ifail,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsbevx_2stage)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dsygvx_(
  const __LAPACK_int * _Nonnull itype,
  const char * _Nonnull jobz,
  const char * _Nonnull range,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  const double * _Nonnull vl,
  const double * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  const double * _Nonnull abstol,
  __LAPACK_int * _Nonnull m,
  double * _Nullable w,
  double * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nullable ifail,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsygvx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgeevx_(
  const char * _Nonnull balanc,
  const char * _Nonnull jobvl,
  const char * _Nonnull jobvr,
  const char * _Nonnull sense,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable wr,
  float * _Nullable wi,
  float * _Nullable vl,
  const __LAPACK_int * _Nonnull ldvl,
  float * _Nullable vr,
  const __LAPACK_int * _Nonnull ldvr,
  __LAPACK_int * _Nonnull ilo,
  __LAPACK_int * _Nonnull ihi,
  float * _Nullable scale,
  float * _Nonnull abnrm,
  float * _Nullable rconde,
  float * _Nullable rcondv,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgeevx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sggsvd_(
  const char * _Nonnull jobu,
  const char * _Nonnull jobv,
  const char * _Nonnull jobq,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull p,
  __LAPACK_int * _Nonnull k,
  __LAPACK_int * _Nonnull l,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nullable alpha,
  float * _Nullable beta,
  float * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  float * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  float * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sggsvd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssbevx_2stage_(
  const char * _Nonnull jobz,
  const char * _Nonnull range,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  float * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  const float * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  const float * _Nonnull vl,
  const float * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  const float * _Nonnull abstol,
  __LAPACK_int * _Nonnull m,
  float * _Nullable w,
  float * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nullable ifail,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssbevx_2stage)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ssygvx_(
  const __LAPACK_int * _Nonnull itype,
  const char * _Nonnull jobz,
  const char * _Nonnull range,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  const float * _Nonnull vl,
  const float * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  const float * _Nonnull abstol,
  __LAPACK_int * _Nonnull m,
  float * _Nullable w,
  float * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nullable ifail,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssygvx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhbevx_(
  const char * _Nonnull jobz,
  const char * _Nonnull range,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  __LAPACK_double_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  __LAPACK_double_complex * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  const double * _Nonnull vl,
  const double * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  const double * _Nonnull abstol,
  __LAPACK_int * _Nonnull m,
  double * _Nullable w,
  __LAPACK_double_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_double_complex * _Nonnull work,
  double * _Nullable rwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nullable ifail,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhbevx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zheevr_(
  const char * _Nonnull jobz,
  const char * _Nonnull range,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nonnull vl,
  const double * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  const double * _Nonnull abstol,
  __LAPACK_int * _Nonnull m,
  double * _Nullable w,
  __LAPACK_double_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_int * _Nullable isuppz,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  double * _Nullable rwork,
  const __LAPACK_int * _Nonnull lrwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zheevr)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zheevr_2stage_(
  const char * _Nonnull jobz,
  const char * _Nonnull range,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  const double * _Nonnull vl,
  const double * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  const double * _Nonnull abstol,
  __LAPACK_int * _Nonnull m,
  double * _Nullable w,
  __LAPACK_double_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_int * _Nullable isuppz,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  double * _Nullable rwork,
  const __LAPACK_int * _Nonnull lrwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zheevr_2stage)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zuncsd2by1_(
  const char * _Nonnull jobu1,
  const char * _Nonnull jobu2,
  const char * _Nonnull jobv1t,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull p,
  const __LAPACK_int * _Nonnull q,
  __LAPACK_double_complex * _Nullable x11,
  const __LAPACK_int * _Nonnull ldx11,
  __LAPACK_double_complex * _Nullable x21,
  const __LAPACK_int * _Nonnull ldx21,
  double * _Nullable theta,
  __LAPACK_double_complex * _Nullable u1,
  const __LAPACK_int * _Nonnull ldu1,
  __LAPACK_double_complex * _Nullable u2,
  const __LAPACK_int * _Nonnull ldu2,
  __LAPACK_double_complex * _Nullable v1t,
  const __LAPACK_int * _Nonnull ldv1t,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  double * _Nullable rwork,
  const __LAPACK_int * _Nonnull lrwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zuncsd2by1)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cgbsvx_(
  const char * _Nonnull fact,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_float_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  __LAPACK_float_complex * _Nullable afb,
  const __LAPACK_int * _Nonnull ldafb,
  __LAPACK_int * _Nullable ipiv,
  char * _Nonnull equed,
  float * _Nullable r,
  float * _Nullable c,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  float * _Nonnull rcond,
  float * _Nullable ferr,
  float * _Nullable berr,
  __LAPACK_float_complex * _Nonnull work,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cgbsvx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
claqr5_(
  const __LAPACK_bool * _Nonnull wantt,
  const __LAPACK_bool * _Nonnull wantz,
  const __LAPACK_int * _Nonnull kacc22,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ktop,
  const __LAPACK_int * _Nonnull kbot,
  const __LAPACK_int * _Nonnull nshfts,
  const __LAPACK_float_complex * _Nullable s,
  __LAPACK_float_complex * _Nullable h,
  const __LAPACK_int * _Nonnull ldh,
  const __LAPACK_int * _Nonnull iloz,
  const __LAPACK_int * _Nonnull ihiz,
  __LAPACK_float_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_float_complex * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  __LAPACK_float_complex * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  const __LAPACK_int * _Nonnull nv,
  __LAPACK_float_complex * _Nullable wv,
  const __LAPACK_int * _Nonnull ldwv,
  const __LAPACK_int * _Nonnull nh,
  __LAPACK_float_complex * _Nullable wh,
  const __LAPACK_int * _Nonnull ldwh)
__LAPACK_ALIAS(claqr5)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
clals0_(
  const __LAPACK_int * _Nonnull icompq,
  const __LAPACK_int * _Nonnull nl,
  const __LAPACK_int * _Nonnull nr,
  const __LAPACK_int * _Nonnull sqre,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nullable bx,
  const __LAPACK_int * _Nonnull ldbx,
  const __LAPACK_int * _Nullable perm,
  const __LAPACK_int * _Nonnull givptr,
  const __LAPACK_int * _Nullable givcol,
  const __LAPACK_int * _Nonnull ldgcol,
  const float * _Nullable givnum,
  const __LAPACK_int * _Nonnull ldgnum,
  const float * _Nullable poles,
  const float * _Nullable difl,
  const float * _Nullable difr,
  const float * _Nullable z,
  const __LAPACK_int * _Nonnull k,
  const float * _Nonnull c,
  const float * _Nonnull s,
  float * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(clals0)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slasda_(
  const __LAPACK_int * _Nonnull icompq,
  const __LAPACK_int * _Nonnull smlsiz,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull sqre,
  float * _Nullable d,
  float * _Nullable e,
  float * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  float * _Nullable vt,
  __LAPACK_int * _Nullable k,
  float * _Nullable difl,
  float * _Nullable difr,
  float * _Nullable z,
  float * _Nullable poles,
  __LAPACK_int * _Nullable givptr,
  __LAPACK_int * _Nullable givcol,
  const __LAPACK_int * _Nonnull ldgcol,
  __LAPACK_int * _Nullable perm,
  float * _Nullable givnum,
  float * _Nullable c,
  float * _Nullable s,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slasda)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ctgsen_(
  const __LAPACK_int * _Nonnull ijob,
  const __LAPACK_bool * _Nonnull wantq,
  const __LAPACK_bool * _Nonnull wantz,
  const __LAPACK_bool * _Nullable select,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nullable alpha,
  __LAPACK_float_complex * _Nullable beta,
  __LAPACK_float_complex * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  __LAPACK_float_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_int * _Nonnull m,
  float * _Nonnull pl,
  float * _Nonnull pr,
  float * _Nullable dif,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ctgsen)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cggsvd_(
  const char * _Nonnull jobu,
  const char * _Nonnull jobv,
  const char * _Nonnull jobq,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull p,
  __LAPACK_int * _Nonnull k,
  __LAPACK_int * _Nonnull l,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nullable alpha,
  float * _Nullable beta,
  __LAPACK_float_complex * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  __LAPACK_float_complex * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  __LAPACK_float_complex * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  __LAPACK_float_complex * _Nonnull work,
  float * _Nullable rwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cggsvd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chbevx_2stage_(
  const char * _Nonnull jobz,
  const char * _Nonnull range,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  __LAPACK_float_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  const __LAPACK_float_complex * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  const float * _Nonnull vl,
  const float * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  const float * _Nonnull abstol,
  __LAPACK_int * _Nonnull m,
  float * _Nullable w,
  __LAPACK_float_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  float * _Nullable rwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nullable ifail,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chbevx_2stage)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chegvx_(
  const __LAPACK_int * _Nonnull itype,
  const char * _Nonnull jobz,
  const char * _Nonnull range,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  const float * _Nonnull vl,
  const float * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  const float * _Nonnull abstol,
  __LAPACK_int * _Nonnull m,
  float * _Nullable w,
  __LAPACK_float_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  float * _Nullable rwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nullable ifail,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chegvx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlasda_(
  const __LAPACK_int * _Nonnull icompq,
  const __LAPACK_int * _Nonnull smlsiz,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull sqre,
  double * _Nullable d,
  double * _Nullable e,
  double * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  double * _Nullable vt,
  __LAPACK_int * _Nullable k,
  double * _Nullable difl,
  double * _Nullable difr,
  double * _Nullable z,
  double * _Nullable poles,
  __LAPACK_int * _Nullable givptr,
  __LAPACK_int * _Nullable givcol,
  const __LAPACK_int * _Nonnull ldgcol,
  __LAPACK_int * _Nullable perm,
  double * _Nullable givnum,
  double * _Nullable c,
  double * _Nullable s,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlasda)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dgbsvx_(
  const char * _Nonnull fact,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  const __LAPACK_int * _Nonnull nrhs,
  double * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  double * _Nullable afb,
  const __LAPACK_int * _Nonnull ldafb,
  __LAPACK_int * _Nullable ipiv,
  char * _Nonnull equed,
  double * _Nullable r,
  double * _Nullable c,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  double * _Nonnull rcond,
  double * _Nullable ferr,
  double * _Nullable berr,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dgbsvx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlals0_(
  const __LAPACK_int * _Nonnull icompq,
  const __LAPACK_int * _Nonnull nl,
  const __LAPACK_int * _Nonnull nr,
  const __LAPACK_int * _Nonnull sqre,
  const __LAPACK_int * _Nonnull nrhs,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nullable bx,
  const __LAPACK_int * _Nonnull ldbx,
  const __LAPACK_int * _Nullable perm,
  const __LAPACK_int * _Nonnull givptr,
  const __LAPACK_int * _Nullable givcol,
  const __LAPACK_int * _Nonnull ldgcol,
  const double * _Nullable givnum,
  const __LAPACK_int * _Nonnull ldgnum,
  const double * _Nullable poles,
  const double * _Nullable difl,
  const double * _Nullable difr,
  const double * _Nullable z,
  const __LAPACK_int * _Nonnull k,
  const double * _Nonnull c,
  const double * _Nonnull s,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlals0)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dggsvp_(
  const char * _Nonnull jobu,
  const char * _Nonnull jobv,
  const char * _Nonnull jobq,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull p,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  const double * _Nonnull tola,
  const double * _Nonnull tolb,
  __LAPACK_int * _Nonnull k,
  __LAPACK_int * _Nonnull l,
  double * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  double * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  double * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  __LAPACK_int * _Nullable iwork,
  double * _Nullable tau,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dggsvp)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dggsvd3_(
  const char * _Nonnull jobu,
  const char * _Nonnull jobv,
  const char * _Nonnull jobq,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull p,
  __LAPACK_int * _Nonnull k,
  __LAPACK_int * _Nonnull l,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nullable alpha,
  double * _Nullable beta,
  double * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  double * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  double * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dggsvd3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sgbsvx_(
  const char * _Nonnull fact,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  const __LAPACK_int * _Nonnull nrhs,
  float * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  float * _Nullable afb,
  const __LAPACK_int * _Nonnull ldafb,
  __LAPACK_int * _Nullable ipiv,
  char * _Nonnull equed,
  float * _Nullable r,
  float * _Nullable c,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  float * _Nonnull rcond,
  float * _Nullable ferr,
  float * _Nullable berr,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sgbsvx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slals0_(
  const __LAPACK_int * _Nonnull icompq,
  const __LAPACK_int * _Nonnull nl,
  const __LAPACK_int * _Nonnull nr,
  const __LAPACK_int * _Nonnull sqre,
  const __LAPACK_int * _Nonnull nrhs,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nullable bx,
  const __LAPACK_int * _Nonnull ldbx,
  const __LAPACK_int * _Nullable perm,
  const __LAPACK_int * _Nonnull givptr,
  const __LAPACK_int * _Nullable givcol,
  const __LAPACK_int * _Nonnull ldgcol,
  const float * _Nullable givnum,
  const __LAPACK_int * _Nonnull ldgnum,
  const float * _Nullable poles,
  const float * _Nullable difl,
  const float * _Nullable difr,
  const float * _Nullable z,
  const __LAPACK_int * _Nonnull k,
  const float * _Nonnull c,
  const float * _Nonnull s,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slals0)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sggsvp_(
  const char * _Nonnull jobu,
  const char * _Nonnull jobv,
  const char * _Nonnull jobq,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull p,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  const float * _Nonnull tola,
  const float * _Nonnull tolb,
  __LAPACK_int * _Nonnull k,
  __LAPACK_int * _Nonnull l,
  float * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  float * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  float * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  __LAPACK_int * _Nullable iwork,
  float * _Nullable tau,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sggsvp)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sggsvd3_(
  const char * _Nonnull jobu,
  const char * _Nonnull jobv,
  const char * _Nonnull jobq,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull p,
  __LAPACK_int * _Nonnull k,
  __LAPACK_int * _Nonnull l,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nullable alpha,
  float * _Nullable beta,
  float * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  float * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  float * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sggsvd3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zgbsvx_(
  const char * _Nonnull fact,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kl,
  const __LAPACK_int * _Nonnull ku,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_double_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  __LAPACK_double_complex * _Nullable afb,
  const __LAPACK_int * _Nonnull ldafb,
  __LAPACK_int * _Nullable ipiv,
  char * _Nonnull equed,
  double * _Nullable r,
  double * _Nullable c,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nullable x,
  const __LAPACK_int * _Nonnull ldx,
  double * _Nonnull rcond,
  double * _Nullable ferr,
  double * _Nullable berr,
  __LAPACK_double_complex * _Nonnull work,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zgbsvx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlaqr5_(
  const __LAPACK_bool * _Nonnull wantt,
  const __LAPACK_bool * _Nonnull wantz,
  const __LAPACK_int * _Nonnull kacc22,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ktop,
  const __LAPACK_int * _Nonnull kbot,
  const __LAPACK_int * _Nonnull nshfts,
  const __LAPACK_double_complex * _Nullable s,
  __LAPACK_double_complex * _Nullable h,
  const __LAPACK_int * _Nonnull ldh,
  const __LAPACK_int * _Nonnull iloz,
  const __LAPACK_int * _Nonnull ihiz,
  __LAPACK_double_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_double_complex * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  __LAPACK_double_complex * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  const __LAPACK_int * _Nonnull nv,
  __LAPACK_double_complex * _Nullable wv,
  const __LAPACK_int * _Nonnull ldwv,
  const __LAPACK_int * _Nonnull nh,
  __LAPACK_double_complex * _Nullable wh,
  const __LAPACK_int * _Nonnull ldwh)
__LAPACK_ALIAS(zlaqr5)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlals0_(
  const __LAPACK_int * _Nonnull icompq,
  const __LAPACK_int * _Nonnull nl,
  const __LAPACK_int * _Nonnull nr,
  const __LAPACK_int * _Nonnull sqre,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nullable bx,
  const __LAPACK_int * _Nonnull ldbx,
  const __LAPACK_int * _Nullable perm,
  const __LAPACK_int * _Nonnull givptr,
  const __LAPACK_int * _Nullable givcol,
  const __LAPACK_int * _Nonnull ldgcol,
  const double * _Nullable givnum,
  const __LAPACK_int * _Nonnull ldgnum,
  const double * _Nullable poles,
  const double * _Nullable difl,
  const double * _Nullable difr,
  const double * _Nullable z,
  const __LAPACK_int * _Nonnull k,
  const double * _Nonnull c,
  const double * _Nonnull s,
  double * _Nullable rwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zlals0)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ztgsen_(
  const __LAPACK_int * _Nonnull ijob,
  const __LAPACK_bool * _Nonnull wantq,
  const __LAPACK_bool * _Nonnull wantz,
  const __LAPACK_bool * _Nullable select,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nullable alpha,
  __LAPACK_double_complex * _Nullable beta,
  __LAPACK_double_complex * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  __LAPACK_double_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_int * _Nonnull m,
  double * _Nonnull pl,
  double * _Nonnull pr,
  double * _Nullable dif,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ztgsen)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zggsvd_(
  const char * _Nonnull jobu,
  const char * _Nonnull jobv,
  const char * _Nonnull jobq,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull p,
  __LAPACK_int * _Nonnull k,
  __LAPACK_int * _Nonnull l,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nullable alpha,
  double * _Nullable beta,
  __LAPACK_double_complex * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  __LAPACK_double_complex * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  __LAPACK_double_complex * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  __LAPACK_double_complex * _Nonnull work,
  double * _Nullable rwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zggsvd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhbevx_2stage_(
  const char * _Nonnull jobz,
  const char * _Nonnull range,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull kd,
  __LAPACK_double_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  const __LAPACK_double_complex * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  const double * _Nonnull vl,
  const double * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  const double * _Nonnull abstol,
  __LAPACK_int * _Nonnull m,
  double * _Nullable w,
  __LAPACK_double_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  double * _Nullable rwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nullable ifail,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhbevx_2stage)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhegvx_(
  const __LAPACK_int * _Nonnull itype,
  const char * _Nonnull jobz,
  const char * _Nonnull range,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  const double * _Nonnull vl,
  const double * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  const double * _Nonnull abstol,
  __LAPACK_int * _Nonnull m,
  double * _Nullable w,
  __LAPACK_double_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  double * _Nullable rwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nullable ifail,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhegvx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
claqr2_(
  const __LAPACK_bool * _Nonnull wantt,
  const __LAPACK_bool * _Nonnull wantz,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ktop,
  const __LAPACK_int * _Nonnull kbot,
  const __LAPACK_int * _Nonnull nw,
  __LAPACK_float_complex * _Nullable h,
  const __LAPACK_int * _Nonnull ldh,
  const __LAPACK_int * _Nonnull iloz,
  const __LAPACK_int * _Nonnull ihiz,
  __LAPACK_float_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_int * _Nonnull ns,
  __LAPACK_int * _Nonnull nd,
  __LAPACK_float_complex * _Nullable sh,
  __LAPACK_float_complex * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  const __LAPACK_int * _Nonnull nh,
  __LAPACK_float_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  const __LAPACK_int * _Nonnull nv,
  __LAPACK_float_complex * _Nullable wv,
  const __LAPACK_int * _Nonnull ldwv,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork)
__LAPACK_ALIAS(claqr2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
claqr3_(
  const __LAPACK_bool * _Nonnull wantt,
  const __LAPACK_bool * _Nonnull wantz,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ktop,
  const __LAPACK_int * _Nonnull kbot,
  const __LAPACK_int * _Nonnull nw,
  __LAPACK_float_complex * _Nullable h,
  const __LAPACK_int * _Nonnull ldh,
  const __LAPACK_int * _Nonnull iloz,
  const __LAPACK_int * _Nonnull ihiz,
  __LAPACK_float_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_int * _Nonnull ns,
  __LAPACK_int * _Nonnull nd,
  __LAPACK_float_complex * _Nullable sh,
  __LAPACK_float_complex * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  const __LAPACK_int * _Nonnull nh,
  __LAPACK_float_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  const __LAPACK_int * _Nonnull nv,
  __LAPACK_float_complex * _Nullable wv,
  const __LAPACK_int * _Nonnull ldwv,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork)
__LAPACK_ALIAS(claqr3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cggsvp_(
  const char * _Nonnull jobu,
  const char * _Nonnull jobv,
  const char * _Nonnull jobq,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull p,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  const float * _Nonnull tola,
  const float * _Nonnull tolb,
  __LAPACK_int * _Nonnull k,
  __LAPACK_int * _Nonnull l,
  __LAPACK_float_complex * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  __LAPACK_float_complex * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  __LAPACK_float_complex * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  __LAPACK_int * _Nullable iwork,
  float * _Nullable rwork,
  __LAPACK_float_complex * _Nullable tau,
  __LAPACK_float_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cggsvp)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ctgsja_(
  const char * _Nonnull jobu,
  const char * _Nonnull jobv,
  const char * _Nonnull jobq,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull p,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull l,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  const float * _Nonnull tola,
  const float * _Nonnull tolb,
  float * _Nullable alpha,
  float * _Nullable beta,
  __LAPACK_float_complex * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  __LAPACK_float_complex * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  __LAPACK_float_complex * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  __LAPACK_float_complex * _Nonnull work,
  __LAPACK_int * _Nonnull ncycle,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ctgsja)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cggsvd3_(
  const char * _Nonnull jobu,
  const char * _Nonnull jobv,
  const char * _Nonnull jobq,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull p,
  __LAPACK_int * _Nonnull k,
  __LAPACK_int * _Nonnull l,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nullable alpha,
  float * _Nullable beta,
  __LAPACK_float_complex * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  __LAPACK_float_complex * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  __LAPACK_float_complex * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  float * _Nullable rwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cggsvd3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
clarrv_(
  const __LAPACK_int * _Nonnull n,
  const float * _Nonnull vl,
  const float * _Nonnull vu,
  float * _Nullable d,
  float * _Nullable l,
  const float * _Nonnull pivmin,
  const __LAPACK_int * _Nullable isplit,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull dol,
  const __LAPACK_int * _Nonnull dou,
  const float * _Nonnull minrgp,
  float * _Nonnull rtol1,
  float * _Nonnull rtol2,
  float * _Nullable w,
  float * _Nullable werr,
  float * _Nullable wgap,
  const __LAPACK_int * _Nullable iblock,
  const __LAPACK_int * _Nullable indexw,
  const float * _Nullable gers,
  __LAPACK_float_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_int * _Nullable isuppz,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(clarrv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slarrd_(
  const char * _Nonnull range,
  const char * _Nonnull order,
  const __LAPACK_int * _Nonnull n,
  const float * _Nonnull vl,
  const float * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  const float * _Nullable gers,
  const float * _Nonnull reltol,
  const float * _Nullable d,
  const float * _Nullable e,
  const float * _Nullable e2,
  const float * _Nonnull pivmin,
  const __LAPACK_int * _Nonnull nsplit,
  const __LAPACK_int * _Nullable isplit,
  __LAPACK_int * _Nonnull m,
  float * _Nullable w,
  float * _Nullable werr,
  float * _Nonnull wl,
  float * _Nonnull wu,
  __LAPACK_int * _Nullable iblock,
  __LAPACK_int * _Nullable indexw,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slarrd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slarre_(
  const char * _Nonnull range,
  const __LAPACK_int * _Nonnull n,
  float * _Nonnull vl,
  float * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  float * _Nullable d,
  float * _Nullable e,
  float * _Nullable e2,
  const float * _Nonnull rtol1,
  const float * _Nonnull rtol2,
  const float * _Nonnull spltol,
  __LAPACK_int * _Nonnull nsplit,
  __LAPACK_int * _Nullable isplit,
  __LAPACK_int * _Nonnull m,
  float * _Nullable w,
  float * _Nullable werr,
  float * _Nullable wgap,
  __LAPACK_int * _Nullable iblock,
  __LAPACK_int * _Nullable indexw,
  float * _Nullable gers,
  float * _Nonnull pivmin,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slarre)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));


void
dlaqr5_(
  const __LAPACK_bool * _Nonnull wantt,
  const __LAPACK_bool * _Nonnull wantz,
  const __LAPACK_int * _Nonnull kacc22,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ktop,
  const __LAPACK_int * _Nonnull kbot,
  const __LAPACK_int * _Nonnull nshfts,
  double * _Nullable sr,
  double * _Nullable si,
  double * _Nullable h,
  const __LAPACK_int * _Nonnull ldh,
  const __LAPACK_int * _Nonnull iloz,
  const __LAPACK_int * _Nonnull ihiz,
  double * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  double * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  double * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  const __LAPACK_int * _Nonnull nv,
  double * _Nullable wv,
  const __LAPACK_int * _Nonnull ldwv,
  const __LAPACK_int * _Nonnull nh,
  double * _Nullable wh,
  const __LAPACK_int * _Nonnull ldwh)
__LAPACK_ALIAS(dlaqr5)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));


void
dtgsen_(
  const __LAPACK_int * _Nonnull ijob,
  const __LAPACK_bool * _Nonnull wantq,
  const __LAPACK_bool * _Nonnull wantz,
  const __LAPACK_bool * _Nullable select,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nullable alphar,
  double * _Nullable alphai,
  double * _Nullable beta,
  double * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  double * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_int * _Nonnull m,
  double * _Nonnull pl,
  double * _Nonnull pr,
  double * _Nullable dif,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dtgsen)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dtgsja_(
  const char * _Nonnull jobu,
  const char * _Nonnull jobv,
  const char * _Nonnull jobq,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull p,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull l,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  const double * _Nonnull tola,
  const double * _Nonnull tolb,
  double * _Nullable alpha,
  double * _Nullable beta,
  double * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  double * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  double * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  double * _Nonnull work,
  __LAPACK_int * _Nonnull ncycle,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dtgsja)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dggsvp3_(
  const char * _Nonnull jobu,
  const char * _Nonnull jobv,
  const char * _Nonnull jobq,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull p,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  const double * _Nonnull tola,
  const double * _Nonnull tolb,
  __LAPACK_int * _Nonnull k,
  __LAPACK_int * _Nonnull l,
  double * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  double * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  double * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  __LAPACK_int * _Nullable iwork,
  double * _Nullable tau,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dggsvp3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlarrd_(
  const char * _Nonnull range,
  const char * _Nonnull order,
  const __LAPACK_int * _Nonnull n,
  const double * _Nonnull vl,
  const double * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  const double * _Nullable gers,
  const double * _Nonnull reltol,
  const double * _Nullable d,
  const double * _Nullable e,
  const double * _Nullable e2,
  const double * _Nonnull pivmin,
  const __LAPACK_int * _Nonnull nsplit,
  const __LAPACK_int * _Nullable isplit,
  __LAPACK_int * _Nonnull m,
  double * _Nullable w,
  double * _Nullable werr,
  double * _Nonnull wl,
  double * _Nonnull wu,
  __LAPACK_int * _Nullable iblock,
  __LAPACK_int * _Nullable indexw,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlarrd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlarre_(
  const char * _Nonnull range,
  const __LAPACK_int * _Nonnull n,
  double * _Nonnull vl,
  double * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  double * _Nullable d,
  double * _Nullable e,
  double * _Nullable e2,
  const double * _Nonnull rtol1,
  const double * _Nonnull rtol2,
  const double * _Nonnull spltol,
  __LAPACK_int * _Nonnull nsplit,
  __LAPACK_int * _Nullable isplit,
  __LAPACK_int * _Nonnull m,
  double * _Nullable w,
  double * _Nullable werr,
  double * _Nullable wgap,
  __LAPACK_int * _Nullable iblock,
  __LAPACK_int * _Nullable indexw,
  double * _Nullable gers,
  double * _Nonnull pivmin,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlarre)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlarrv_(
  const __LAPACK_int * _Nonnull n,
  const double * _Nonnull vl,
  const double * _Nonnull vu,
  double * _Nullable d,
  double * _Nullable l,
  const double * _Nonnull pivmin,
  const __LAPACK_int * _Nullable isplit,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull dol,
  const __LAPACK_int * _Nonnull dou,
  const double * _Nonnull minrgp,
  double * _Nonnull rtol1,
  double * _Nonnull rtol2,
  double * _Nullable w,
  double * _Nullable werr,
  double * _Nullable wgap,
  const __LAPACK_int * _Nullable iblock,
  const __LAPACK_int * _Nullable indexw,
  const double * _Nullable gers,
  double * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_int * _Nullable isuppz,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlarrv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));


void
dsbgvx_(
  const char * _Nonnull jobz,
  const char * _Nonnull range,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ka,
  const __LAPACK_int * _Nonnull kb,
  double * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  double * _Nullable bb,
  const __LAPACK_int * _Nonnull ldbb,
  double * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  const double * _Nonnull vl,
  const double * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  const double * _Nonnull abstol,
  __LAPACK_int * _Nonnull m,
  double * _Nullable w,
  double * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nullable ifail,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dsbgvx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slaqr5_(
  const __LAPACK_bool * _Nonnull wantt,
  const __LAPACK_bool * _Nonnull wantz,
  const __LAPACK_int * _Nonnull kacc22,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ktop,
  const __LAPACK_int * _Nonnull kbot,
  const __LAPACK_int * _Nonnull nshfts,
  float * _Nullable sr,
  float * _Nullable si,
  float * _Nullable h,
  const __LAPACK_int * _Nonnull ldh,
  const __LAPACK_int * _Nonnull iloz,
  const __LAPACK_int * _Nonnull ihiz,
  float * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  float * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  float * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  const __LAPACK_int * _Nonnull nv,
  float * _Nullable wv,
  const __LAPACK_int * _Nonnull ldwv,
  const __LAPACK_int * _Nonnull nh,
  float * _Nullable wh,
  const __LAPACK_int * _Nonnull ldwh)
__LAPACK_ALIAS(slaqr5)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));


void
stgsen_(
  const __LAPACK_int * _Nonnull ijob,
  const __LAPACK_bool * _Nonnull wantq,
  const __LAPACK_bool * _Nonnull wantz,
  const __LAPACK_bool * _Nullable select,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nullable alphar,
  float * _Nullable alphai,
  float * _Nullable beta,
  float * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  float * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_int * _Nonnull m,
  float * _Nonnull pl,
  float * _Nonnull pr,
  float * _Nullable dif,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(stgsen)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
stgsja_(
  const char * _Nonnull jobu,
  const char * _Nonnull jobv,
  const char * _Nonnull jobq,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull p,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull l,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  const float * _Nonnull tola,
  const float * _Nonnull tolb,
  float * _Nullable alpha,
  float * _Nullable beta,
  float * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  float * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  float * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  float * _Nonnull work,
  __LAPACK_int * _Nonnull ncycle,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(stgsja)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sggsvp3_(
  const char * _Nonnull jobu,
  const char * _Nonnull jobv,
  const char * _Nonnull jobq,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull p,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  const float * _Nonnull tola,
  const float * _Nonnull tolb,
  __LAPACK_int * _Nonnull k,
  __LAPACK_int * _Nonnull l,
  float * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  float * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  float * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  __LAPACK_int * _Nullable iwork,
  float * _Nullable tau,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sggsvp3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slarrv_(
  const __LAPACK_int * _Nonnull n,
  const float * _Nonnull vl,
  const float * _Nonnull vu,
  float * _Nullable d,
  float * _Nullable l,
  const float * _Nonnull pivmin,
  const __LAPACK_int * _Nullable isplit,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull dol,
  const __LAPACK_int * _Nonnull dou,
  const float * _Nonnull minrgp,
  float * _Nonnull rtol1,
  float * _Nonnull rtol2,
  float * _Nullable w,
  float * _Nullable werr,
  float * _Nullable wgap,
  const __LAPACK_int * _Nullable iblock,
  const __LAPACK_int * _Nullable indexw,
  const float * _Nullable gers,
  float * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_int * _Nullable isuppz,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slarrv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));


void
ssbgvx_(
  const char * _Nonnull jobz,
  const char * _Nonnull range,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ka,
  const __LAPACK_int * _Nonnull kb,
  float * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  float * _Nullable bb,
  const __LAPACK_int * _Nonnull ldbb,
  float * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  const float * _Nonnull vl,
  const float * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  const float * _Nonnull abstol,
  __LAPACK_int * _Nonnull m,
  float * _Nullable w,
  float * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nullable ifail,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ssbgvx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlaqr2_(
  const __LAPACK_bool * _Nonnull wantt,
  const __LAPACK_bool * _Nonnull wantz,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ktop,
  const __LAPACK_int * _Nonnull kbot,
  const __LAPACK_int * _Nonnull nw,
  __LAPACK_double_complex * _Nullable h,
  const __LAPACK_int * _Nonnull ldh,
  const __LAPACK_int * _Nonnull iloz,
  const __LAPACK_int * _Nonnull ihiz,
  __LAPACK_double_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_int * _Nonnull ns,
  __LAPACK_int * _Nonnull nd,
  __LAPACK_double_complex * _Nullable sh,
  __LAPACK_double_complex * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  const __LAPACK_int * _Nonnull nh,
  __LAPACK_double_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  const __LAPACK_int * _Nonnull nv,
  __LAPACK_double_complex * _Nullable wv,
  const __LAPACK_int * _Nonnull ldwv,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork)
__LAPACK_ALIAS(zlaqr2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlaqr3_(
  const __LAPACK_bool * _Nonnull wantt,
  const __LAPACK_bool * _Nonnull wantz,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ktop,
  const __LAPACK_int * _Nonnull kbot,
  const __LAPACK_int * _Nonnull nw,
  __LAPACK_double_complex * _Nullable h,
  const __LAPACK_int * _Nonnull ldh,
  const __LAPACK_int * _Nonnull iloz,
  const __LAPACK_int * _Nonnull ihiz,
  __LAPACK_double_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_int * _Nonnull ns,
  __LAPACK_int * _Nonnull nd,
  __LAPACK_double_complex * _Nullable sh,
  __LAPACK_double_complex * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  const __LAPACK_int * _Nonnull nh,
  __LAPACK_double_complex * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  const __LAPACK_int * _Nonnull nv,
  __LAPACK_double_complex * _Nullable wv,
  const __LAPACK_int * _Nonnull ldwv,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork)
__LAPACK_ALIAS(zlaqr3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zggsvp_(
  const char * _Nonnull jobu,
  const char * _Nonnull jobv,
  const char * _Nonnull jobq,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull p,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  const double * _Nonnull tola,
  const double * _Nonnull tolb,
  __LAPACK_int * _Nonnull k,
  __LAPACK_int * _Nonnull l,
  __LAPACK_double_complex * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  __LAPACK_double_complex * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  __LAPACK_double_complex * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  __LAPACK_int * _Nullable iwork,
  double * _Nullable rwork,
  __LAPACK_double_complex * _Nullable tau,
  __LAPACK_double_complex * _Nonnull work,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zggsvp)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
ztgsja_(
  const char * _Nonnull jobu,
  const char * _Nonnull jobv,
  const char * _Nonnull jobq,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull p,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull k,
  const __LAPACK_int * _Nonnull l,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  const double * _Nonnull tola,
  const double * _Nonnull tolb,
  double * _Nullable alpha,
  double * _Nullable beta,
  __LAPACK_double_complex * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  __LAPACK_double_complex * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  __LAPACK_double_complex * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  __LAPACK_double_complex * _Nonnull work,
  __LAPACK_int * _Nonnull ncycle,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(ztgsja)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zggsvd3_(
  const char * _Nonnull jobu,
  const char * _Nonnull jobv,
  const char * _Nonnull jobq,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull p,
  __LAPACK_int * _Nonnull k,
  __LAPACK_int * _Nonnull l,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nullable alpha,
  double * _Nullable beta,
  __LAPACK_double_complex * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  __LAPACK_double_complex * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  __LAPACK_double_complex * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  double * _Nullable rwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zggsvd3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlarrv_(
  const __LAPACK_int * _Nonnull n,
  const double * _Nonnull vl,
  const double * _Nonnull vu,
  double * _Nullable d,
  double * _Nullable l,
  const double * _Nonnull pivmin,
  const __LAPACK_int * _Nullable isplit,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull dol,
  const __LAPACK_int * _Nonnull dou,
  const double * _Nonnull minrgp,
  double * _Nonnull rtol1,
  double * _Nonnull rtol2,
  double * _Nullable w,
  double * _Nullable werr,
  double * _Nullable wgap,
  const __LAPACK_int * _Nullable iblock,
  const __LAPACK_int * _Nullable indexw,
  const double * _Nullable gers,
  __LAPACK_double_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_int * _Nullable isuppz,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zlarrv)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
clalsa_(
  const __LAPACK_int * _Nonnull icompq,
  const __LAPACK_int * _Nonnull smlsiz,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nullable bx,
  const __LAPACK_int * _Nonnull ldbx,
  const float * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  const float * _Nullable vt,
  const __LAPACK_int * _Nullable k,
  const float * _Nullable difl,
  const float * _Nullable difr,
  const float * _Nullable z,
  const float * _Nullable poles,
  const __LAPACK_int * _Nullable givptr,
  const __LAPACK_int * _Nullable givcol,
  const __LAPACK_int * _Nonnull ldgcol,
  const __LAPACK_int * _Nullable perm,
  const float * _Nullable givnum,
  const float * _Nullable c,
  const float * _Nullable s,
  float * _Nullable rwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(clalsa)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slasd6_(
  const __LAPACK_int * _Nonnull icompq,
  const __LAPACK_int * _Nonnull nl,
  const __LAPACK_int * _Nonnull nr,
  const __LAPACK_int * _Nonnull sqre,
  float * _Nullable d,
  float * _Nullable vf,
  float * _Nullable vl,
  float * _Nonnull alpha,
  float * _Nonnull beta,
  __LAPACK_int * _Nullable idxq,
  __LAPACK_int * _Nullable perm,
  __LAPACK_int * _Nonnull givptr,
  __LAPACK_int * _Nullable givcol,
  const __LAPACK_int * _Nonnull ldgcol,
  float * _Nullable givnum,
  const __LAPACK_int * _Nonnull ldgnum,
  float * _Nullable poles,
  float * _Nullable difl,
  float * _Nullable difr,
  float * _Nullable z,
  __LAPACK_int * _Nonnull k,
  float * _Nonnull c,
  float * _Nonnull s,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slasd6)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cggesx_(
  const char * _Nonnull jobvsl,
  const char * _Nonnull jobvsr,
  const char * _Nonnull sort,
  __LAPACK_cgges_func_ptr selctg,
  const char * _Nonnull sense,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull sdim,
  __LAPACK_float_complex * _Nullable alpha,
  __LAPACK_float_complex * _Nullable beta,
  __LAPACK_float_complex * _Nullable vsl,
  const __LAPACK_int * _Nonnull ldvsl,
  __LAPACK_float_complex * _Nullable vsr,
  const __LAPACK_int * _Nonnull ldvsr,
  float * _Nullable rconde,
  float * _Nullable rcondv,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  float * _Nullable rwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_bool * _Nullable bwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cggesx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cggsvp3_(
  const char * _Nonnull jobu,
  const char * _Nonnull jobv,
  const char * _Nonnull jobq,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull p,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  const float * _Nonnull tola,
  const float * _Nonnull tolb,
  __LAPACK_int * _Nonnull k,
  __LAPACK_int * _Nonnull l,
  __LAPACK_float_complex * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  __LAPACK_float_complex * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  __LAPACK_float_complex * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  __LAPACK_int * _Nullable iwork,
  float * _Nullable rwork,
  __LAPACK_float_complex * _Nullable tau,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cggsvp3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
chbgvx_(
  const char * _Nonnull jobz,
  const char * _Nonnull range,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ka,
  const __LAPACK_int * _Nonnull kb,
  __LAPACK_float_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  __LAPACK_float_complex * _Nullable bb,
  const __LAPACK_int * _Nonnull ldbb,
  __LAPACK_float_complex * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  const float * _Nonnull vl,
  const float * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  const float * _Nonnull abstol,
  __LAPACK_int * _Nonnull m,
  float * _Nullable w,
  __LAPACK_float_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_float_complex * _Nonnull work,
  float * _Nullable rwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nullable ifail,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(chbgvx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlasd6_(
  const __LAPACK_int * _Nonnull icompq,
  const __LAPACK_int * _Nonnull nl,
  const __LAPACK_int * _Nonnull nr,
  const __LAPACK_int * _Nonnull sqre,
  double * _Nullable d,
  double * _Nullable vf,
  double * _Nullable vl,
  double * _Nonnull alpha,
  double * _Nonnull beta,
  __LAPACK_int * _Nullable idxq,
  __LAPACK_int * _Nullable perm,
  __LAPACK_int * _Nonnull givptr,
  __LAPACK_int * _Nullable givcol,
  const __LAPACK_int * _Nonnull ldgcol,
  double * _Nullable givnum,
  const __LAPACK_int * _Nonnull ldgnum,
  double * _Nullable poles,
  double * _Nullable difl,
  double * _Nullable difr,
  double * _Nullable z,
  __LAPACK_int * _Nonnull k,
  double * _Nonnull c,
  double * _Nonnull s,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlasd6)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlaqr2_(
  const __LAPACK_bool * _Nonnull wantt,
  const __LAPACK_bool * _Nonnull wantz,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ktop,
  const __LAPACK_int * _Nonnull kbot,
  const __LAPACK_int * _Nonnull nw,
  double * _Nullable h,
  const __LAPACK_int * _Nonnull ldh,
  const __LAPACK_int * _Nonnull iloz,
  const __LAPACK_int * _Nonnull ihiz,
  double * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_int * _Nonnull ns,
  __LAPACK_int * _Nonnull nd,
  double * _Nullable sr,
  double * _Nullable si,
  double * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  const __LAPACK_int * _Nonnull nh,
  double * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  const __LAPACK_int * _Nonnull nv,
  double * _Nullable wv,
  const __LAPACK_int * _Nonnull ldwv,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork)
__LAPACK_ALIAS(dlaqr2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlaqr3_(
  const __LAPACK_bool * _Nonnull wantt,
  const __LAPACK_bool * _Nonnull wantz,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ktop,
  const __LAPACK_int * _Nonnull kbot,
  const __LAPACK_int * _Nonnull nw,
  double * _Nullable h,
  const __LAPACK_int * _Nonnull ldh,
  const __LAPACK_int * _Nonnull iloz,
  const __LAPACK_int * _Nonnull ihiz,
  double * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_int * _Nonnull ns,
  __LAPACK_int * _Nonnull nd,
  double * _Nullable sr,
  double * _Nullable si,
  double * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  const __LAPACK_int * _Nonnull nh,
  double * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  const __LAPACK_int * _Nonnull nv,
  double * _Nullable wv,
  const __LAPACK_int * _Nonnull ldwv,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork)
__LAPACK_ALIAS(dlaqr3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlalsa_(
  const __LAPACK_int * _Nonnull icompq,
  const __LAPACK_int * _Nonnull smlsiz,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nullable bx,
  const __LAPACK_int * _Nonnull ldbx,
  const double * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  const double * _Nullable vt,
  const __LAPACK_int * _Nullable k,
  const double * _Nullable difl,
  const double * _Nullable difr,
  const double * _Nullable z,
  const double * _Nullable poles,
  const __LAPACK_int * _Nullable givptr,
  const __LAPACK_int * _Nullable givcol,
  const __LAPACK_int * _Nonnull ldgcol,
  const __LAPACK_int * _Nullable perm,
  const double * _Nullable givnum,
  const double * _Nullable c,
  const double * _Nullable s,
  double * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlalsa)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dggesx_(
  const char * _Nonnull jobvsl,
  const char * _Nonnull jobvsr,
  const char * _Nonnull sort,
  __LAPACK_dgges_func_ptr selctg,
  const char * _Nonnull sense,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull sdim,
  double * _Nullable alphar,
  double * _Nullable alphai,
  double * _Nullable beta,
  double * _Nullable vsl,
  const __LAPACK_int * _Nonnull ldvsl,
  double * _Nullable vsr,
  const __LAPACK_int * _Nonnull ldvsr,
  double * _Nullable rconde,
  double * _Nullable rcondv,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_bool * _Nullable bwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dggesx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slaqr2_(
  const __LAPACK_bool * _Nonnull wantt,
  const __LAPACK_bool * _Nonnull wantz,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ktop,
  const __LAPACK_int * _Nonnull kbot,
  const __LAPACK_int * _Nonnull nw,
  float * _Nullable h,
  const __LAPACK_int * _Nonnull ldh,
  const __LAPACK_int * _Nonnull iloz,
  const __LAPACK_int * _Nonnull ihiz,
  float * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_int * _Nonnull ns,
  __LAPACK_int * _Nonnull nd,
  float * _Nullable sr,
  float * _Nullable si,
  float * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  const __LAPACK_int * _Nonnull nh,
  float * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  const __LAPACK_int * _Nonnull nv,
  float * _Nullable wv,
  const __LAPACK_int * _Nonnull ldwv,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork)
__LAPACK_ALIAS(slaqr2)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slaqr3_(
  const __LAPACK_bool * _Nonnull wantt,
  const __LAPACK_bool * _Nonnull wantz,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ktop,
  const __LAPACK_int * _Nonnull kbot,
  const __LAPACK_int * _Nonnull nw,
  float * _Nullable h,
  const __LAPACK_int * _Nonnull ldh,
  const __LAPACK_int * _Nonnull iloz,
  const __LAPACK_int * _Nonnull ihiz,
  float * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_int * _Nonnull ns,
  __LAPACK_int * _Nonnull nd,
  float * _Nullable sr,
  float * _Nullable si,
  float * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  const __LAPACK_int * _Nonnull nh,
  float * _Nullable t,
  const __LAPACK_int * _Nonnull ldt,
  const __LAPACK_int * _Nonnull nv,
  float * _Nullable wv,
  const __LAPACK_int * _Nonnull ldwv,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork)
__LAPACK_ALIAS(slaqr3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slalsa_(
  const __LAPACK_int * _Nonnull icompq,
  const __LAPACK_int * _Nonnull smlsiz,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nullable bx,
  const __LAPACK_int * _Nonnull ldbx,
  const float * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  const float * _Nullable vt,
  const __LAPACK_int * _Nullable k,
  const float * _Nullable difl,
  const float * _Nullable difr,
  const float * _Nullable z,
  const float * _Nullable poles,
  const __LAPACK_int * _Nullable givptr,
  const __LAPACK_int * _Nullable givcol,
  const __LAPACK_int * _Nonnull ldgcol,
  const __LAPACK_int * _Nullable perm,
  const float * _Nullable givnum,
  const float * _Nullable c,
  const float * _Nullable s,
  float * _Nonnull work,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slalsa)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sggesx_(
  const char * _Nonnull jobvsl,
  const char * _Nonnull jobvsr,
  const char * _Nonnull sort,
  __LAPACK_sgges_func_ptr selctg,
  const char * _Nonnull sense,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull sdim,
  float * _Nullable alphar,
  float * _Nullable alphai,
  float * _Nullable beta,
  float * _Nullable vsl,
  const __LAPACK_int * _Nonnull ldvsl,
  float * _Nullable vsr,
  const __LAPACK_int * _Nonnull ldvsr,
  float * _Nullable rconde,
  float * _Nullable rcondv,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_bool * _Nullable bwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sggesx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zlalsa_(
  const __LAPACK_int * _Nonnull icompq,
  const __LAPACK_int * _Nonnull smlsiz,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull nrhs,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nullable bx,
  const __LAPACK_int * _Nonnull ldbx,
  const double * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  const double * _Nullable vt,
  const __LAPACK_int * _Nullable k,
  const double * _Nullable difl,
  const double * _Nullable difr,
  const double * _Nullable z,
  const double * _Nullable poles,
  const __LAPACK_int * _Nullable givptr,
  const __LAPACK_int * _Nullable givcol,
  const __LAPACK_int * _Nonnull ldgcol,
  const __LAPACK_int * _Nullable perm,
  const double * _Nullable givnum,
  const double * _Nullable c,
  const double * _Nullable s,
  double * _Nullable rwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zlalsa)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zggesx_(
  const char * _Nonnull jobvsl,
  const char * _Nonnull jobvsr,
  const char * _Nonnull sort,
  __LAPACK_zgges_func_ptr selctg,
  const char * _Nonnull sense,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_int * _Nonnull sdim,
  __LAPACK_double_complex * _Nullable alpha,
  __LAPACK_double_complex * _Nullable beta,
  __LAPACK_double_complex * _Nullable vsl,
  const __LAPACK_int * _Nonnull ldvsl,
  __LAPACK_double_complex * _Nullable vsr,
  const __LAPACK_int * _Nonnull ldvsr,
  double * _Nullable rconde,
  double * _Nullable rcondv,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  double * _Nullable rwork,
  __LAPACK_int * _Nullable iwork,
  const __LAPACK_int * _Nonnull liwork,
  __LAPACK_bool * _Nullable bwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zggesx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zggsvp3_(
  const char * _Nonnull jobu,
  const char * _Nonnull jobv,
  const char * _Nonnull jobq,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull p,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  const double * _Nonnull tola,
  const double * _Nonnull tolb,
  __LAPACK_int * _Nonnull k,
  __LAPACK_int * _Nonnull l,
  __LAPACK_double_complex * _Nullable u,
  const __LAPACK_int * _Nonnull ldu,
  __LAPACK_double_complex * _Nullable v,
  const __LAPACK_int * _Nonnull ldv,
  __LAPACK_double_complex * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  __LAPACK_int * _Nullable iwork,
  double * _Nullable rwork,
  __LAPACK_double_complex * _Nullable tau,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zggsvp3)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zhbgvx_(
  const char * _Nonnull jobz,
  const char * _Nonnull range,
  const char * _Nonnull uplo,
  const __LAPACK_int * _Nonnull n,
  const __LAPACK_int * _Nonnull ka,
  const __LAPACK_int * _Nonnull kb,
  __LAPACK_double_complex * _Nullable ab,
  const __LAPACK_int * _Nonnull ldab,
  __LAPACK_double_complex * _Nullable bb,
  const __LAPACK_int * _Nonnull ldbb,
  __LAPACK_double_complex * _Nullable q,
  const __LAPACK_int * _Nonnull ldq,
  const double * _Nonnull vl,
  const double * _Nonnull vu,
  const __LAPACK_int * _Nonnull il,
  const __LAPACK_int * _Nonnull iu,
  const double * _Nonnull abstol,
  __LAPACK_int * _Nonnull m,
  double * _Nullable w,
  __LAPACK_double_complex * _Nullable z,
  const __LAPACK_int * _Nonnull ldz,
  __LAPACK_double_complex * _Nonnull work,
  double * _Nullable rwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nullable ifail,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zhbgvx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
slasd7_(
  const __LAPACK_int * _Nonnull icompq,
  const __LAPACK_int * _Nonnull nl,
  const __LAPACK_int * _Nonnull nr,
  const __LAPACK_int * _Nonnull sqre,
  __LAPACK_int * _Nonnull k,
  float * _Nullable d,
  float * _Nullable z,
  float * _Nullable zw,
  float * _Nullable vf,
  float * _Nullable vfw,
  float * _Nullable vl,
  float * _Nullable vlw,
  const float * _Nonnull alpha,
  const float * _Nonnull beta,
  float * _Nullable dsigma,
  __LAPACK_int * _Nullable idx,
  __LAPACK_int * _Nullable idxp,
  __LAPACK_int * _Nullable idxq,
  __LAPACK_int * _Nullable perm,
  __LAPACK_int * _Nonnull givptr,
  __LAPACK_int * _Nullable givcol,
  const __LAPACK_int * _Nonnull ldgcol,
  float * _Nullable givnum,
  const __LAPACK_int * _Nonnull ldgnum,
  float * _Nonnull c,
  float * _Nonnull s,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(slasd7)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dlasd7_(
  const __LAPACK_int * _Nonnull icompq,
  const __LAPACK_int * _Nonnull nl,
  const __LAPACK_int * _Nonnull nr,
  const __LAPACK_int * _Nonnull sqre,
  __LAPACK_int * _Nonnull k,
  double * _Nullable d,
  double * _Nullable z,
  double * _Nullable zw,
  double * _Nullable vf,
  double * _Nullable vfw,
  double * _Nullable vl,
  double * _Nullable vlw,
  const double * _Nonnull alpha,
  const double * _Nonnull beta,
  double * _Nullable dsigma,
  __LAPACK_int * _Nullable idx,
  __LAPACK_int * _Nullable idxp,
  __LAPACK_int * _Nullable idxq,
  __LAPACK_int * _Nullable perm,
  __LAPACK_int * _Nonnull givptr,
  __LAPACK_int * _Nullable givcol,
  const __LAPACK_int * _Nonnull ldgcol,
  double * _Nullable givnum,
  const __LAPACK_int * _Nonnull ldgnum,
  double * _Nonnull c,
  double * _Nonnull s,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dlasd7)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cbbcsd_(
  const char * _Nonnull jobu1,
  const char * _Nonnull jobu2,
  const char * _Nonnull jobv1t,
  const char * _Nonnull jobv2t,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull p,
  const __LAPACK_int * _Nonnull q,
  float * _Nullable theta,
  float * _Nullable phi,
  __LAPACK_float_complex * _Nullable u1,
  const __LAPACK_int * _Nonnull ldu1,
  __LAPACK_float_complex * _Nullable u2,
  const __LAPACK_int * _Nonnull ldu2,
  __LAPACK_float_complex * _Nullable v1t,
  const __LAPACK_int * _Nonnull ldv1t,
  __LAPACK_float_complex * _Nullable v2t,
  const __LAPACK_int * _Nonnull ldv2t,
  float * _Nullable b11d,
  float * _Nullable b11e,
  float * _Nullable b12d,
  float * _Nullable b12e,
  float * _Nullable b21d,
  float * _Nullable b21e,
  float * _Nullable b22d,
  float * _Nullable b22e,
  float * _Nullable rwork,
  const __LAPACK_int * _Nonnull lrwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cbbcsd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));


void
cggevx_(
  const char * _Nonnull balanc,
  const char * _Nonnull jobvl,
  const char * _Nonnull jobvr,
  const char * _Nonnull sense,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_float_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_float_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_float_complex * _Nullable alpha,
  __LAPACK_float_complex * _Nullable beta,
  __LAPACK_float_complex * _Nullable vl,
  const __LAPACK_int * _Nonnull ldvl,
  __LAPACK_float_complex * _Nullable vr,
  const __LAPACK_int * _Nonnull ldvr,
  __LAPACK_int * _Nonnull ilo,
  __LAPACK_int * _Nonnull ihi,
  float * _Nullable lscale,
  float * _Nullable rscale,
  float * _Nonnull abnrm,
  float * _Nonnull bbnrm,
  float * _Nullable rconde,
  float * _Nullable rcondv,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  float * _Nullable rwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_bool * _Nullable bwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cggevx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dbbcsd_(
  const char * _Nonnull jobu1,
  const char * _Nonnull jobu2,
  const char * _Nonnull jobv1t,
  const char * _Nonnull jobv2t,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull p,
  const __LAPACK_int * _Nonnull q,
  double * _Nullable theta,
  double * _Nullable phi,
  double * _Nullable u1,
  const __LAPACK_int * _Nonnull ldu1,
  double * _Nullable u2,
  const __LAPACK_int * _Nonnull ldu2,
  double * _Nullable v1t,
  const __LAPACK_int * _Nonnull ldv1t,
  double * _Nullable v2t,
  const __LAPACK_int * _Nonnull ldv2t,
  double * _Nullable b11d,
  double * _Nullable b11e,
  double * _Nullable b12d,
  double * _Nullable b12e,
  double * _Nullable b21d,
  double * _Nullable b21e,
  double * _Nullable b22d,
  double * _Nullable b22e,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dbbcsd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dggevx_(
  const char * _Nonnull balanc,
  const char * _Nonnull jobvl,
  const char * _Nonnull jobvr,
  const char * _Nonnull sense,
  const __LAPACK_int * _Nonnull n,
  double * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  double * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  double * _Nullable alphar,
  double * _Nullable alphai,
  double * _Nullable beta,
  double * _Nullable vl,
  const __LAPACK_int * _Nonnull ldvl,
  double * _Nullable vr,
  const __LAPACK_int * _Nonnull ldvr,
  __LAPACK_int * _Nonnull ilo,
  __LAPACK_int * _Nonnull ihi,
  double * _Nullable lscale,
  double * _Nullable rscale,
  double * _Nonnull abnrm,
  double * _Nonnull bbnrm,
  double * _Nullable rconde,
  double * _Nullable rcondv,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_bool * _Nullable bwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dggevx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sbbcsd_(
  const char * _Nonnull jobu1,
  const char * _Nonnull jobu2,
  const char * _Nonnull jobv1t,
  const char * _Nonnull jobv2t,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull p,
  const __LAPACK_int * _Nonnull q,
  float * _Nullable theta,
  float * _Nullable phi,
  float * _Nullable u1,
  const __LAPACK_int * _Nonnull ldu1,
  float * _Nullable u2,
  const __LAPACK_int * _Nonnull ldu2,
  float * _Nullable v1t,
  const __LAPACK_int * _Nonnull ldv1t,
  float * _Nullable v2t,
  const __LAPACK_int * _Nonnull ldv2t,
  float * _Nullable b11d,
  float * _Nullable b11e,
  float * _Nullable b12d,
  float * _Nullable b12e,
  float * _Nullable b21d,
  float * _Nullable b21e,
  float * _Nullable b22d,
  float * _Nullable b22e,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sbbcsd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));


void
sggevx_(
  const char * _Nonnull balanc,
  const char * _Nonnull jobvl,
  const char * _Nonnull jobvr,
  const char * _Nonnull sense,
  const __LAPACK_int * _Nonnull n,
  float * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  float * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  float * _Nullable alphar,
  float * _Nullable alphai,
  float * _Nullable beta,
  float * _Nullable vl,
  const __LAPACK_int * _Nonnull ldvl,
  float * _Nullable vr,
  const __LAPACK_int * _Nonnull ldvr,
  __LAPACK_int * _Nonnull ilo,
  __LAPACK_int * _Nonnull ihi,
  float * _Nullable lscale,
  float * _Nullable rscale,
  float * _Nonnull abnrm,
  float * _Nonnull bbnrm,
  float * _Nullable rconde,
  float * _Nullable rcondv,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_bool * _Nullable bwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sggevx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zbbcsd_(
  const char * _Nonnull jobu1,
  const char * _Nonnull jobu2,
  const char * _Nonnull jobv1t,
  const char * _Nonnull jobv2t,
  const char * _Nonnull trans,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull p,
  const __LAPACK_int * _Nonnull q,
  double * _Nullable theta,
  double * _Nullable phi,
  __LAPACK_double_complex * _Nullable u1,
  const __LAPACK_int * _Nonnull ldu1,
  __LAPACK_double_complex * _Nullable u2,
  const __LAPACK_int * _Nonnull ldu2,
  __LAPACK_double_complex * _Nullable v1t,
  const __LAPACK_int * _Nonnull ldv1t,
  __LAPACK_double_complex * _Nullable v2t,
  const __LAPACK_int * _Nonnull ldv2t,
  double * _Nullable b11d,
  double * _Nullable b11e,
  double * _Nullable b12d,
  double * _Nullable b12e,
  double * _Nullable b21d,
  double * _Nullable b21e,
  double * _Nullable b22d,
  double * _Nullable b22e,
  double * _Nullable rwork,
  const __LAPACK_int * _Nonnull lrwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zbbcsd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zggevx_(
  const char * _Nonnull balanc,
  const char * _Nonnull jobvl,
  const char * _Nonnull jobvr,
  const char * _Nonnull sense,
  const __LAPACK_int * _Nonnull n,
  __LAPACK_double_complex * _Nullable a,
  const __LAPACK_int * _Nonnull lda,
  __LAPACK_double_complex * _Nullable b,
  const __LAPACK_int * _Nonnull ldb,
  __LAPACK_double_complex * _Nullable alpha,
  __LAPACK_double_complex * _Nullable beta,
  __LAPACK_double_complex * _Nullable vl,
  const __LAPACK_int * _Nonnull ldvl,
  __LAPACK_double_complex * _Nullable vr,
  const __LAPACK_int * _Nonnull ldvr,
  __LAPACK_int * _Nonnull ilo,
  __LAPACK_int * _Nonnull ihi,
  double * _Nullable lscale,
  double * _Nullable rscale,
  double * _Nonnull abnrm,
  double * _Nonnull bbnrm,
  double * _Nullable rconde,
  double * _Nullable rcondv,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  double * _Nullable rwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_bool * _Nullable bwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zggevx)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
dorcsd_(
  const char * _Nonnull jobu1,
  const char * _Nonnull jobu2,
  const char * _Nonnull jobv1t,
  const char * _Nonnull jobv2t,
  const char * _Nonnull trans,
  const char * _Nonnull signs,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull p,
  const __LAPACK_int * _Nonnull q,
  double * _Nullable x11,
  const __LAPACK_int * _Nonnull ldx11,
  double * _Nullable x12,
  const __LAPACK_int * _Nonnull ldx12,
  double * _Nullable x21,
  const __LAPACK_int * _Nonnull ldx21,
  double * _Nullable x22,
  const __LAPACK_int * _Nonnull ldx22,
  double * _Nullable theta,
  double * _Nullable u1,
  const __LAPACK_int * _Nonnull ldu1,
  double * _Nullable u2,
  const __LAPACK_int * _Nonnull ldu2,
  double * _Nullable v1t,
  const __LAPACK_int * _Nonnull ldv1t,
  double * _Nullable v2t,
  const __LAPACK_int * _Nonnull ldv2t,
  double * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(dorcsd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
sorcsd_(
  const char * _Nonnull jobu1,
  const char * _Nonnull jobu2,
  const char * _Nonnull jobv1t,
  const char * _Nonnull jobv2t,
  const char * _Nonnull trans,
  const char * _Nonnull signs,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull p,
  const __LAPACK_int * _Nonnull q,
  float * _Nullable x11,
  const __LAPACK_int * _Nonnull ldx11,
  float * _Nullable x12,
  const __LAPACK_int * _Nonnull ldx12,
  float * _Nullable x21,
  const __LAPACK_int * _Nonnull ldx21,
  float * _Nullable x22,
  const __LAPACK_int * _Nonnull ldx22,
  float * _Nullable theta,
  float * _Nullable u1,
  const __LAPACK_int * _Nonnull ldu1,
  float * _Nullable u2,
  const __LAPACK_int * _Nonnull ldu2,
  float * _Nullable v1t,
  const __LAPACK_int * _Nonnull ldv1t,
  float * _Nullable v2t,
  const __LAPACK_int * _Nonnull ldv2t,
  float * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(sorcsd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
cuncsd_(
  const char * _Nonnull jobu1,
  const char * _Nonnull jobu2,
  const char * _Nonnull jobv1t,
  const char * _Nonnull jobv2t,
  const char * _Nonnull trans,
  const char * _Nonnull signs,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull p,
  const __LAPACK_int * _Nonnull q,
  __LAPACK_float_complex * _Nullable x11,
  const __LAPACK_int * _Nonnull ldx11,
  __LAPACK_float_complex * _Nullable x12,
  const __LAPACK_int * _Nonnull ldx12,
  __LAPACK_float_complex * _Nullable x21,
  const __LAPACK_int * _Nonnull ldx21,
  __LAPACK_float_complex * _Nullable x22,
  const __LAPACK_int * _Nonnull ldx22,
  float * _Nullable theta,
  __LAPACK_float_complex * _Nullable u1,
  const __LAPACK_int * _Nonnull ldu1,
  __LAPACK_float_complex * _Nullable u2,
  const __LAPACK_int * _Nonnull ldu2,
  __LAPACK_float_complex * _Nullable v1t,
  const __LAPACK_int * _Nonnull ldv1t,
  __LAPACK_float_complex * _Nullable v2t,
  const __LAPACK_int * _Nonnull ldv2t,
  __LAPACK_float_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  float * _Nullable rwork,
  const __LAPACK_int * _Nonnull lrwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(cuncsd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



void
zuncsd_(
  const char * _Nonnull jobu1,
  const char * _Nonnull jobu2,
  const char * _Nonnull jobv1t,
  const char * _Nonnull jobv2t,
  const char * _Nonnull trans,
  const char * _Nonnull signs,
  const __LAPACK_int * _Nonnull m,
  const __LAPACK_int * _Nonnull p,
  const __LAPACK_int * _Nonnull q,
  __LAPACK_double_complex * _Nullable x11,
  const __LAPACK_int * _Nonnull ldx11,
  __LAPACK_double_complex * _Nullable x12,
  const __LAPACK_int * _Nonnull ldx12,
  __LAPACK_double_complex * _Nullable x21,
  const __LAPACK_int * _Nonnull ldx21,
  __LAPACK_double_complex * _Nullable x22,
  const __LAPACK_int * _Nonnull ldx22,
  double * _Nullable theta,
  __LAPACK_double_complex * _Nullable u1,
  const __LAPACK_int * _Nonnull ldu1,
  __LAPACK_double_complex * _Nullable u2,
  const __LAPACK_int * _Nonnull ldu2,
  __LAPACK_double_complex * _Nullable v1t,
  const __LAPACK_int * _Nonnull ldv1t,
  __LAPACK_double_complex * _Nullable v2t,
  const __LAPACK_int * _Nonnull ldv2t,
  __LAPACK_double_complex * _Nonnull work,
  const __LAPACK_int * _Nonnull lwork,
  double * _Nullable rwork,
  const __LAPACK_int * _Nonnull lrwork,
  __LAPACK_int * _Nullable iwork,
  __LAPACK_int * _Nonnull info)
__LAPACK_ALIAS(zuncsd)
API_AVAILABLE(macos(13.3), ios(16.4), watchos(9.4), tvos(16.4));



#ifdef __cplusplus
} //extern "C" {
#endif

#endif // #if defined(ACCELERATE_NEW_LAPACK)
