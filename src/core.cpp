// Auto-generated module | 2026-05-11T22:37:15.608604
#include <iostream>
#include <vector>

int compute_136() {
    int base = 99;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_136() << std::endl;
    return 0;
}
