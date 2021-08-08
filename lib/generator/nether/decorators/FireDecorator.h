#ifndef EXT_NOISELIB_LIB_GENERATOR_NETHER_DECORATORS_FIREDECORATOR_H_
#define EXT_NOISELIB_LIB_GENERATOR_NETHER_DECORATORS_FIREDECORATOR_H_

#include <lib/generator/decorators/Decorator.h>

class FireDecorator : public Decorator {
 public:
  void Decorate(ChunkManager &world, Random &random, int_fast32_t chunkX, int_fast32_t chunkZ) override;
};

#endif //EXT_NOISELIB_LIB_GENERATOR_NETHER_DECORATORS_FIREDECORATOR_H_