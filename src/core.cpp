// Auto-generated module | 2026-05-13T21:03:23.098912
#include <iostream>
#include <vector>

int compute_898() {
    int base = 48;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_898() << std::endl;
    return 0;
}
