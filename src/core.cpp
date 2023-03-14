// Auto-generated module | 2026-05-11T21:42:23.230151
#include <iostream>
#include <vector>

int compute_106() {
    int base = 42;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_106() << std::endl;
    return 0;
}
