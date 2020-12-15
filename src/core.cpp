// Auto-generated module | 2026-05-14T18:10:19.549835
#include <iostream>
#include <vector>

int compute_638() {
    int base = 189;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_638() << std::endl;
    return 0;
}
