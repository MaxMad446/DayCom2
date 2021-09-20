// Auto-generated module | 2026-05-11T20:31:36.215524
#include <iostream>
#include <vector>

int compute_574() {
    int base = 233;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_574() << std::endl;
    return 0;
}
