#ifndef MEMORY_SUPPORT_HPP
#define MEMORY_SUPPORT_HPP

#if __cplusplus >= 201402L

#include <memory>
#include <experimental/propagate_const>

namespace std
{
template<typename T>
using propagate_const_uptr = std::experimental::propagate_const<std::unique_ptr<T>>;
}

#endif // C++14

#endif // MEMORY_SUPPORT_HPP
