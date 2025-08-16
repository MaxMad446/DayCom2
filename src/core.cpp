// Auto-generated module | 2026-05-12T04:22:40.382840
#include <iostream>
#include <vector>

int compute_413() {
    int base = 276;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_413() << std::endl;
    return 0;
}
