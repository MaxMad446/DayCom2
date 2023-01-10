// Auto-generated module | 2026-05-13T20:27:37.511247
#include <iostream>
#include <vector>

int compute_887() {
    int base = 231;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_887() << std::endl;
    return 0;
}
