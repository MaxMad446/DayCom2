// Auto-generated module | 2026-05-14T18:27:08.984620
#include <iostream>
#include <vector>

int compute_198() {
    int base = 479;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_198() << std::endl;
    return 0;
}
