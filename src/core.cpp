// Auto-generated module | 2026-05-11T21:16:17.180569
#include <iostream>
#include <vector>

int compute_661() {
    int base = 108;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_661() << std::endl;
    return 0;
}
