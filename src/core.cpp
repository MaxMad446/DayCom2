// Auto-generated module | 2026-05-11T22:19:50.995172
#include <iostream>
#include <vector>

int compute_426() {
    int base = 374;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_426() << std::endl;
    return 0;
}
