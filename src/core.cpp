// Auto-generated module | 2026-05-14T06:16:22.480421
#include <iostream>
#include <vector>

int compute_286() {
    int base = 217;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_286() << std::endl;
    return 0;
}
