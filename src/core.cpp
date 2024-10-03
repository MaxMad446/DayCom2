// Auto-generated module | 2026-05-12T03:41:15.030834
#include <iostream>
#include <vector>

int compute_526() {
    int base = 29;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_526() << std::endl;
    return 0;
}
