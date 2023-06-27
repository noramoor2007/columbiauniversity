#include <iostream>
#include <cmath>
// Kinetic energy can be calculated with the following formula, KE = 1/2mv², where m is mass in kg, v is velocity in m/s, and KE is kinetic energy in J. Your task is to return the Kinetic Energy in Joules, given the mass and velocity. For the purposes of this challenge, round answers to the nearest integer.
int kineticEnergy (float m, float v) { // This defines the function named "kineticEnergy" that takes 2 floats, "m" and "v", "m" being the mass and "v" being the velocity. As a result this function will have to return an integer.
	return round ((m / 2) * (v * v)); // Here the function will return the rounded value of the mass divided by 2 multiplied by the velocity squared.
}