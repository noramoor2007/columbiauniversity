#include <iostream>
// Mubashir is lost somewhere in the desert. Given a class named Mubashir with a method named coordinates, return the coordinates of his location.
class Mubashir {
	public: // This is the public access specifier. Access specifiers define how the members (attributes and methods) of a class can be accessed. If the members are public, that means that they can be accessed and modified from outside the code.
	Mubashir (int x, int y, int z) : m_x (x), m_y (y), m_z (z) { // This is a member initializer list. This is a way of initializing class member variables. x, y, and z are constructor parameters. This sets the values of "m_x", "m_y", and "m_z" equal to the values x, y, and z.
	}
	void coordinates (int &x, int &y, int &z) { // So apparently these ampersands are used as reference declarators to create a reference to another variable. For example, int &x = m_x; creates a reference x to the variable m_x, meaning that any changes to x will affect m_x as well.
		x = m_x; // This now changes the values of "m_x", "m_y", and "m_z" to all the x, y, and z values.
		y = m_y;
		z = m_z;
	}
	private:
	int m_x;
  int m_y;
  int m_z;
}; // The semi-colon indicates the end of a class definition, which ensures that the code is syntactically correct and can be compiled without errors.