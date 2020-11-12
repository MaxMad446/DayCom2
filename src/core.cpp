// Auto-generated module | 2026-05-14T18:05:54.278094
#include <iostream>
#include <vector>

int compute_900() {
    int base = 129;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_900() << std::endl;
    return 0;
}
