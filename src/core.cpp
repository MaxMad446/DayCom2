// Auto-generated module | 2026-05-12T21:34:20.274349
#include <iostream>
#include <vector>

int compute_882() {
    int base = 486;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_882() << std::endl;
    return 0;
}
