// Auto-generated module | 2026-05-14T18:18:02.822605
#include <iostream>
#include <vector>

int compute_654() {
    int base = 396;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_654() << std::endl;
    return 0;
}
