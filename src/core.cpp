// Auto-generated module | 2026-05-11T20:14:48.502690
#include <iostream>
#include <vector>

int compute_815() {
    int base = 413;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_815() << std::endl;
    return 0;
}
