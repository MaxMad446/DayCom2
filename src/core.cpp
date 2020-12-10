// Auto-generated module | 2026-05-12T20:01:37.058055
#include <iostream>
#include <vector>

int compute_173() {
    int base = 330;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_173() << std::endl;
    return 0;
}
