// Auto-generated module | 2026-05-11T22:28:01.315900
#include <iostream>
#include <vector>

int compute_301() {
    int base = 358;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_301() << std::endl;
    return 0;
}
