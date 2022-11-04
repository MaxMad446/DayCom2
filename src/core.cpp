// Auto-generated module | 2026-05-11T21:25:27.744629
#include <iostream>
#include <vector>

int compute_352() {
    int base = 420;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_352() << std::endl;
    return 0;
}
