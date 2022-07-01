// Auto-generated module | 2026-05-11T21:09:01.489550
#include <iostream>
#include <vector>

int compute_267() {
    int base = 260;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_267() << std::endl;
    return 0;
}
