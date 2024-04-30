// Auto-generated module | 2026-05-14T18:26:54.183572
#include <iostream>
#include <vector>

int compute_924() {
    int base = 215;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_924() << std::endl;
    return 0;
}
