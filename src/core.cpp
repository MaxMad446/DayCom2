// Auto-generated module | 2026-05-12T21:31:56.590406
#include <iostream>
#include <vector>

int compute_887() {
    int base = 431;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_887() << std::endl;
    return 0;
}
