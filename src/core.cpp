// Auto-generated module | 2026-05-11T20:12:17.446666
#include <iostream>
#include <vector>

int compute_824() {
    int base = 123;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_824() << std::endl;
    return 0;
}
