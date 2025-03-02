// PHYS 30762 Programming in C++
// Assignment 4
// Practice special functions and operators in C++ classes
// Note that the hints in the skeleton are given to help you
// in case of doubt, the official guidance/marking scheme is on the slides on BB 

#include<iostream>
#include<string>
#include<vector>
#include<cmath>

using std::string;

// Beginning of particle class
class particle
{
private:
  string particle_name;
  // Four-vector (a std::vector) goes here

public:
  // Constructors
  // Here you need a default constructor, a parameterised constructor and a copy constructor
  // The parameterised constructor needs to dynamically allocate the std::vector containing the four-vector elements
  // The parameterised constructor also needs to check the validity of the energy component
  // The copy constructor needs to make a deep copy of the std::vector holding the 4-momentum

  // Destructor
  // The destructor needs to free the memory allocated by the constructor

  // Assignment operator
  // The assignment operator needs to avoid self-assignment using the *this pointer

  // Move constructor
  // The move constructor needs to correctly steal the memory from the object you're calling it on
  
  // Move assignment operator
  // The move assignment operator needs to correctly reassign the memory from the original object
  
  // Getter functions (accessors) to individual elements of 4-momentum

  // Setter functions, to change values of 4-momentum 
  // Make sure you check input validity for the energy in the 4-momentum 

  // Function to print info about a particle 
  // To understand memory management better: can you print the location in memory of the particle?
  // void print_data();

};

// Implementation of functions goes here

// End of particle class and associated member functions

// Main program
int main()
{

  // Create the following particles: 
  // two electrons, four muons, one antielectron, one antimuon 
  // Use the parameterised constructor to do these

  // Print out the data from all the particles 

  // Sum the four-momenta of the two electrons 
  // Take the dot product of the two four-muons
  // Assignment operator of the first electron to a new electron
  // Copy constructor of the first muon to a new muon
  // Assign the first tau to another different tau using the move assignment 
  // Move the second tau into the first tau using the move constructor 

  // Here or at the end of each step, print the new particle info including memory location
  // to convince yourself that you have used all special functions and operations correctly

  return 0;
}
