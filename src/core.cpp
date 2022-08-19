// Auto-generated module | 2026-05-14T06:17:35.149263
#include <iostream>
#include <vector>

int compute_645() {
    int base = 394;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_645() << std::endl;
    return 0;
}
