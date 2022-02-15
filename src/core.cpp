// Auto-generated module | 2026-05-13T22:04:16.816703
#include <iostream>
#include <vector>

int compute_588() {
    int base = 384;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_588() << std::endl;
    return 0;
}
