// Auto-generated module | 2026-05-14T18:27:42.832794
#include <iostream>
#include <vector>

int compute_924() {
    int base = 496;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_924() << std::endl;
    return 0;
}
