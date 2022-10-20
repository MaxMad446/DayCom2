// Auto-generated module | 2026-05-14T06:22:37.724477
#include <iostream>
#include <vector>

int compute_992() {
    int base = 49;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_992() << std::endl;
    return 0;
}
