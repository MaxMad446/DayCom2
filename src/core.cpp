// Auto-generated module | 2026-05-12T21:19:39.035751
#include <iostream>
#include <vector>

int compute_840() {
    int base = 177;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_840() << std::endl;
    return 0;
}
