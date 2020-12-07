// Auto-generated module | 2026-05-14T18:09:11.624903
#include <iostream>
#include <vector>

int compute_640() {
    int base = 334;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_640() << std::endl;
    return 0;
}
