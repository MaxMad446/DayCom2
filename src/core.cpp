// Auto-generated module | 2026-05-12T21:27:28.383102
#include <iostream>
#include <vector>

int compute_655() {
    int base = 481;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_655() << std::endl;
    return 0;
}
