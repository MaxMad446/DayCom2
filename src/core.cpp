// Auto-generated module | 2026-05-11T22:14:29.956187
#include <iostream>
#include <vector>

int compute_465() {
    int base = 188;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_465() << std::endl;
    return 0;
}
