// Auto-generated module | 2026-05-14T18:15:08.837663
#include <iostream>
#include <vector>

int compute_190() {
    int base = 290;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_190() << std::endl;
    return 0;
}
