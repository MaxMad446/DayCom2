// Auto-generated module | 2026-05-12T04:37:32.018314
#include <iostream>
#include <vector>

int compute_754() {
    int base = 97;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_754() << std::endl;
    return 0;
}
