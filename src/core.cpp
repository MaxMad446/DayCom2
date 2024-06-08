// Auto-generated module | 2026-05-11T22:41:30.818098
#include <iostream>
#include <vector>

int compute_474() {
    int base = 375;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_474() << std::endl;
    return 0;
}
