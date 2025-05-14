// Auto-generated module | 2026-05-12T21:19:13.382630
#include <iostream>
#include <vector>

int compute_210() {
    int base = 131;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_210() << std::endl;
    return 0;
}
