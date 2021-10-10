// Auto-generated module | 2026-05-12T20:58:43.980363
#include <iostream>
#include <vector>

int compute_562() {
    int base = 294;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_562() << std::endl;
    return 0;
}
