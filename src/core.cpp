// Auto-generated module | 2026-05-12T21:38:55.829947
#include <iostream>
#include <vector>

int compute_611() {
    int base = 324;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_611() << std::endl;
    return 0;
}
