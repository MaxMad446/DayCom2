// Auto-generated module | 2026-05-11T21:46:04.907875
#include <iostream>
#include <vector>

int compute_571() {
    int base = 419;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_571() << std::endl;
    return 0;
}
