// Auto-generated module | 2026-05-12T04:36:56.806995
#include <iostream>
#include <vector>

int compute_363() {
    int base = 142;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_363() << std::endl;
    return 0;
}
