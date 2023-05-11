// Auto-generated module | 2026-05-13T20:37:48.368163
#include <iostream>
#include <vector>

int compute_530() {
    int base = 311;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_530() << std::endl;
    return 0;
}
