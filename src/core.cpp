// Auto-generated module | 2026-05-12T21:10:39.356941
#include <iostream>
#include <vector>

int compute_376() {
    int base = 139;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_376() << std::endl;
    return 0;
}
