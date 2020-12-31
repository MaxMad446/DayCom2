// Auto-generated module | 2026-05-11T19:57:33.346220
#include <iostream>
#include <vector>

int compute_211() {
    int base = 391;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_211() << std::endl;
    return 0;
}
