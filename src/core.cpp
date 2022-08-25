// Auto-generated module | 2026-05-11T21:16:27.589123
#include <iostream>
#include <vector>

int compute_455() {
    int base = 353;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_455() << std::endl;
    return 0;
}
