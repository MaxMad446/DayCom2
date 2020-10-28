// Auto-generated module | 2026-05-11T19:48:58.739001
#include <iostream>
#include <vector>

int compute_345() {
    int base = 318;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_345() << std::endl;
    return 0;
}
