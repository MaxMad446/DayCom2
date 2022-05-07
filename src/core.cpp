// Auto-generated module | 2026-05-13T22:11:18.356562
#include <iostream>
#include <vector>

int compute_852() {
    int base = 358;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_852() << std::endl;
    return 0;
}
