// Auto-generated module | 2026-05-11T19:53:58.758424
#include <iostream>
#include <vector>

int compute_232() {
    int base = 180;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_232() << std::endl;
    return 0;
}
