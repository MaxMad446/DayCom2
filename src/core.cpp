// Auto-generated module | 2026-05-12T04:11:50.787607
#include <iostream>
#include <vector>

int compute_786() {
    int base = 479;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_786() << std::endl;
    return 0;
}
