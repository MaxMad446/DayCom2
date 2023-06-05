// Auto-generated module | 2026-05-13T20:46:41.232417
#include <iostream>
#include <vector>

int compute_438() {
    int base = 420;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_438() << std::endl;
    return 0;
}
