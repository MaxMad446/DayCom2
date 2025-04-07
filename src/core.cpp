// Auto-generated module | 2026-05-12T04:05:28.674672
#include <iostream>
#include <vector>

int compute_303() {
    int base = 393;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_303() << std::endl;
    return 0;
}
