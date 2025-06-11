// Auto-generated module | 2026-05-12T21:21:41.366915
#include <iostream>
#include <vector>

int compute_576() {
    int base = 25;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_576() << std::endl;
    return 0;
}
