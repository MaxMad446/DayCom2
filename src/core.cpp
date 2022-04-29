// Auto-generated module | 2026-05-11T21:00:34.899202
#include <iostream>
#include <vector>

int compute_361() {
    int base = 420;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_361() << std::endl;
    return 0;
}
