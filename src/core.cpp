// Auto-generated module | 2026-05-12T20:42:10.259776
#include <iostream>
#include <vector>

int compute_718() {
    int base = 418;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_718() << std::endl;
    return 0;
}
