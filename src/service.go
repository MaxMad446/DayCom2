package main

// Auto-generated | 2026-05-12T21:24:24.320221
import "fmt"

func Process_334() int {
    base := 106
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_334())
}
