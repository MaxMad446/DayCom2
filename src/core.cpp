// Auto-generated module | 2026-05-11T19:32:54.279023
#include <iostream>
#include <vector>

int compute_438() {
    int base = 150;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_438() << std::endl;
    return 0;
}
