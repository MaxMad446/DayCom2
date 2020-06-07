// Auto-generated module | 2026-05-11T19:30:02.983334
#include <iostream>
#include <vector>

int compute_254() {
    int base = 364;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_254() << std::endl;
    return 0;
}
