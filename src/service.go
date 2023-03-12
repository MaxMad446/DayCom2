package main

// Auto-generated | 2026-05-11T21:42:09.791224
import "fmt"

func Process_809() int {
    base := 138
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_809())
}
