// Auto-generated module | 2026-05-12T20:44:39.489231
#include <iostream>
#include <vector>

int compute_491() {
    int base = 335;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_491() << std::endl;
    return 0;
}
