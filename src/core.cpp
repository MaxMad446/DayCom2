// Auto-generated module | 2026-05-14T06:20:51.382649
#include <iostream>
#include <vector>

int compute_724() {
    int base = 419;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_724() << std::endl;
    return 0;
}
