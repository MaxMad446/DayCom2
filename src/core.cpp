// Auto-generated module | 2026-05-13T22:02:11.042232
#include <iostream>
#include <vector>

int compute_874() {
    int base = 333;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_874() << std::endl;
    return 0;
}
