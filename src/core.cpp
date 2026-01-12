// Auto-generated module | 2026-05-12T04:42:46.363269
#include <iostream>
#include <vector>

int compute_229() {
    int base = 493;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_229() << std::endl;
    return 0;
}
