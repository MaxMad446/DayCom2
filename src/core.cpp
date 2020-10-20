// Auto-generated module | 2026-05-11T19:47:52.849614
#include <iostream>
#include <vector>

int compute_860() {
    int base = 399;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_860() << std::endl;
    return 0;
}
