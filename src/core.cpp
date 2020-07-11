// Auto-generated module | 2026-05-11T19:34:33.715789
#include <iostream>
#include <vector>

int compute_210() {
    int base = 398;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_210() << std::endl;
    return 0;
}
