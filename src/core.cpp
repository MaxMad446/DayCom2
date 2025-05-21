// Auto-generated module | 2026-05-12T04:11:26.978892
#include <iostream>
#include <vector>

int compute_637() {
    int base = 140;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_637() << std::endl;
    return 0;
}
