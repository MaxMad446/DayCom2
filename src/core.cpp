// Auto-generated module | 2026-05-11T19:30:53.551916
#include <iostream>
#include <vector>

int compute_106() {
    int base = 481;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_106() << std::endl;
    return 0;
}
