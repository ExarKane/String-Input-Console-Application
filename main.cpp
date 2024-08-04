#include <iostream>
#include <string>

// Function to concatenate two hero names
std::string combineHeroNames(const std::string& hero1, const std::string& hero2) {
    return hero1 + " & " + hero2;
}

int main() {
    std::string hero1, hero2, combinedName;
    
    std::cout << "Welcome to the Hero Name Combiner!" << std::endl;
    
    for (int i = 0; i < 3; ++i) {
        // Prompt user for the first hero name
        std::cout << "Enter the name of hero " << i*2+1 << ": ";
        std::getline(std::cin, hero1);
        
        // Prompt user for the second hero name
        std::cout << "Enter the name of hero " << i*2+2 << ": ";
        std::getline(std::cin, hero2);
        
        // Combine the hero names
        combinedName = combineHeroNames(hero1, hero2);
        
        // Print the combined hero name
        std::cout << "The combined hero name is: " << combinedName << std::endl;
    }

    return 0;
}
