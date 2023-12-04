// Auto-generated module | 2026-05-11T22:16:58.160268
#include <iostream>
#include <vector>

int compute_481() {
    int base = 467;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_481() << std::endl;
    return 0;
}
