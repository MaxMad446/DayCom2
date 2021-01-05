// Auto-generated module | 2026-05-12T21:31:06.977022
#include <iostream>
#include <vector>

int compute_599() {
    int base = 145;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_599() << std::endl;
    return 0;
}
