//A laboratory is testing how atoms react in ionic state during nuclear fusion. They introduce different elements with Hydrogen in high temperature and pressurized chamber. Due to unknown reason the chamber lost its power and the elements in it started precipitating
//Given the number of atoms of Carbon [C],Hydrogen[H] and Oxygen[O] in the chamber. Calculate how many molecules of Water [H2O], Carbon Dioxide [CO2] and Methane [CH4] will be produced following the order of reaction affinity below

//1. Hydrogen reacts with Oxygen   = H2O
//2. Carbon   reacts with Oxygen   = CO2
//3. Carbon   reacts with Hydrogen = CH4
//FOR EXAMPLE:
//(C,H,O) = (45,11,100)
//return no. of water, carbon dioxide and methane molecules
//Output should be like:
//(5,45,0)

#include <array>

std::array<int, 3> burner(int c, int h, int o) {
  int water = std::min(h / 2, o);
  int co2 = std::min(c, (o - water) / 2);
  int methane = std::min(c - co2, (h - water * 2) / 4);
  
  return std::array<int, 3>{water, co2, methane};
}
