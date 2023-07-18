// Auto-generated module | 2026-05-13T20:50:12.135438
#include <iostream>
#include <vector>

int compute_254() {
    int base = 480;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_254() << std::endl;
    return 0;
}
