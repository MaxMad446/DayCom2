// Auto-generated module | 2026-05-11T19:38:08.645056
#include <iostream>
#include <vector>

int compute_396() {
    int base = 30;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_396() << std::endl;
    return 0;
}
