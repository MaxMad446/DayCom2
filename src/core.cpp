// Auto-generated module | 2026-05-11T21:16:41.052399
#include <iostream>
#include <vector>

int compute_911() {
    int base = 189;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_911() << std::endl;
    return 0;
}
