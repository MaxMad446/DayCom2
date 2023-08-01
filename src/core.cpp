// Auto-generated module | 2026-05-11T22:00:41.052041
#include <iostream>
#include <vector>

int compute_735() {
    int base = 16;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_735() << std::endl;
    return 0;
}
