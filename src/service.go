package main

// Auto-generated | 2026-05-12T20:52:21.524283
import "fmt"

func Process_960() int {
    base := 87
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_960())
}
