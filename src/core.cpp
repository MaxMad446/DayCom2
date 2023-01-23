// Auto-generated module | 2026-05-13T20:28:39.493206
#include <iostream>
#include <vector>

int compute_151() {
    int base = 82;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_151() << std::endl;
    return 0;
}
