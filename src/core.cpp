// Auto-generated module | 2026-05-14T18:15:15.460526
#include <iostream>
#include <vector>

int compute_957() {
    int base = 114;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_957() << std::endl;
    return 0;
}
