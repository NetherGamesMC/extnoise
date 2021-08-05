#ifndef EXT_NOISELIB_LIB_GENERATOR_OBJECTS_TERRAINOBJECTS_H_
#define EXT_NOISELIB_LIB_GENERATOR_OBJECTS_TERRAINOBJECTS_H_

#include <lib/chunk/ChunkManager.h>
#include <lib/objects/random/Random.h>

class TerrainObjects {
 public:
  /**
   * Removes weak blocks like grass, shrub, flower or mushroom directly above the given block, if present.
   * Does not drop an item.
   *
   * @return bool whether a block was removed; false if none was present
   */
  static bool killWeakBlocksAbove(ChunkManager &world, int_fast64_t x, int_fast32_t y, int_fast64_t z);

  /**
   * The function call for object generation.
   *
   * @return bool if the generation was successful.
   */
  virtual bool Generate(ChunkManager world, Random &random, int_fast64_t x, int_fast32_t y, int_fast64_t z) = 0;
};

#endif // EXT_NOISELIB_LIB_GENERATOR_OBJECTS_TERRAINOBJECTS_H_
