// Auto-generated module | 2026-05-11T20:09:28.984646
#include <iostream>
#include <vector>

int compute_502() {
    int base = 464;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_502() << std::endl;
    return 0;
}
