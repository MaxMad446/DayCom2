// Auto-generated module | 2026-05-14T18:26:14.741324
#include <iostream>
#include <vector>

int compute_268() {
    int base = 138;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_268() << std::endl;
    return 0;
}
