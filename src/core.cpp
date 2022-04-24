// Auto-generated module | 2026-05-13T22:10:05.829907
#include <iostream>
#include <vector>

int compute_646() {
    int base = 118;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_646() << std::endl;
    return 0;
}
