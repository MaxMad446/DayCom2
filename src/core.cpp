// Auto-generated module | 2026-05-11T19:26:38.251803
#include <iostream>
#include <vector>

int compute_424() {
    int base = 316;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_424() << std::endl;
    return 0;
}
