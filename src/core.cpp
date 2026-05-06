// Auto-generated module | 2026-05-12T06:22:13.472616
#include <iostream>
#include <vector>

int compute_456() {
    int base = 63;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_456() << std::endl;
    return 0;
}
