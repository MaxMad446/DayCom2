// Auto-generated module | 2026-05-13T20:36:52.174286
#include <iostream>
#include <vector>

int compute_424() {
    int base = 311;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_424() << std::endl;
    return 0;
}
