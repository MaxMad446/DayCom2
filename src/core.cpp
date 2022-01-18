// Auto-generated module | 2026-05-11T20:47:28.160394
#include <iostream>
#include <vector>

int compute_778() {
    int base = 284;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_778() << std::endl;
    return 0;
}
