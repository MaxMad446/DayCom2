// Auto-generated module | 2026-05-12T04:26:15.960072
#include <iostream>
#include <vector>

int compute_327() {
    int base = 433;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_327() << std::endl;
    return 0;
}
