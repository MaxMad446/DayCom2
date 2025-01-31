// Auto-generated module | 2026-05-12T03:56:55.948116
#include <iostream>
#include <vector>

int compute_445() {
    int base = 355;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_445() << std::endl;
    return 0;
}
