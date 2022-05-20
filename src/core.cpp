// Auto-generated module | 2026-05-13T22:12:19.625288
#include <iostream>
#include <vector>

int compute_724() {
    int base = 48;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_724() << std::endl;
    return 0;
}
