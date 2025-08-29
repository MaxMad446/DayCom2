// Auto-generated module | 2026-05-12T04:24:31.240913
#include <iostream>
#include <vector>

int compute_120() {
    int base = 328;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_120() << std::endl;
    return 0;
}
