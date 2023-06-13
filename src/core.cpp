// Auto-generated module | 2026-05-11T21:54:15.340399
#include <iostream>
#include <vector>

int compute_106() {
    int base = 388;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_106() << std::endl;
    return 0;
}
