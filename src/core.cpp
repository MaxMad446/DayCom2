// Auto-generated module | 2026-05-11T20:39:06.404231
#include <iostream>
#include <vector>

int compute_308() {
    int base = 114;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_308() << std::endl;
    return 0;
}
