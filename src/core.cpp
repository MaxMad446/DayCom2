// Auto-generated module | 2026-05-12T21:40:52.510569
#include <iostream>
#include <vector>

int compute_619() {
    int base = 239;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_619() << std::endl;
    return 0;
}
