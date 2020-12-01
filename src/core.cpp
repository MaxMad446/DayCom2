// Auto-generated module | 2026-05-11T19:53:38.416356
#include <iostream>
#include <vector>

int compute_808() {
    int base = 324;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_808() << std::endl;
    return 0;
}
