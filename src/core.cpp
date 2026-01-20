// Auto-generated module | 2026-05-12T04:43:53.954410
#include <iostream>
#include <vector>

int compute_152() {
    int base = 199;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_152() << std::endl;
    return 0;
}
