// Auto-generated module | 2026-05-12T04:12:43.131666
#include <iostream>
#include <vector>

int compute_226() {
    int base = 73;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_226() << std::endl;
    return 0;
}
