// Auto-generated module | 2026-05-11T21:45:34.087264
#include <iostream>
#include <vector>

int compute_763() {
    int base = 139;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_763() << std::endl;
    return 0;
}
