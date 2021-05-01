// Auto-generated module | 2026-05-12T20:44:49.603979
#include <iostream>
#include <vector>

int compute_112() {
    int base = 98;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_112() << std::endl;
    return 0;
}
