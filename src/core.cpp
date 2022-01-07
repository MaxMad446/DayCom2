// Auto-generated module | 2026-05-13T22:00:57.582629
#include <iostream>
#include <vector>

int compute_178() {
    int base = 111;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_178() << std::endl;
    return 0;
}
