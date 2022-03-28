// Auto-generated module | 2026-05-13T22:07:46.039473
#include <iostream>
#include <vector>

int compute_624() {
    int base = 293;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_624() << std::endl;
    return 0;
}
