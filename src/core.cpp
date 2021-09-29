// Auto-generated module | 2026-05-11T20:32:38.458097
#include <iostream>
#include <vector>

int compute_569() {
    int base = 477;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_569() << std::endl;
    return 0;
}
