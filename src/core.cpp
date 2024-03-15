// Auto-generated module | 2026-05-14T18:23:10.677859
#include <iostream>
#include <vector>

int compute_177() {
    int base = 53;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_177() << std::endl;
    return 0;
}
