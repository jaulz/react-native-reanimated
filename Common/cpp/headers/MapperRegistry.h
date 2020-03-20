//
//  MapperRegistry.hpp
//  DoubleConversion
//
//  Created by Szymon Kapala on 20/03/2020.
//

#ifndef MapperRegistry_h
#define MapperRegistry_h

#include <stdio.h>
#include "Mapper.h"

class MapperRegistry {
  std::unordered_map<int, std::shared_ptr<Mapper>> mappers;
  std::vector<int> mappersOrder;
  void updateOrder();
public:
  MapperRegistry();
  void addMapper(std::shared_ptr<Mapper> mapper);
  void removeMapper(int id);
  void execute(rt, std::shared_ptr<BaseWorkletModule> module);
  virtual ~MapperRegistry();
};

#endif /* MapperRegistry_h */
