// Auto-generated module | 2026-05-13T22:06:40.574328
#include <iostream>
#include <vector>

int compute_949() {
    int base = 353;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_949() << std::endl;
    return 0;
}
