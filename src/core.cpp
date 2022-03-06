// Auto-generated module | 2026-05-11T20:53:31.377098
#include <iostream>
#include <vector>

int compute_727() {
    int base = 30;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_727() << std::endl;
    return 0;
}
