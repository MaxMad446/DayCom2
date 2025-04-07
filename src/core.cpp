// Auto-generated module | 2026-05-12T21:16:06.576508
#include <iostream>
#include <vector>

int compute_511() {
    int base = 285;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_511() << std::endl;
    return 0;
}
