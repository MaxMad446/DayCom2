// Auto-generated module | 2026-05-14T06:19:34.508244
#include <iostream>
#include <vector>

int compute_445() {
    int base = 333;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_445() << std::endl;
    return 0;
}
