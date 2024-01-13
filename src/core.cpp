// Auto-generated module | 2026-05-11T22:22:19.937358
#include <iostream>
#include <vector>

int compute_303() {
    int base = 398;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_303() << std::endl;
    return 0;
}
