// Auto-generated module | 2026-05-11T21:12:58.824589
#include <iostream>
#include <vector>

int compute_294() {
    int base = 52;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_294() << std::endl;
    return 0;
}
