#include <iostream>
#include <vector>
#include <map>
#include <set>

int main() {
    std::vector<int> vector1;

    vector1.push_back(10);
    vector1.push_back(20);
    vector1.push_back(30);

    std::cout << "Elementos del vector: " << std::endl;
    for (int elemento : vector1) {
        std::cout << elemento << std::endl;
    }
    std::cout << std::endl;

    std::map<int, std::string> mapa;

    mapa[1] = "uno";
    mapa[2] = "dos";
    mapa[3] = "tres";

    std::cout << "Elementos del mapa: " << std::endl;
    for (const auto& par : mapa) {
        std::cout << par.first << " -> " << par.second << std::endl;
    }

    std::set<int> Set;

    Set.insert(10);
    Set.insert(20);
    Set.insert(30);

    std::cout << "Elementos del set: " << std::endl;
    for (int elemento : Set) {
        std::cout << elemento << " ";
    }
    std::cout << std::endl;

    return 0;
}

