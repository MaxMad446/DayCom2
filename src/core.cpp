// Auto-generated module | 2026-05-12T03:41:42.554709
#include <iostream>
#include <vector>

int compute_759() {
    int base = 92;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_759() << std::endl;
    return 0;
}
