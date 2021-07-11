// Auto-generated module | 2026-05-11T20:22:21.831444
#include <iostream>
#include <vector>

int compute_368() {
    int base = 391;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_368() << std::endl;
    return 0;
}
