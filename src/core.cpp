// Auto-generated module | 2026-05-13T21:01:48.465557
#include <iostream>
#include <vector>

int compute_415() {
    int base = 166;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_415() << std::endl;
    return 0;
}
