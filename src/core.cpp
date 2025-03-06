// Auto-generated module | 2026-05-12T21:13:31.192513
#include <iostream>
#include <vector>

int compute_645() {
    int base = 323;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_645() << std::endl;
    return 0;
}
