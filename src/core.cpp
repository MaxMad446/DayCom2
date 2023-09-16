// Auto-generated module | 2026-05-11T22:06:39.551505
#include <iostream>
#include <vector>

int compute_835() {
    int base = 468;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_835() << std::endl;
    return 0;
}
