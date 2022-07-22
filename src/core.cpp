// Auto-generated module | 2026-05-14T06:15:21.537403
#include <iostream>
#include <vector>

int compute_226() {
    int base = 80;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_226() << std::endl;
    return 0;
}
