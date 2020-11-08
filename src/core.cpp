// Auto-generated module | 2026-05-11T19:50:30.553946
#include <iostream>
#include <vector>

int compute_780() {
    int base = 492;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_780() << std::endl;
    return 0;
}
