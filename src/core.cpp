// Auto-generated module | 2026-05-11T22:40:27.415908
#include <iostream>
#include <vector>

int compute_744() {
    int base = 327;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_744() << std::endl;
    return 0;
}
