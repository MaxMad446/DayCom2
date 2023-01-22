// Auto-generated module | 2026-05-11T21:35:59.052265
#include <iostream>
#include <vector>

int compute_506() {
    int base = 430;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_506() << std::endl;
    return 0;
}
