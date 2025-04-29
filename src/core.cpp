// Auto-generated module | 2026-05-12T21:17:59.290669
#include <iostream>
#include <vector>

int compute_624() {
    int base = 202;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_624() << std::endl;
    return 0;
}
