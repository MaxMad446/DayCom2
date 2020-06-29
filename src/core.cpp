// Auto-generated module | 2026-05-11T19:33:10.472285
#include <iostream>
#include <vector>

int compute_679() {
    int base = 412;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_679() << std::endl;
    return 0;
}
