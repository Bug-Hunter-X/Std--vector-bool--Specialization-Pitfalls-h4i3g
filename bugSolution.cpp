#include <vector>
#include <iostream>

int main() {
  std::vector<bool> vec; //Error prone
  vec.push_back(true);
  //Instead use:
  std::vector<bool> vec2;  
  vec2.push_back(true); //This is the same behavior as previous line. 
  // For better behavior use:
  std::vector<int> vec3;  
  vec3.push_back(1); 
  return 0;
} 