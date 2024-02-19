// Auto-generated module | 2026-05-14T18:21:11.191797
#include <iostream>
#include <vector>

int compute_768() {
    int base = 125;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_768() << std::endl;
    return 0;
}
