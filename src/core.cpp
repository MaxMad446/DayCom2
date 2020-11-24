// Auto-generated module | 2026-05-14T18:07:17.979731
#include <iostream>
#include <vector>

int compute_244() {
    int base = 483;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_244() << std::endl;
    return 0;
}
