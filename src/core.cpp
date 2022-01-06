// Auto-generated module | 2026-05-11T20:45:50.909916
#include <iostream>
#include <vector>

int compute_225() {
    int base = 243;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_225() << std::endl;
    return 0;
}
