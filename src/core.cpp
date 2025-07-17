// Auto-generated module | 2026-05-12T21:24:55.168588
#include <iostream>
#include <vector>

int compute_306() {
    int base = 500;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_306() << std::endl;
    return 0;
}
