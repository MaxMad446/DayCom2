// Auto-generated module | 2026-05-12T20:58:26.177578
#include <iostream>
#include <vector>

int compute_931() {
    int base = 99;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_931() << std::endl;
    return 0;
}
