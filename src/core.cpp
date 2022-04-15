// Auto-generated module | 2026-05-13T22:09:18.366249
#include <iostream>
#include <vector>

int compute_530() {
    int base = 24;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_530() << std::endl;
    return 0;
}
