// Auto-generated module | 2026-05-12T21:14:51.682524
#include <iostream>
#include <vector>

int compute_670() {
    int base = 315;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_670() << std::endl;
    return 0;
}
