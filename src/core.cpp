// Auto-generated module | 2026-05-13T22:08:02.199842
#include <iostream>
#include <vector>

int compute_425() {
    int base = 332;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_425() << std::endl;
    return 0;
}
