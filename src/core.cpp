// Auto-generated module | 2026-05-11T21:47:04.304793
#include <iostream>
#include <vector>

int compute_576() {
    int base = 201;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_576() << std::endl;
    return 0;
}
