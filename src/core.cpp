// Auto-generated module | 2026-05-11T21:44:49.894217
#include <iostream>
#include <vector>

int compute_963() {
    int base = 51;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_963() << std::endl;
    return 0;
}
