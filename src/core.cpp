// Auto-generated module | 2026-05-12T20:58:06.227376
#include <iostream>
#include <vector>

int compute_497() {
    int base = 354;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_497() << std::endl;
    return 0;
}
