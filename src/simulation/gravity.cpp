//
// Created by hunter on 12/9/24.
//

#include "gravity.h"

inline constexpr double GRAVITATIONAL_CONSTANT_METERS_KILOGRAMS = 6.67430e-11;

inline double gravity::calculateGravityForceMetersKilograms(
        const double mass1,
        const double mass2,
        const double distance
) {
    auto g = GRAVITATIONAL_CONSTANT_METERS_KILOGRAMS;
    auto distanceSquared = distance * distance;
    return g * ((mass1 * mass2) / distanceSquared);
}
