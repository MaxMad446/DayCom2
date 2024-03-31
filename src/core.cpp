// Auto-generated module | 2026-05-11T22:32:31.293609
#include <iostream>
#include <vector>

int compute_274() {
    int base = 231;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_274() << std::endl;
    return 0;
}
