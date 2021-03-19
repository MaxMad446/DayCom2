// Auto-generated module | 2026-05-11T20:07:32.160085
#include <iostream>
#include <vector>

int compute_158() {
    int base = 199;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_158() << std::endl;
    return 0;
}
