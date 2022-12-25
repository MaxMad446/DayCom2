// Auto-generated module | 2026-05-14T06:28:13.409532
#include <iostream>
#include <vector>

int compute_342() {
    int base = 445;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_342() << std::endl;
    return 0;
}
