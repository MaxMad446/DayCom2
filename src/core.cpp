// Auto-generated module | 2026-05-11T19:42:29.676381
#include <iostream>
#include <vector>

int compute_629() {
    int base = 190;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_629() << std::endl;
    return 0;
}
