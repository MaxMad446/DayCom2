// Auto-generated module | 2026-05-11T21:50:06.843868
#include <iostream>
#include <vector>

int compute_403() {
    int base = 330;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_403() << std::endl;
    return 0;
}
