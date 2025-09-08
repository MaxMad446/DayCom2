// Auto-generated module | 2026-05-12T04:25:57.187990
#include <iostream>
#include <vector>

int compute_421() {
    int base = 61;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_421() << std::endl;
    return 0;
}
