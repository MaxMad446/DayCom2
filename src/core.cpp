// Auto-generated module | 2026-05-14T06:26:33.733017
#include <iostream>
#include <vector>

int compute_449() {
    int base = 373;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_449() << std::endl;
    return 0;
}
