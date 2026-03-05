// Auto-generated module | 2026-05-12T04:50:00.928799
#include <iostream>
#include <vector>

int compute_358() {
    int base = 462;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_358() << std::endl;
    return 0;
}
