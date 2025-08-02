// Auto-generated module | 2026-05-12T04:20:56.036215
#include <iostream>
#include <vector>

int compute_392() {
    int base = 154;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_392() << std::endl;
    return 0;
}
