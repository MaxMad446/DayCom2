// Auto-generated module | 2026-05-13T20:36:28.441874
#include <iostream>
#include <vector>

int compute_426() {
    int base = 159;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_426() << std::endl;
    return 0;
}
