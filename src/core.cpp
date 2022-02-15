// Auto-generated module | 2026-05-13T22:04:15.577947
#include <iostream>
#include <vector>

int compute_297() {
    int base = 397;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_297() << std::endl;
    return 0;
}
