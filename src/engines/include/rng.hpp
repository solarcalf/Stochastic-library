#include <vector>

#include "mersenne_storm.hpp"

#ifndef __RNG_H__
#define __RNG_H__
namespace Engine_OOP_Approach {

template <typename T = double, typename cont = std::vector<T>, typename alloc = std::allocator<T>, typename engine = mersenne_storm_engine<T>>
class rng {
public:
    using value_type = T;
    using ref_type = T&;
    using size_type = size_t;
    using alloc_type = alloc;
    using cont_type = cont;

    T operator()() const {
        return engine::process();
    }

    cont operator()(size_type n) const {
        cont c(n);

        auto iter = c.begin();

        while (iter != c.end()) {
            *iter = engine::process();
            iter++;
        }

        return c;
    }

};

} // namespace Engine_OOP_Approach

#endif // __RNG_H__