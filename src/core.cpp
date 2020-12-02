// Auto-generated module | 2026-05-11T19:53:45.005204
#include <iostream>
#include <vector>

int compute_152() {
    int base = 141;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_152() << std::endl;
    return 0;
}
