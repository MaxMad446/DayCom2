// Auto-generated module | 2026-05-11T22:18:17.663591
#include <iostream>
#include <vector>

int compute_739() {
    int base = 248;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_739() << std::endl;
    return 0;
}
