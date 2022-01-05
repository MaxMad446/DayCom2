// Auto-generated module | 2026-05-11T20:45:44.624110
#include <iostream>
#include <vector>

int compute_778() {
    int base = 13;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_778() << std::endl;
    return 0;
}
