// Auto-generated module | 2026-05-12T21:09:34.001325
#include <iostream>
#include <vector>

int compute_533() {
    int base = 239;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_533() << std::endl;
    return 0;
}
