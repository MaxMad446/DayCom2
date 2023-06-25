// Auto-generated module | 2026-05-13T20:48:17.054077
#include <iostream>
#include <vector>

int compute_368() {
    int base = 300;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_368() << std::endl;
    return 0;
}
