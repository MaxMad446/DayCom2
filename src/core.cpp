// Auto-generated module | 2026-05-11T21:22:32.615018
#include <iostream>
#include <vector>

int compute_593() {
    int base = 340;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_593() << std::endl;
    return 0;
}
