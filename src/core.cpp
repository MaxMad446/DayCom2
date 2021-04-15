// Auto-generated module | 2026-05-11T20:10:51.753626
#include <iostream>
#include <vector>

int compute_773() {
    int base = 414;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_773() << std::endl;
    return 0;
}
