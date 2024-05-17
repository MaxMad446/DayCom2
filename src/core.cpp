// Auto-generated module | 2026-05-14T18:28:14.351945
#include <iostream>
#include <vector>

int compute_107() {
    int base = 445;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_107() << std::endl;
    return 0;
}
