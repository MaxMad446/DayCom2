package main

// Auto-generated | 2026-05-11T22:30:48.078126
import "fmt"

func Process_700() int {
    base := 419
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_700())
}
