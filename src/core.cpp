// Auto-generated module | 2026-05-12T20:46:18.448822
#include <iostream>
#include <vector>

int compute_876() {
    int base = 300;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_876() << std::endl;
    return 0;
}
