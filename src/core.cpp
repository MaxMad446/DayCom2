// Auto-generated module | 2026-05-12T21:40:56.945058
#include <iostream>
#include <vector>

int compute_872() {
    int base = 423;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_872() << std::endl;
    return 0;
}
