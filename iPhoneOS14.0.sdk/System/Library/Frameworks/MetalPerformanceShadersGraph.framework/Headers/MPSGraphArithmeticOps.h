//
//  MPSGraphArithmeticOps.h
//  MetalPerformanceShadersGraph
//
//  Created on 11/10/19.
//  Copyright © 2019 Apple Inc. All rights reserved.
//

#ifndef MPSGraphArithmeticOps_h
#define MPSGraphArithmeticOps_h

#import <MetalPerformanceShadersGraph/MPSGraph.h>

NS_ASSUME_NONNULL_BEGIN



@interface MPSGraph(MPSGraphArithmeticOps)


#pragma mark - UnaryArithmeticOps

-(MPSGraphTensor *) identityWithTensor:(MPSGraphTensor *) tensor
                                  name:(NSString * _Nullable) name;

-(MPSGraphTensor *) exponentWithTensor:(MPSGraphTensor *) tensor
                                  name:(NSString * _Nullable) name;

-(MPSGraphTensor *) exponentBase2WithTensor:(MPSGraphTensor *) tensor
                                       name:(NSString * _Nullable) name;

-(MPSGraphTensor *) exponentBase10WithTensor:(MPSGraphTensor *) tensor
                                        name:(NSString * _Nullable) name;

-(MPSGraphTensor *) logarithmWithTensor:(MPSGraphTensor *) tensor
                                   name:(NSString * _Nullable) name;

-(MPSGraphTensor *) logarithmBase2WithTensor:(MPSGraphTensor *) tensor
                                        name:(NSString * _Nullable) name;

-(MPSGraphTensor *) logarithmBase10WithTensor:(MPSGraphTensor *) tensor
                                         name:(NSString * _Nullable) name;

-(MPSGraphTensor *) squareWithTensor:(MPSGraphTensor *) tensor
                                name:(NSString * _Nullable) name;

-(MPSGraphTensor *) squareRootWithTensor:(MPSGraphTensor *) tensor
                                    name:(NSString * _Nullable) name;

-(MPSGraphTensor *) reverseSquareRootWithTensor:(MPSGraphTensor *) tensor
                                           name:(NSString * _Nullable) name;

-(MPSGraphTensor *) reciprocalWithTensor:(MPSGraphTensor *) tensor
                                    name:(NSString * _Nullable) name;

-(MPSGraphTensor *) absoluteWithTensor:(MPSGraphTensor *) tensor
                                  name:(NSString * _Nullable) name;

-(MPSGraphTensor *) negativeWithTensor:(MPSGraphTensor *) tensor
                                  name:(NSString * _Nullable) name;

-(MPSGraphTensor *) signWithTensor:(MPSGraphTensor *) tensor
                              name:(NSString * _Nullable) name;


-(MPSGraphTensor *) signbitWithTensor:(MPSGraphTensor *) tensor
                                 name:(NSString * _Nullable) name;


-(MPSGraphTensor *) ceilWithTensor:(MPSGraphTensor *) tensor
                              name:(NSString * _Nullable) name;


-(MPSGraphTensor *) floorWithTensor:(MPSGraphTensor *) tensor
                               name:(NSString * _Nullable) name;


-(MPSGraphTensor *) roundWithTensor:(MPSGraphTensor *) tensor
                               name:(NSString * _Nullable) name;


-(MPSGraphTensor *) rintWithTensor:(MPSGraphTensor *) tensor
                              name:(NSString * _Nullable) name;


-(MPSGraphTensor *) sinWithTensor:(MPSGraphTensor *) tensor
                             name:(NSString * _Nullable) name;


-(MPSGraphTensor *) cosWithTensor:(MPSGraphTensor *) tensor
                             name:(NSString * _Nullable) name;


-(MPSGraphTensor *) tanWithTensor:(MPSGraphTensor *) tensor
                             name:(NSString * _Nullable) name;


-(MPSGraphTensor *) sinhWithTensor:(MPSGraphTensor *) tensor
                              name:(NSString * _Nullable) name;


-(MPSGraphTensor *) coshWithTensor:(MPSGraphTensor *) tensor
                              name:(NSString * _Nullable) name;


-(MPSGraphTensor *) tanhWithTensor:(MPSGraphTensor *) tensor
                              name:(NSString * _Nullable) name;


-(MPSGraphTensor *) aSinWithTensor:(MPSGraphTensor *) tensor
                              name:(NSString * _Nullable) name;


-(MPSGraphTensor *) aCosWithTensor:(MPSGraphTensor *) tensor
                              name:(NSString * _Nullable) name;


