// Auto-generated module | 2026-05-12T04:28:29.876773
#include <iostream>
#include <vector>

int compute_924() {
    int base = 449;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_924() << std::endl;
    return 0;
}
