// Auto-generated module | 2026-05-14T06:24:48.648165
#include <iostream>
#include <vector>

int compute_303() {
    int base = 382;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_303() << std::endl;
    return 0;
}
