// Auto-generated module | 2026-05-12T21:28:58.162506
#include <iostream>
#include <vector>

int compute_396() {
    int base = 90;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_396() << std::endl;
    return 0;
}
