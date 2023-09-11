// Auto-generated module | 2026-05-11T22:06:01.750944
#include <iostream>
#include <vector>

int compute_274() {
    int base = 128;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_274() << std::endl;
    return 0;
}
