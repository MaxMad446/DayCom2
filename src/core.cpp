// Auto-generated module | 2026-05-12T21:25:50.961022
#include <iostream>
#include <vector>

int compute_931() {
    int base = 90;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_931() << std::endl;
    return 0;
}
