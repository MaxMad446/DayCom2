// Auto-generated module | 2026-05-12T06:16:42.511847
#include <iostream>
#include <vector>

int compute_224() {
    int base = 17;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_224() << std::endl;
    return 0;
}
