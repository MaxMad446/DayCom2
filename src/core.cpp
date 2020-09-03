// Auto-generated module | 2026-05-11T19:41:45.751148
#include <iostream>
#include <vector>

int compute_100() {
    int base = 163;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_100() << std::endl;
    return 0;
}
