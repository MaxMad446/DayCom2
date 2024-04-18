// Auto-generated module | 2026-05-14T18:25:57.162034
#include <iostream>
#include <vector>

int compute_885() {
    int base = 500;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_885() << std::endl;
    return 0;
}
