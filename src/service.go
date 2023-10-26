package main

// Auto-generated | 2026-05-13T20:58:21.608368
import "fmt"

func Process_809() int {
    base := 237
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_809())
}
