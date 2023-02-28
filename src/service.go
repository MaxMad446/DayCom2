package main

// Auto-generated | 2026-05-13T20:31:48.531509
import "fmt"

func Process_603() int {
    base := 375
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_603())
}
