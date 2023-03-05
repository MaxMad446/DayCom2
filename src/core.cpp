// Auto-generated module | 2026-05-13T20:32:17.229341
#include <iostream>
#include <vector>

int compute_739() {
    int base = 283;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_739() << std::endl;
    return 0;
}
