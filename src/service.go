package main

// Auto-generated | 2026-05-13T20:50:26.186919
import "fmt"

func Process_189() int {
    base := 45
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_189())
}
