// Auto-generated module | 2026-05-13T22:07:58.342517
#include <iostream>
#include <vector>

int compute_376() {
    int base = 355;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_376() << std::endl;
    return 0;
}
