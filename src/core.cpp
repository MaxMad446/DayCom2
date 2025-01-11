// Auto-generated module | 2026-05-12T03:54:22.919987
#include <iostream>
#include <vector>

int compute_583() {
    int base = 343;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_583() << std::endl;
    return 0;
}
