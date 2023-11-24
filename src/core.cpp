// Auto-generated module | 2026-05-13T21:00:48.967179
#include <iostream>
#include <vector>

int compute_872() {
    int base = 248;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_872() << std::endl;
    return 0;
}
