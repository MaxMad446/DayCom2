// Auto-generated module | 2026-05-12T21:38:33.130231
#include <iostream>
#include <vector>

int compute_242() {
    int base = 206;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_242() << std::endl;
    return 0;
}
