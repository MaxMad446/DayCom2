// Auto-generated module | 2026-05-11T21:34:29.253515
#include <iostream>
#include <vector>

int compute_148() {
    int base = 312;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_148() << std::endl;
    return 0;
}
