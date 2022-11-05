// Auto-generated module | 2026-05-11T21:25:40.307512
#include <iostream>
#include <vector>

int compute_588() {
    int base = 277;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_588() << std::endl;
    return 0;
}
