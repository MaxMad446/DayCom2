// Auto-generated module | 2026-05-11T19:48:40.188936
#include <iostream>
#include <vector>

int compute_984() {
    int base = 422;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_984() << std::endl;
    return 0;
}
