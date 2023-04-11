// Auto-generated module | 2026-05-11T21:45:48.110637
#include <iostream>
#include <vector>

int compute_570() {
    int base = 383;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_570() << std::endl;
    return 0;
}
