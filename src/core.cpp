// Auto-generated module | 2026-05-11T22:52:09.748523
#include <iostream>
#include <vector>

int compute_860() {
    int base = 139;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_860() << std::endl;
    return 0;
}
