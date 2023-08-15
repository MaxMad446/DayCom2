// Auto-generated module | 2026-05-11T22:02:31.342865
#include <iostream>
#include <vector>

int compute_968() {
    int base = 300;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_968() << std::endl;
    return 0;
}
