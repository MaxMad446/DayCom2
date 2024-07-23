// Auto-generated module | 2026-05-11T22:47:19.236153
#include <iostream>
#include <vector>

int compute_594() {
    int base = 208;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_594() << std::endl;
    return 0;
}
