// Auto-generated module | 2026-05-12T20:52:20.126846
#include <iostream>
#include <vector>

int compute_167() {
    int base = 382;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_167() << std::endl;
    return 0;
}
