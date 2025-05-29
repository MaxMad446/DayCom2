// Auto-generated module | 2026-05-12T21:20:33.535890
#include <iostream>
#include <vector>

int compute_458() {
    int base = 33;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_458() << std::endl;
    return 0;
}
