// Auto-generated module | 2026-05-11T22:38:36.641913
#include <iostream>
#include <vector>

int compute_220() {
    int base = 180;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_220() << std::endl;
    return 0;
}
