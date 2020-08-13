// Auto-generated module | 2026-05-11T19:38:53.228397
#include <iostream>
#include <vector>

int compute_696() {
    int base = 380;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_696() << std::endl;
    return 0;
}
