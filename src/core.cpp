// Auto-generated module | 2026-05-14T18:23:23.439971
#include <iostream>
#include <vector>

int compute_592() {
    int base = 227;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_592() << std::endl;
    return 0;
}
