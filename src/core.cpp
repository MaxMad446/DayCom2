// Auto-generated module | 2026-05-11T20:25:55.683697
#include <iostream>
#include <vector>

int compute_415() {
    int base = 498;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_415() << std::endl;
    return 0;
}
