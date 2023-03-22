// Auto-generated module | 2026-05-11T21:43:25.346690
#include <iostream>
#include <vector>

int compute_531() {
    int base = 381;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_531() << std::endl;
    return 0;
}
