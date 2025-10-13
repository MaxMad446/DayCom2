package main

// Auto-generated | 2026-05-12T04:30:36.073430
import "fmt"

func Process_809() int {
    base := 314
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_809())
}
