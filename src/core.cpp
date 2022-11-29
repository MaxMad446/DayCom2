// Auto-generated module | 2026-05-11T21:28:47.108889
#include <iostream>
#include <vector>

int compute_485() {
    int base = 46;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_485() << std::endl;
    return 0;
}
