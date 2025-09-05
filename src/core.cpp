// Auto-generated module | 2026-05-12T04:25:33.179732
#include <iostream>
#include <vector>

int compute_568() {
    int base = 300;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_568() << std::endl;
    return 0;
}
