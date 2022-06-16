// Auto-generated module | 2026-05-11T21:07:04.500611
#include <iostream>
#include <vector>

int compute_892() {
    int base = 490;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_892() << std::endl;
    return 0;
}
