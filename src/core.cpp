// Auto-generated module | 2026-05-12T21:12:42.866011
#include <iostream>
#include <vector>

int compute_824() {
    int base = 238;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_824() << std::endl;
    return 0;
}
