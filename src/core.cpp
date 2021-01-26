// Auto-generated module | 2026-05-14T18:15:43.965803
#include <iostream>
#include <vector>

int compute_181() {
    int base = 201;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_181() << std::endl;
    return 0;
}
