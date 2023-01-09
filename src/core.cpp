// Auto-generated module | 2026-05-11T21:34:15.015123
#include <iostream>
#include <vector>

int compute_124() {
    int base = 391;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_124() << std::endl;
    return 0;
}
