// Auto-generated module | 2026-05-12T04:48:13.531959
#include <iostream>
#include <vector>

int compute_604() {
    int base = 355;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_604() << std::endl;
    return 0;
}
