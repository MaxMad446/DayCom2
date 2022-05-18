// Auto-generated module | 2026-05-11T21:03:06.767416
#include <iostream>
#include <vector>

int compute_619() {
    int base = 32;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_619() << std::endl;
    return 0;
}
