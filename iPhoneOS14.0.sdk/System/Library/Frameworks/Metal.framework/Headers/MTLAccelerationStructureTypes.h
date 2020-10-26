#ifdef __METAL_VERSION__
#import <metal_stdlib>

typedef metal::packed_float3 MTLPackedFloat3;
#else

typedef struct _MTLPackedFloat3 {
    union {
        struct {
            float x;
            float y;
            float z;
        };
        float elements[3];
    };

#ifdef __cplusplus
    _MTLPackedFloat3()
        : x(0.0f), y(0.0f), z(0.0f)
    {
    }

    _MTLPackedFloat3(float x, float y, float z)
        : x(x), y(y), z(z)
    {
    }

    float & operator[](int idx) {
        return elements[idx];
    }

    const float & operator[](int idx) const {
        return elements[idx];
    }
#endif
} MTLPackedFloat3;
#endif

typedef struct _MTLPackedFloat4x3 {
    MTLPackedFloat3 columns[4];

#ifdef __cplusplus
    _MTLPackedFloat4x3() {
        columns[0] = MTLPackedFloat3(1.0f, 0.0f, 0.0f);
        columns[1] = MTLPackedFloat3(0.0f, 1.0f, 0.0f);
        columns[2] = MTLPackedFloat3(0.0f, 0.0f, 1.0f);
        columns[3] = MTLPackedFloat3(0.0f, 0.0f, 0.0f);
    }
    
#ifndef __METAL_VERSION__
    MTLPackedFloat3 & operator[](int idx) {
        return columns[idx];
    }

    const MTLPackedFloat3 & operator[](int idx) const {
        return columns[idx];
    }
#else
    thread MTLPackedFloat3 & operator[](int idx) thread {
        return columns[idx];
    }

    const thread MTLPackedFloat3 & operator[](int idx) const thread {
        return columns[idx];
    }

    device MTLPackedFloat3 & operator[](int idx) device {
        return columns[idx];
    }

    const device MTLPackedFloat3 & operator[](int idx) const device {
        return columns[idx];
    }

    const constant MTLPackedFloat3 & operator[](int idx) const constant {
        return columns[idx];
    }
#endif
#endif
} MTLPackedFloat4x3;

#ifndef __METAL_VERSION__
typedef struct {
    /**
     * @brief Transformation matrix describing how to transform the bottom-level acceleration structure.
     */
    MTLPackedFloat4x3 transformationMatrix;

    /**
     * @brief Instance flags
     */
    unsigned int flags;
    
    /**
     * @brief Instance mask used to ignore geometry during ray tracing
     */
    unsigned int mask;

    /**
     * @brief Used to index into intersection function tables
     */
    unsigned int intersectionFunctionTableOffset;
    
    /**
     * @brief Acceleration structure index to use for this instance
     */
    unsigned int accelerationStructureIndex;
} MTLAccelerationStructureInstanceDescriptor;
#endif
