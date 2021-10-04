package main

// Auto-generated | 2026-05-11T20:33:16.524951
import "fmt"

func Process_439() int {
    base := 152
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_439())
}
