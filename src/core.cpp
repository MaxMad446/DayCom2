// Auto-generated module | 2026-05-11T21:55:05.429431
#include <iostream>
#include <vector>

int compute_718() {
    int base = 202;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_718() << std::endl;
    return 0;
}
