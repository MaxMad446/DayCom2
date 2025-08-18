// Auto-generated module | 2026-05-12T04:23:04.200293
#include <iostream>
#include <vector>

int compute_205() {
    int base = 228;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_205() << std::endl;
    return 0;
}
