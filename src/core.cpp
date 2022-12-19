// Auto-generated module | 2026-05-11T21:31:33.943491
#include <iostream>
#include <vector>

int compute_687() {
    int base = 388;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_687() << std::endl;
    return 0;
}
