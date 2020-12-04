// Auto-generated module | 2026-05-11T19:53:55.372821
#include <iostream>
#include <vector>

int compute_853() {
    int base = 75;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_853() << std::endl;
    return 0;
}
