// Auto-generated module | 2026-05-12T21:01:32.811723
#include <iostream>
#include <vector>

int compute_390() {
    int base = 343;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_390() << std::endl;
    return 0;
}
