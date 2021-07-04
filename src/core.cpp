// Auto-generated module | 2026-05-11T20:21:23.170940
#include <iostream>
#include <vector>

int compute_887() {
    int base = 393;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_887() << std::endl;
    return 0;
}
