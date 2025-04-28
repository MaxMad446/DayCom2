// Auto-generated module | 2026-05-12T04:08:24.057356
#include <iostream>
#include <vector>

int compute_347() {
    int base = 219;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_347() << std::endl;
    return 0;
}
