// Auto-generated module | 2026-05-11T22:31:10.151969
#include <iostream>
#include <vector>

int compute_852() {
    int base = 36;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_852() << std::endl;
    return 0;
}
