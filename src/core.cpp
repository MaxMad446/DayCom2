// Auto-generated module | 2026-05-11T21:47:46.760628
#include <iostream>
#include <vector>

int compute_570() {
    int base = 297;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_570() << std::endl;
    return 0;
}
