// Auto-generated module | 2026-05-14T18:27:50.563330
#include <iostream>
#include <vector>

int compute_624() {
    int base = 133;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_624() << std::endl;
    return 0;
}
