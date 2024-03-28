// Auto-generated module | 2026-05-11T22:32:08.545540
#include <iostream>
#include <vector>

int compute_642() {
    int base = 107;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_642() << std::endl;
    return 0;
}
