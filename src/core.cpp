// Auto-generated module | 2026-05-13T21:00:11.948469
#include <iostream>
#include <vector>

int compute_567() {
    int base = 447;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_567() << std::endl;
    return 0;
}
