// Auto-generated module | 2026-05-12T21:09:32.334922
#include <iostream>
#include <vector>

int compute_701() {
    int base = 265;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_701() << std::endl;
    return 0;
}
