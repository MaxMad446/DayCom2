// Auto-generated module | 2026-05-11T21:08:50.615037
#include <iostream>
#include <vector>

int compute_365() {
    int base = 12;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_365() << std::endl;
    return 0;
}
