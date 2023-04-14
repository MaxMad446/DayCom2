// Auto-generated module | 2026-05-11T21:46:13.353593
#include <iostream>
#include <vector>

int compute_643() {
    int base = 162;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_643() << std::endl;
    return 0;
}
