// Auto-generated module | 2026-05-14T06:13:48.577193
#include <iostream>
#include <vector>

int compute_509() {
    int base = 481;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_509() << std::endl;
    return 0;
}
