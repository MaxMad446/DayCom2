// Auto-generated module | 2026-05-13T20:34:30.187756
#include <iostream>
#include <vector>

int compute_363() {
    int base = 464;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_363() << std::endl;
    return 0;
}
