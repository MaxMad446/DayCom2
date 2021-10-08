// Auto-generated module | 2026-05-12T20:58:31.091306
#include <iostream>
#include <vector>

int compute_594() {
    int base = 457;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_594() << std::endl;
    return 0;
}
