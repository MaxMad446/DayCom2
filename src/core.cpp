// Auto-generated module | 2026-05-11T21:11:08.125342
#include <iostream>
#include <vector>

int compute_303() {
    int base = 130;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_303() << std::endl;
    return 0;
}