-(MPSGraphTensor *) aTanWithTensor:(MPSGraphTensor *) tensor
                              name:(NSString * _Nullable) name;


-(MPSGraphTensor *) aSinhWithTensor:(MPSGraphTensor *) tensor
                               name:(NSString * _Nullable) name;


-(MPSGraphTensor *) aCoshWithTensor:(MPSGraphTensor *) tensor
                               name:(NSString * _Nullable) name;


-(MPSGraphTensor *) aTanhWithTensor:(MPSGraphTensor *) tensor
                               name:(NSString * _Nullable) name;


-(MPSGraphTensor *) notWithTensor:(MPSGraphTensor *) tensor
                             name:(NSString * _Nullable) name;


-(MPSGraphTensor *) isInfiniteWithTensor:(MPSGraphTensor *) tensor
                                    name:(NSString * _Nullable) name;


-(MPSGraphTensor *) isFiniteWithTensor:(MPSGraphTensor *) tensor
                                  name:(NSString * _Nullable) name;


-(MPSGraphTensor *) isNaNWithTensor:(MPSGraphTensor *) tensor
                               name:(NSString * _Nullable) name;


-(MPSGraphTensor *) erfWithTensor:(MPSGraphTensor *) tensor
                             name:(NSString * _Nullable) name;


#pragma mark - BinaryArithmeticOps

/*!
 *  @abstract   Create Add op and return the result tensor, it supports broadcasting as well
 *
 *  @code
 *              resultTensor = primaryTensor + secondaryTensor
 *  @endcode
 *
 *  @param      primaryTensor          LHS tensor of the binary Op
 *  @param      secondaryTensor      RHS tensor of the binary Op
 *  @param      name                              name for the operation
 *
 *  @return     A valid MPSGraphTensor object.
 */
-(MPSGraphTensor *) additionWithPrimaryTensor:(MPSGraphTensor *) primaryTensor
                              secondaryTensor:(MPSGraphTensor *) secondaryTensor
                                         name:(NSString * _Nullable) name;



/*!
 *  @abstract   Create Subtract op and return the result tensor, it supports broadcasting as well
 *
 *  @code
 *              resultTensor = primaryTensor - secondaryTensor
 *  @endcode
 *
 *  @param      primaryTensor          LHS tensor of the binary Op
 *  @param      secondaryTensor      RHS tensor of the binary Op
 *  @param      name                              name for the operation
 *
 *  @return     A valid MPSGraphTensor object.
 */
-(MPSGraphTensor *) subtractionWithPrimaryTensor:(MPSGraphTensor *) primaryTensor
                                 secondaryTensor:(MPSGraphTensor *) secondaryTensor
                                            name:(NSString * _Nullable) name;



/*!
 *  @abstract   Create Multiply op and return the result tensor, it supports broadcasting as well
 *
 *  @code
 *              resultTensor = primaryTensor * secondaryTensor
 *  @endcode
 *
 *  @param      primaryTensor          LHS tensor of the binary Op
 *  @param      secondaryTensor      RHS tensor of the binary Op
 *  @param      name                              name for the operation
 *
 *  @return     A valid MPSGraphTensor object.
 */
-(MPSGraphTensor *) multiplicationWithPrimaryTensor:(MPSGraphTensor *) primaryTensor
                                    secondaryTensor:(MPSGraphTensor *) secondaryTensor
                                               name:(NSString * _Nullable) name;

/*!
 *  @abstract   Create Divide op and return the result tensor, it supports broadcasting as well
 *
 *  @code
 *              resultTensor = primaryTensor / secondaryTensor
 *  @endcode
 *
 *  @param      primaryTensor          LHS tensor of the binary Op
 *  @param      secondaryTensor      RHS tensor of the binary Op
 *  @param      name                              name for the operation
 *
 *  @return     A valid MPSGraphTensor object.
 */
-(MPSGraphTensor *) divisionWithPrimaryTensor:(MPSGraphTensor *) primaryTensor
                              secondaryTensor:(MPSGraphTensor *) secondaryTensor
                                         name:(NSString * _Nullable) name;



-(MPSGraphTensor *) moduloWithPrimaryTensor:(MPSGraphTensor *) primaryTensor
                            secondaryTensor:(MPSGraphTensor *) secondaryTensor
                                       name:(NSString * _Nullable) name;



-(MPSGraphTensor *) powerWithPrimaryTensor:(MPSGraphTensor *) primaryTensor
                           secondaryTensor:(MPSGraphTensor *) secondaryTensor
                                      name:(NSString * _Nullable) name;



