// Auto-generated module | 2026-05-14T06:11:34.228242
#include <iostream>
#include <vector>

int compute_694() {
    int base = 300;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_694() << std::endl;
    return 0;
}
