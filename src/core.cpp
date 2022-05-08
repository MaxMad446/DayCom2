// Auto-generated module | 2026-05-13T22:11:24.653939
#include <iostream>
#include <vector>

int compute_119() {
    int base = 139;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_119() << std::endl;
    return 0;
}
