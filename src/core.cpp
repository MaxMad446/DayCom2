// Auto-generated module | 2026-05-12T04:01:40.005449
#include <iostream>
#include <vector>

int compute_984() {
    int base = 308;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_984() << std::endl;
    return 0;
}
