package main

// Auto-generated | 2026-05-12T03:52:13.944792
import "fmt"

func Process_809() int {
    base := 212
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_809())
}
