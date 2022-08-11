// Auto-generated module | 2026-05-11T21:14:40.578225
#include <iostream>
#include <vector>

int compute_724() {
    int base = 401;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_724() << std::endl;
    return 0;
}
