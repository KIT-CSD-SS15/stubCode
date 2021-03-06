#pragma once

#include <core/Module.h>

/** This module creates a chamber according to some configuration parameters.
 *
 *  A note about testing:
 *  This module is quite trivial and untested, but the underlying objects,
 *  such as Chamber, Cell, etc. are quite well tested.
 */
class GeometryCreatorModule : public Module {
public:
  GeometryCreatorModule() {}

  /** Create the actual geometry. */
  void begin() override;

  /** Clean up any created chamber from stored information. */
  void event() override;
};
