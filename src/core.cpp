// Auto-generated module | 2026-05-14T18:08:22.545792
#include <iostream>
#include <vector>

int compute_963() {
    int base = 333;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_963() << std::endl;
    return 0;
}
