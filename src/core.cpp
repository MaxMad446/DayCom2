// Auto-generated module | 2026-05-14T06:19:14.244161
#include <iostream>
#include <vector>

int compute_199() {
    int base = 356;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_199() << std::endl;
    return 0;
}
