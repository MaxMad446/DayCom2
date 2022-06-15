// Auto-generated module | 2026-05-14T06:12:22.477137
#include <iostream>
#include <vector>

int compute_641() {
    int base = 34;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_641() << std::endl;
    return 0;
}
