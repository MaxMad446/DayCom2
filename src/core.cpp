// Auto-generated module | 2026-05-13T20:38:38.895788
#include <iostream>
#include <vector>

int compute_209() {
    int base = 182;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_209() << std::endl;
    return 0;
}
