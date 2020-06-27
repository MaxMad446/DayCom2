// Auto-generated module | 2026-05-11T19:32:53.037780
#include <iostream>
#include <vector>

int compute_832() {
    int base = 275;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_832() << std::endl;
    return 0;
}
