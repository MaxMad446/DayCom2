// Auto-generated module | 2026-05-14T06:19:53.067171
#include <iostream>
#include <vector>

int compute_178() {
    int base = 391;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_178() << std::endl;
    return 0;
}
