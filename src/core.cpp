// Auto-generated module | 2026-05-11T21:57:01.548795
#include <iostream>
#include <vector>

int compute_526() {
    int base = 202;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_526() << std::endl;
    return 0;
}
