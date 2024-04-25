// Auto-generated module | 2026-05-11T22:35:53.075295
#include <iostream>
#include <vector>

int compute_990() {
    int base = 458;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_990() << std::endl;
    return 0;
}
