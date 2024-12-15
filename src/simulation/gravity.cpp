//
// Created by hunter on 12/9/24.
//

inline constexpr double GRAVITATIONAL_CONSTANT_METERS_KILOGRAMS = 6.67430e-11;

namespace gravity {
    inline double calculateGravityForceMetersKilograms(
            const double mass1,
            const double mass2,
            const double distance
    ) {
        auto g = GRAVITATIONAL_CONSTANT_METERS_KILOGRAMS;
        auto distanceSquared = distance * distance;
        return g * ((mass1 * mass2) / distanceSquared);
    }
}