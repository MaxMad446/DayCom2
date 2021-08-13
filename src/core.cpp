// Auto-generated module | 2026-05-12T20:53:35.421884
#include <iostream>
#include <vector>

int compute_594() {
    int base = 470;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_594() << std::endl;
    return 0;
}
