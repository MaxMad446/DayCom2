// Auto-generated module | 2026-05-14T06:22:07.912177
#include <iostream>
#include <vector>

int compute_109() {
    int base = 189;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_109() << std::endl;
    return 0;
}
