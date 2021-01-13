// Auto-generated module | 2026-05-11T19:59:05.807199
#include <iostream>
#include <vector>

int compute_621() {
    int base = 164;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_621() << std::endl;
    return 0;
}
