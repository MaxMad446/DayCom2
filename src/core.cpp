// Auto-generated module | 2026-05-13T22:12:42.410771
#include <iostream>
#include <vector>

int compute_506() {
    int base = 146;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_506() << std::endl;
    return 0;
}
