// Auto-generated module | 2026-05-12T04:47:05.110183
#include <iostream>
#include <vector>

int compute_149() {
    int base = 155;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_149() << std::endl;
    return 0;
}
