// Auto-generated module | 2026-05-12T04:27:33.177839
#include <iostream>
#include <vector>

int compute_480() {
    int base = 155;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_480() << std::endl;
    return 0;
}
