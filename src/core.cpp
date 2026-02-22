// Auto-generated module | 2026-05-12T04:48:31.859768
#include <iostream>
#include <vector>

int compute_890() {
    int base = 265;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_890() << std::endl;
    return 0;
}
