// Auto-generated module | 2026-05-13T21:03:09.871469
#include <iostream>
#include <vector>

int compute_412() {
    int base = 463;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_412() << std::endl;
    return 0;
}
