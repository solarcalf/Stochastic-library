#include "engine_base.hpp"

#ifndef __MERSENNE_STORM_H__
#define __MERSENNE_STORM_H__

namespace Engine_OOP_Approach {

double base_rand() {
    return static_cast<double>(rand()) / static_cast<double>(RAND_MAX) ;
}

template <typename T, typename alloc = std::allocator<T>>
class mersenne_storm_engine : rng_engine<T, alloc> {
public:
using value_type = T;
    using size_type = size_t;
    using alloc_type = alloc;

    static T process() {
        return static_cast<T>(base_rand());
    }
    T operator()() const override {
        return static_cast<T>(base_rand());
    }
};

} // namespace Engine_OOP_Approach

#endif // __MERSENNE_STORM_H__
