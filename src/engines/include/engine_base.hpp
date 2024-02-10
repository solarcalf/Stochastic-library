#include <memory>

#ifndef __ENGINE_BASE_H__
#define __ENGINE_BASE_H__

namespace Engine_OOP_Approach {

template <typename T, typename alloc = std::allocator<T>>
class rng_engine {
public:
    using value_type = T;
    using size_type = size_t;
    using alloc_type = alloc;

    static T process();
    virtual T operator()() const = 0;
};

} // namespace Engine_OOP_Approach

#endif // __ENGINE_BASE_H__