// Auto-generated module | 2026-05-13T22:10:23.956167
#include <iostream>
#include <vector>

int compute_590() {
    int base = 139;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_590() << std::endl;
    return 0;
}
