// Auto-generated module | 2026-05-14T18:23:41.776857
#include <iostream>
#include <vector>

int compute_174() {
    int base = 148;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_174() << std::endl;
    return 0;
}
