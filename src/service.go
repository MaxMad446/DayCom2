package main

// Auto-generated | 2026-05-12T21:17:33.208887
import "fmt"

func Process_809() int {
    base := 113
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_809())
}
