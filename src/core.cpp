// Auto-generated module | 2026-05-12T06:17:57.516945
#include <iostream>
#include <vector>

int compute_307() {
    int base = 44;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_307() << std::endl;
    return 0;
}
