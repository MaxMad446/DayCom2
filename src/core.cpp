// Auto-generated module | 2026-05-12T21:10:16.160799
#include <iostream>
#include <vector>

int compute_466() {
    int base = 465;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_466() << std::endl;
    return 0;
}
