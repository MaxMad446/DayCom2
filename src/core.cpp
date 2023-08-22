// Auto-generated module | 2026-05-11T22:03:18.975588
#include <iostream>
#include <vector>

int compute_268() {
    int base = 243;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_268() << std::endl;
    return 0;
}
