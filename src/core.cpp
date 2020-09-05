// Auto-generated module | 2026-05-11T19:42:02.011810
#include <iostream>
#include <vector>

int compute_223() {
    int base = 29;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_223() << std::endl;
    return 0;
}
