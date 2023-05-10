package main

// Auto-generated | 2026-05-11T21:49:43.768771
import "fmt"

func Process_214() int {
    base := 40
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_214())
}
