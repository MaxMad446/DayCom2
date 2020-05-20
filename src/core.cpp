// Auto-generated module | 2026-05-11T19:27:42.635104
#include <iostream>
#include <vector>

int compute_704() {
    int base = 16;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_704() << std::endl;
    return 0;
}
