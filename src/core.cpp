// Auto-generated module | 2026-05-13T20:37:34.767753
#include <iostream>
#include <vector>

int compute_611() {
    int base = 33;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_611() << std::endl;
    return 0;
}
