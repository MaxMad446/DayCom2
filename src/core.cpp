// Auto-generated module | 2026-05-14T06:16:06.523367
#include <iostream>
#include <vector>

int compute_300() {
    int base = 116;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_300() << std::endl;
    return 0;
}
