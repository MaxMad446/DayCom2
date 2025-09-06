// Auto-generated module | 2026-05-12T21:29:33.088514
#include <iostream>
#include <vector>

int compute_624() {
    int base = 302;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_624() << std::endl;
    return 0;
}
