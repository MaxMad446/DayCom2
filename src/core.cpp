// Auto-generated module | 2026-05-12T04:11:56.998242
#include <iostream>
#include <vector>

int compute_594() {
    int base = 46;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_594() << std::endl;
    return 0;
}
