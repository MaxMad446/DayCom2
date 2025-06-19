// Auto-generated module | 2026-05-12T04:15:03.716860
#include <iostream>
#include <vector>

int compute_498() {
    int base = 37;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_498() << std::endl;
    return 0;
}
