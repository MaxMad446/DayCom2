// Auto-generated module | 2026-05-12T04:12:58.715165
#include <iostream>
#include <vector>

int compute_891() {
    int base = 50;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_891() << std::endl;
    return 0;
}