-(MPSGraphTensor *) minimumWithPrimaryTensor:(MPSGraphTensor *) primaryTensor
                             secondaryTensor:(MPSGraphTensor *) secondaryTensor
                                        name:(NSString * _Nullable) name;



-(MPSGraphTensor *) maximumWithPrimaryTensor:(MPSGraphTensor *) primaryTensor
                             secondaryTensor:(MPSGraphTensor *) secondaryTensor
                                        name:(NSString * _Nullable) name;



-(MPSGraphTensor *) equalWithPrimaryTensor:(MPSGraphTensor *) primaryTensor
                           secondaryTensor:(MPSGraphTensor *) secondaryTensor
                                      name:(NSString * _Nullable) name;



-(MPSGraphTensor *) notEqualWithPrimaryTensor:(MPSGraphTensor *) primaryTensor
                              secondaryTensor:(MPSGraphTensor *) secondaryTensor
                                         name:(NSString * _Nullable) name;



-(MPSGraphTensor *) lessThanWithPrimaryTensor:(MPSGraphTensor *) primaryTensor
                              secondaryTensor:(MPSGraphTensor *) secondaryTensor
                                         name:(NSString * _Nullable) name;



-(MPSGraphTensor *) lessThanOrEqualToWithPrimaryTensor:(MPSGraphTensor *) primaryTensor
                                       secondaryTensor:(MPSGraphTensor *) secondaryTensor
                                                  name:(NSString * _Nullable) name;



-(MPSGraphTensor *) greaterThanWithPrimaryTensor:(MPSGraphTensor *) primaryTensor
                                 secondaryTensor:(MPSGraphTensor *) secondaryTensor
                                            name:(NSString * _Nullable) name;



-(MPSGraphTensor *) greaterThanOrEqualToWithPrimaryTensor:(MPSGraphTensor *) primaryTensor
                                          secondaryTensor:(MPSGraphTensor *) secondaryTensor
                                                     name:(NSString * _Nullable) name;



-(MPSGraphTensor *) logicalANDWithPrimaryTensor:(MPSGraphTensor *) primaryTensor
                                secondaryTensor:(MPSGraphTensor *) secondaryTensor
                                           name:(NSString * _Nullable) name;



-(MPSGraphTensor *) logicalORWithPrimaryTensor:(MPSGraphTensor *) primaryTensor
                               secondaryTensor:(MPSGraphTensor *) secondaryTensor
                                          name:(NSString * _Nullable) name;



-(MPSGraphTensor *) logicalNANDWithPrimaryTensor:(MPSGraphTensor *) primaryTensor
                                 secondaryTensor:(MPSGraphTensor *) secondaryTensor
                                            name:(NSString * _Nullable) name;



-(MPSGraphTensor *) logicalNORWithPrimaryTensor:(MPSGraphTensor *) primaryTensor
                                secondaryTensor:(MPSGraphTensor *) secondaryTensor
                                           name:(NSString * _Nullable) name;



-(MPSGraphTensor *) logicalXORWithPrimaryTensor:(MPSGraphTensor *) primaryTensor
                                secondaryTensor:(MPSGraphTensor *) secondaryTensor
                                           name:(NSString * _Nullable) name;



-(MPSGraphTensor *) logicalXNORWithPrimaryTensor:(MPSGraphTensor *) primaryTensor
                                 secondaryTensor:(MPSGraphTensor *) secondaryTensor
                                            name:(NSString * _Nullable) name;



-(MPSGraphTensor *) aTan2WithPrimaryTensor:(MPSGraphTensor *) primaryTensor
                           secondaryTensor:(MPSGraphTensor *) secondaryTensor
                                      name:(NSString * _Nullable) name;




#pragma mark - TernaryArithmeticOps

-(MPSGraphTensor *) selectWithPredicateTensor:(MPSGraphTensor *) predicateTensor
                          truePredicateTensor:(MPSGraphTensor *) truePredicateTensor
                         falsePredicateTensor:(MPSGraphTensor *) falseSelectTensor
                                         name:(NSString * _Nullable) name;


-(MPSGraphTensor *) clampWithTensor:(MPSGraphTensor *) tensor
                     minValueTensor:(MPSGraphTensor *) minValueTensor
                     maxValueTensor:(MPSGraphTensor *) maxValueTensor
                               name:(NSString * _Nullable) name;


@end

NS_ASSUME_NONNULL_END

#endif /* MPSGraphArithmeticOps_h */
