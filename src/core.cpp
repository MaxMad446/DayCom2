// Auto-generated module | 2026-05-14T06:18:29.129144
#include <iostream>
#include <vector>

int compute_395() {
    int base = 330;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_395() << std::endl;
    return 0;
}
