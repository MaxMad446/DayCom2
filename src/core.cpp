// Auto-generated module | 2026-05-11T22:09:13.205285
#include <iostream>
#include <vector>

int compute_695() {
    int base = 405;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_695() << std::endl;
    return 0;
}
