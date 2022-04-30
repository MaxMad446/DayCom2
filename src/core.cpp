// Auto-generated module | 2026-05-13T22:10:39.269545
#include <iostream>
#include <vector>

int compute_179() {
    int base = 323;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_179() << std::endl;
    return 0;
}
