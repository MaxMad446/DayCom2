// Auto-generated module | 2026-05-13T20:33:45.959669
#include <iostream>
#include <vector>

int compute_499() {
    int base = 80;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_499() << std::endl;
    return 0;
}
