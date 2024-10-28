#include <iostream>
#include <string>
#include <unordered_map>


// func to split a string into chars
void stringToChars(std::string str){
  std::unordered_map<char, int> char_map;
  
  for(char _char : str){
    char_map[_char]++;
  }
  
  // debug
  for (const auto& element : char_map) {
    std::cout << element.first << ": " << element.second << '\n';
  } 

}

int main(){
  std::string str = "A watched pot never boils";
  
  stringToChars(str);
} 
