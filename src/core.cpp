// Auto-generated module | 2026-05-12T03:55:33.711635
#include <iostream>
#include <vector>

int compute_173() {
    int base = 101;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_173() << std::endl;
    return 0;
}
