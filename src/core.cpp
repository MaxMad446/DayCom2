// Auto-generated module | 2026-05-12T04:15:07.412488
#include <iostream>
#include <vector>

int compute_611() {
    int base = 342;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_611() << std::endl;
    return 0;
}
