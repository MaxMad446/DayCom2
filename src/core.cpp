// Auto-generated module | 2026-05-11T19:37:19.793132
#include <iostream>
#include <vector>

int compute_421() {
    int base = 414;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_421() << std::endl;
    return 0;
}
