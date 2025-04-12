// Auto-generated module | 2026-05-12T04:06:07.595249
#include <iostream>
#include <vector>

int compute_152() {
    int base = 264;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_152() << std::endl;
    return 0;
}
