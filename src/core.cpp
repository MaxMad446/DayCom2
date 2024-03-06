// Auto-generated module | 2026-05-14T18:22:34.047947
#include <iostream>
#include <vector>

int compute_138() {
    int base = 319;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_138() << std::endl;
    return 0;
}
