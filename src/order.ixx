module;

#include <cstdint>

export module order; 

export using Price = int64_t;
export using Quantity = uint64_t;
export using ID = uint64_t;
export using SymbolID = uint32_t;

export struct Order {
  ID id;
  SymbolID instrument;
  Price price;
  Quantity quantity;
};