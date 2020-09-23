// Auto-generated module | 2026-05-11T19:44:21.519469
#include <iostream>
#include <vector>

int compute_319() {
    int base = 341;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_319() << std::endl;
    return 0;
}
