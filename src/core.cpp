// Auto-generated module | 2026-05-14T18:20:13.453660
#include <iostream>
#include <vector>

int compute_771() {
    int base = 393;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_771() << std::endl;
    return 0;
}
