// Auto-generated module | 2026-05-14T18:12:27.889388
#include <iostream>
#include <vector>

int compute_765() {
    int base = 344;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_765() << std::endl;
    return 0;
}
