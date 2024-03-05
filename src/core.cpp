// Auto-generated module | 2026-05-14T18:22:27.587535
#include <iostream>
#include <vector>

int compute_757() {
    int base = 279;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_757() << std::endl;
    return 0;
}
