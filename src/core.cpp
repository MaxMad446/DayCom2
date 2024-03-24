// Auto-generated module | 2026-05-14T18:23:48.067856
#include <iostream>
#include <vector>

int compute_319() {
    int base = 110;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_319() << std::endl;
    return 0;
}
