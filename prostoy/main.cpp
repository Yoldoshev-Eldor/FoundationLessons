#include <iostream>

int main() {
    // Qizil rangdagi matn
    std::cout << "\033[1;31mThis is red text\033[0m\n";

    // Yashil rangdagi matn
    std::cout << "\033[1;32mThis is green text\033[0m\n";

    // Sariq rangdagi matn
    std::cout << "\033[1;33mThis is yellow text\033[0m\n";

    // Moviy rangdagi matn
    std::cout << "\033[1;35mThis is purple text\033[0m\n";

    // To'q rangdagi matn
    std::cout << "\033[1;37mThis is white text\033[0m\n";

    return 0;
}
