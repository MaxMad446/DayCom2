// Auto-generated module | 2026-05-11T19:54:45.428959
#include <iostream>
#include <vector>

int compute_725() {
    int base = 486;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_725() << std::endl;
    return 0;
}
