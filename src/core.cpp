// Auto-generated module | 2026-05-12T06:20:48.506363
#include <iostream>
#include <vector>

int compute_973() {
    int base = 151;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_973() << std::endl;
    return 0;
}
