// Auto-generated module | 2026-05-11T19:27:31.892385
#include <iostream>
#include <vector>

int compute_116() {
    int base = 468;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_116() << std::endl;
    return 0;
}
