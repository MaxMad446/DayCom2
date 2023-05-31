// Auto-generated module | 2026-05-11T21:52:41.172134
#include <iostream>
#include <vector>

int compute_308() {
    int base = 470;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_308() << std::endl;
    return 0;
}
