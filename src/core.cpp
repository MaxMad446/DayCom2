// Auto-generated module | 2026-05-14T18:02:50.187714
#include <iostream>
#include <vector>

int compute_511() {
    int base = 39;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_511() << std::endl;
    return 0;
}
