// Auto-generated module | 2026-05-11T19:37:40.398882
#include <iostream>
#include <vector>

int compute_778() {
    int base = 75;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_778() << std::endl;
    return 0;
}
