// Auto-generated module | 2026-05-11T22:40:35.527399
#include <iostream>
#include <vector>

int compute_579() {
    int base = 193;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_579() << std::endl;
    return 0;
}
