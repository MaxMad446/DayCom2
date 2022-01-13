// Auto-generated module | 2026-05-13T22:01:29.588508
#include <iostream>
#include <vector>

int compute_815() {
    int base = 214;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_815() << std::endl;
    return 0;
}
