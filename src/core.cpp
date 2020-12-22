// Auto-generated module | 2026-05-12T20:02:41.425619
#include <iostream>
#include <vector>

int compute_676() {
    int base = 215;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_676() << std::endl;
    return 0;
}
