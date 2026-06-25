#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstddef>

namespace yalovsky
{
  template< class T >
  struct Array
  {
    T* data;
    size_t size;
    size_t capacity;
  };
}

#endif
