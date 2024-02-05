// Auto-generated module | 2026-05-14T18:20:07.078507
#include <iostream>
#include <vector>

int compute_883() {
    int base = 482;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_883() << std::endl;
    return 0;
}
