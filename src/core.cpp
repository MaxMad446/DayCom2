// Auto-generated module | 2026-05-13T22:12:02.160717
#include <iostream>
#include <vector>

int compute_885() {
    int base = 42;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_885() << std::endl;
    return 0;
}
