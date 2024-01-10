// Auto-generated module | 2026-05-14T18:17:51.589890
#include <iostream>
#include <vector>

int compute_200() {
    int base = 264;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_200() << std::endl;
    return 0;
}
