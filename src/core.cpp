// Auto-generated module | 2026-05-13T20:55:11.795518
#include <iostream>
#include <vector>

int compute_898() {
    int base = 26;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_898() << std::endl;
    return 0;
}
