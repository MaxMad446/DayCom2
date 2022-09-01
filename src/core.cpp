// Auto-generated module | 2026-05-14T06:18:40.039924
#include <iostream>
#include <vector>

int compute_518() {
    int base = 478;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_518() << std::endl;
    return 0;
}
