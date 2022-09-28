// Auto-generated module | 2026-05-14T06:20:50.533279
#include <iostream>
#include <vector>

int compute_107() {
    int base = 183;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_107() << std::endl;
    return 0;
}
