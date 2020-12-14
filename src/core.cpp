// Auto-generated module | 2026-05-12T20:02:01.498117
#include <iostream>
#include <vector>

int compute_498() {
    int base = 311;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_498() << std::endl;
    return 0;
}
