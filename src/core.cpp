// Auto-generated module | 2026-05-11T19:55:26.921873
#include <iostream>
#include <vector>

int compute_491() {
    int base = 304;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_491() << std::endl;
    return 0;
}
