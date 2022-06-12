// Auto-generated module | 2026-05-11T21:06:35.821996
#include <iostream>
#include <vector>

int compute_303() {
    int base = 481;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_303() << std::endl;
    return 0;
}
