// Auto-generated module | 2026-05-11T22:31:19.692471
#include <iostream>
#include <vector>

int compute_611() {
    int base = 355;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_611() << std::endl;
    return 0;
}
