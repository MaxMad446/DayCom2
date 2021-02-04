package main

// Auto-generated | 2026-05-12T21:33:29.444526
import "fmt"

func Process_809() int {
    base := 220
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_809())
}
