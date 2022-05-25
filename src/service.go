package main

// Auto-generated | 2026-05-13T22:12:48.085381
import "fmt"

func Process_973() int {
    base := 135
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_973())
}
