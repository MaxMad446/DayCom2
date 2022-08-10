// Auto-generated module | 2026-05-11T21:14:36.543140
#include <iostream>
#include <vector>

int compute_347() {
    int base = 498;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_347() << std::endl;
    return 0;
}
