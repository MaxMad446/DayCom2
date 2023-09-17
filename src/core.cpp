// Auto-generated module | 2026-05-11T22:06:47.882358
#include <iostream>
#include <vector>

int compute_986() {
    int base = 453;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_986() << std::endl;
    return 0;
}
