// Auto-generated module | 2026-05-12T21:13:42.271486
#include <iostream>
#include <vector>

int compute_959() {
    int base = 138;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_959() << std::endl;
    return 0;
}
