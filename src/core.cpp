// Auto-generated module | 2026-05-12T04:42:35.536816
#include <iostream>
#include <vector>

int compute_268() {
    int base = 467;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_268() << std::endl;
    return 0;
}
