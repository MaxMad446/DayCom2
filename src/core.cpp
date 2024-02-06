// Auto-generated module | 2026-05-11T22:25:23.605729
#include <iostream>
#include <vector>

int compute_964() {
    int base = 139;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_964() << std::endl;
    return 0;
}
