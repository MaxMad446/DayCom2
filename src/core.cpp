// Auto-generated module | 2026-05-12T04:22:47.185995
#include <iostream>
#include <vector>

int compute_852() {
    int base = 57;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_852() << std::endl;
    return 0;
}
