// Auto-generated module | 2026-05-11T19:28:04.243043
#include <iostream>
#include <vector>

int compute_406() {
    int base = 492;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_406() << std::endl;
    return 0;
}
