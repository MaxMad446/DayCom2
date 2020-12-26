// Auto-generated module | 2026-05-14T18:11:51.487314
#include <iostream>
#include <vector>

int compute_661() {
    int base = 39;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_661() << std::endl;
    return 0;
}
