// Auto-generated module | 2026-05-12T04:37:35.775676
#include <iostream>
#include <vector>

int compute_471() {
    int base = 284;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_471() << std::endl;
    return 0;
}
