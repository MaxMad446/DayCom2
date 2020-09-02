// Auto-generated module | 2026-05-11T19:41:39.257442
#include <iostream>
#include <vector>

int compute_463() {
    int base = 480;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_463() << std::endl;
    return 0;
}
