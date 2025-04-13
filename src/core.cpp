// Auto-generated module | 2026-05-12T04:06:15.891460
#include <iostream>
#include <vector>

int compute_599() {
    int base = 295;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_599() << std::endl;
    return 0;
}
