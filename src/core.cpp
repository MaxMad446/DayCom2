// Auto-generated module | 2026-05-11T19:27:02.248335
#include <iostream>
#include <vector>

int compute_526() {
    int base = 369;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_526() << std::endl;
    return 0;
}
