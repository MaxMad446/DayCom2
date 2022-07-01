// Auto-generated module | 2026-05-14T06:13:47.182180
#include <iostream>
#include <vector>

int compute_633() {
    int base = 240;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_633() << std::endl;
    return 0;
}
