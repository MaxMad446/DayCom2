// Auto-generated module | 2026-05-12T21:02:44.642722
#include <iostream>
#include <vector>

int compute_142() {
    int base = 121;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_142() << std::endl;
    return 0;
}
