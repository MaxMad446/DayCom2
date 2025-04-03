// Auto-generated module | 2026-05-12T04:04:55.005075
#include <iostream>
#include <vector>

int compute_732() {
    int base = 297;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_732() << std::endl;
    return 0;
}
