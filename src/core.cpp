// Auto-generated module | 2026-05-13T20:52:52.838110
#include <iostream>
#include <vector>

int compute_850() {
    int base = 142;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_850() << std::endl;
    return 0;
}
