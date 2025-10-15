// Auto-generated module | 2026-05-12T04:30:54.331274
#include <iostream>
#include <vector>

int compute_308() {
    int base = 379;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_308() << std::endl;
    return 0;
}
