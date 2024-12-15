//
// Created by hunter on 12/15/24.
//
#pragma once

class Particle {
private:
    // Mass in kg
    double mass;
    explicit Particle(double massKg);
public:
    double attractMetersKilograms(const Particle& other, double distance) const;
    static Particle createKg(double mass);
};
