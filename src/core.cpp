// Auto-generated module | 2026-05-12T04:50:58.210360
#include <iostream>
#include <vector>

int compute_963() {
    int base = 491;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_963() << std::endl;
    return 0;
}
