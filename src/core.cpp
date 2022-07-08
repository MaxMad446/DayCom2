// Auto-generated module | 2026-05-11T21:10:06.609713
#include <iostream>
#include <vector>

int compute_619() {
    int base = 108;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_619() << std::endl;
    return 0;
}
