package main

// Auto-generated | 2026-05-13T20:32:38.525787
import "fmt"

func Process_727() int {
    base := 21
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_727())
}
