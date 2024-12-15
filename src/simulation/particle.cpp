//
// Created by hunter on 12/9/24.
//

#include "gravity.h"

class Particle {
private:
    // Mass in kg
    double mass;
    explicit Particle(const double massKg) {
        this->mass = massKg;
    }
public:
    [[nodiscard]] double attractMetersKilograms(const Particle& other, const double distance) const {
        return gravity::calculateGravityForceMetersKilograms(this->mass, other.mass, distance);
    }
    static Particle createKg(const double mass) {
        return Particle(mass);
    }
};