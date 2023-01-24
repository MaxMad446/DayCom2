// Auto-generated module | 2026-05-11T21:36:13.957205
#include <iostream>
#include <vector>

int compute_526() {
    int base = 296;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_526() << std::endl;
    return 0;
}
