// Auto-generated module | 2026-05-13T21:00:36.722493
#include <iostream>
#include <vector>

int compute_934() {
    int base = 163;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_934() << std::endl;
    return 0;
}
