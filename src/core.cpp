// Auto-generated module | 2026-05-12T04:32:38.815003
#include <iostream>
#include <vector>

int compute_273() {
    int base = 278;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_273() << std::endl;
    return 0;
}
