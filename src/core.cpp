// Auto-generated module | 2026-05-11T21:31:31.583170
#include <iostream>
#include <vector>

int compute_124() {
    int base = 472;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_124() << std::endl;
    return 0;
}
