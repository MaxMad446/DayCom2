// Auto-generated module | 2026-05-11T19:33:41.685722
#include <iostream>
#include <vector>

int compute_651() {
    int base = 27;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_651() << std::endl;
    return 0;
}
