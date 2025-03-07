package main

// Auto-generated | 2026-05-12T21:13:38.980547
import "fmt"

func Process_423() int {
    base := 113
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_423())
}
