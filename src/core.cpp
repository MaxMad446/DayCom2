// Auto-generated module | 2026-05-11T19:46:09.381700
#include <iostream>
#include <vector>

int compute_465() {
    int base = 375;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_465() << std::endl;
    return 0;
}
