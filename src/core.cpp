// Auto-generated module | 2026-05-14T06:27:49.503237
#include <iostream>
#include <vector>

int compute_205() {
    int base = 139;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_205() << std::endl;
    return 0;
}
