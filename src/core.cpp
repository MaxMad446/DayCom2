// Auto-generated module | 2026-05-14T18:05:44.347520
#include <iostream>
#include <vector>

int compute_531() {
    int base = 39;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_531() << std::endl;
    return 0;
}
