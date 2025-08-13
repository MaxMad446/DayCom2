// Auto-generated module | 2026-05-12T04:22:17.325251
#include <iostream>
#include <vector>

int compute_308() {
    int base = 325;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_308() << std::endl;
    return 0;
}
