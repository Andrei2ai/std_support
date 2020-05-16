#ifndef MEMORY_SUPPORT_HPP
#define MEMORY_SUPPORT_HPP

#if __cplusplus >= 201402L

#include <memory>
#include <experimental/propagate_const>

namespace std_memory
{
template<typename T>
using propagate_const_ptr  = std::experimental::propagate_const<T>;    

template<typename T>
using propagate_const_uptr = std::experimental::propagate_const<std::unique_ptr<T>>;

template<typename T>
using propagate_const_sptr = std::experimental::propagate_const<std::shared_ptr<T>>;
}

#endif // C++14

#endif // MEMORY_SUPPORT_HPP
