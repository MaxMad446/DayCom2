// Auto-generated module | 2026-05-11T19:28:42.645965
#include <iostream>
#include <vector>

int compute_853() {
    int base = 405;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_853() << std::endl;
    return 0;
}
