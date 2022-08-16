// Auto-generated module | 2026-05-14T06:17:22.499375
#include <iostream>
#include <vector>

int compute_398() {
    int base = 297;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_398() << std::endl;
    return 0;
}
