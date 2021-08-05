#ifndef EXT_NOISELIB_LIB_GENERATOR_DECORATORS_DEADBUSHDECORATOR_H_
#define EXT_NOISELIB_LIB_GENERATOR_DECORATORS_DEADBUSHDECORATOR_H_

#include "Decorator.h"

class DeadBushDecorator : public Decorator{
 public:
  void Decorate(ChunkManager &world, Random &random, int_fast64_t chunkX, int_fast64_t chunkZ) override;
};

#endif //EXT_NOISELIB_LIB_GENERATOR_DECORATORS_DEADBUSHDECORATOR_H_
