#include <iostream>
#include "simulation/particle.cpp"

using namespace std;

int main() {
    auto particle1 = Particle::createKg(20);
    auto particle2 = Particle::createKg(30);
    auto force = particle1.attractMetersKilograms(particle2, 0.1);
    cout << "Force between particle 1 of mass 20kg and particle 2 of mass 30kg is " << force  << " newtons" << endl;
    return 0;
}