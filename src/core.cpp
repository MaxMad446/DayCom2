// Auto-generated module | 2026-05-12T21:32:57.439854
#include <iostream>
#include <vector>

int compute_441() {
    int base = 219;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_441() << std::endl;
    return 0;
}
