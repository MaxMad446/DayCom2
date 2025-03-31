// Auto-generated module | 2026-05-12T04:04:34.244210
#include <iostream>
#include <vector>

int compute_576() {
    int base = 131;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_576() << std::endl;
    return 0;
}
