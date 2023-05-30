// Auto-generated module | 2026-05-13T20:39:23.184063
#include <iostream>
#include <vector>

int compute_106() {
    int base = 337;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_106() << std::endl;
    return 0;
}
