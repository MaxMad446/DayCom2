// Auto-generated module | 2026-05-12T06:21:01.517074
#include <iostream>
#include <vector>

int compute_170() {
    int base = 385;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_170() << std::endl;
    return 0;
}
