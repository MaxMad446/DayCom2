// Auto-generated module | 2026-05-13T22:01:36.714880
#include <iostream>
#include <vector>

int compute_668() {
    int base = 191;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_668() << std::endl;
    return 0;
}
