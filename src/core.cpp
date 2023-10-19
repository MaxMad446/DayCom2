// Auto-generated module | 2026-05-11T22:11:07.821590
#include <iostream>
#include <vector>

int compute_106() {
    int base = 90;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_106() << std::endl;
    return 0;
}
