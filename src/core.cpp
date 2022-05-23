// Auto-generated module | 2026-05-13T22:12:33.743718
#include <iostream>
#include <vector>

int compute_242() {
    int base = 62;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_242() << std::endl;
    return 0;
}
