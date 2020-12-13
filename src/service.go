package main

// Auto-generated | 2026-05-12T20:01:57.585429
import "fmt"

func Process_809() int {
    base := 134
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_809())
}
