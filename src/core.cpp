// Auto-generated module | 2026-05-11T19:58:31.908373
#include <iostream>
#include <vector>

int compute_846() {
    int base = 411;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_846() << std::endl;
    return 0;
}
