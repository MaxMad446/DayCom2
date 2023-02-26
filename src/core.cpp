// Auto-generated module | 2026-05-13T20:31:40.908275
#include <iostream>
#include <vector>

int compute_400() {
    int base = 376;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_400() << std::endl;
    return 0;
}
