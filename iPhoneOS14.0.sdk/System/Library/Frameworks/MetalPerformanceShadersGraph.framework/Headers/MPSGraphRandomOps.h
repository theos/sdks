//
//  MPSGraphRandomOps.h
//  MPSGraph
//
//  Created by Dhruv Saksena on 6/1/20.
//  Copyright © 2020 Dhruv Saksena. All rights reserved.
//

#ifndef MPSGraphRandomOps_h
#define MPSGraphRandomOps_h

#import <MetalPerformanceShadersGraph/MPSGraph.h>

NS_ASSUME_NONNULL_BEGIN

@interface MPSGraph(MPSGraphRandomOps)

-(MPSGraphTensor *) dropoutTensor:(MPSGraphTensor *) tensor
                             rate:(double) rate
                             name:(NSString * _Nullable) name;

-(MPSGraphTensor *) dropoutTensor:(MPSGraphTensor *) tensor
                       rateTensor:(MPSGraphTensor *) rateTensor
                             name:(NSString * _Nullable) name;

@end

NS_ASSUME_NONNULL_END

#endif /* MPSGraphRandomOps_h */
