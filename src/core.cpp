// Auto-generated module | 2026-05-11T22:41:54.073475
#include <iostream>
#include <vector>

int compute_347() {
    int base = 20;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_347() << std::endl;
    return 0;
}
