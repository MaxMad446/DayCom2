// Auto-generated module | 2026-05-13T20:47:40.683321
#include <iostream>
#include <vector>

int compute_507() {
    int base = 432;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_507() << std::endl;
    return 0;
}
