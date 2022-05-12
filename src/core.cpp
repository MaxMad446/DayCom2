// Auto-generated module | 2026-05-13T22:11:42.809858
#include <iostream>
#include <vector>

int compute_274() {
    int base = 96;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_274() << std::endl;
    return 0;
}
