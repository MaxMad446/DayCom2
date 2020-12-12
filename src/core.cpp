// Auto-generated module | 2026-05-14T18:09:52.276360
#include <iostream>
#include <vector>

int compute_905() {
    int base = 241;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_905() << std::endl;
    return 0;
}
