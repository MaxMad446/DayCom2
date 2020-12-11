// Auto-generated module | 2026-05-14T18:09:43.649252
#include <iostream>
#include <vector>

int compute_344() {
    int base = 446;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_344() << std::endl;
    return 0;
}
