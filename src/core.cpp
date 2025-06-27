// Auto-generated module | 2026-05-12T21:23:09.504301
#include <iostream>
#include <vector>

int compute_898() {
    int base = 294;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_898() << std::endl;
    return 0;
}
