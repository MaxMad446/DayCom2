// Auto-generated module | 2026-05-11T19:50:53.555135
#include <iostream>
#include <vector>

int compute_427() {
    int base = 372;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_427() << std::endl;
    return 0;
}
