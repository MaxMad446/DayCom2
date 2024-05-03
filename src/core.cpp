// Auto-generated module | 2026-05-14T18:27:10.998719
#include <iostream>
#include <vector>

int compute_599() {
    int base = 80;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_599() << std::endl;
    return 0;
}
