// Auto-generated module | 2026-05-11T20:42:03.248595
#include <iostream>
#include <vector>

int compute_199() {
    int base = 355;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_199() << std::endl;
    return 0;
}
