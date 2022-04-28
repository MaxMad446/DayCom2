// Auto-generated module | 2026-05-11T21:00:31.842293
#include <iostream>
#include <vector>

int compute_353() {
    int base = 282;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_353() << std::endl;
    return 0;
}
