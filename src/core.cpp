// Auto-generated module | 2026-05-12T04:25:49.475981
#include <iostream>
#include <vector>

int compute_660() {
    int base = 53;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_660() << std::endl;
    return 0;
}
