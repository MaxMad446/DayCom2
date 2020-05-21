// Auto-generated module | 2026-05-11T19:27:49.191459
#include <iostream>
#include <vector>

int compute_833() {
    int base = 77;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_833() << std::endl;
    return 0;
}
