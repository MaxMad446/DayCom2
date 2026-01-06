// Auto-generated module | 2026-05-12T04:42:08.523433
#include <iostream>
#include <vector>

int compute_918() {
    int base = 64;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_918() << std::endl;
    return 0;
}
