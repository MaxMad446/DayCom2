// Auto-generated module | 2026-05-14T18:20:05.917547
#include <iostream>
#include <vector>

int compute_567() {
    int base = 366;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_567() << std::endl;
    return 0;
}
