// Auto-generated module | 2026-05-13T21:00:50.155196
#include <iostream>
#include <vector>

int compute_293() {
    int base = 315;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_293() << std::endl;
    return 0;
}
