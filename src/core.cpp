// Auto-generated module | 2026-05-12T20:54:35.340894
#include <iostream>
#include <vector>

int compute_582() {
    int base = 449;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_582() << std::endl;
    return 0;
}
