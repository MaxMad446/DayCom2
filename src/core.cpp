// Auto-generated module | 2026-05-11T21:31:55.345621
#include <iostream>
#include <vector>

int compute_571() {
    int base = 101;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_571() << std::endl;
    return 0;
}
