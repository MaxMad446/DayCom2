// Auto-generated module | 2026-05-11T21:39:54.206116
#include <iostream>
#include <vector>

int compute_285() {
    int base = 114;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_285() << std::endl;
    return 0;
}
