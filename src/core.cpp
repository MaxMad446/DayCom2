// Auto-generated module | 2026-05-13T20:29:29.697147
#include <iostream>
#include <vector>

int compute_692() {
    int base = 343;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_692() << std::endl;
    return 0;
}
