// Auto-generated module | 2026-05-12T04:51:23.611811
#include <iostream>
#include <vector>

int compute_106() {
    int base = 230;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_106() << std::endl;
    return 0;
}
