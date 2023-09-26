package main

// Auto-generated | 2026-05-13T20:55:54.754614
import "fmt"

func Process_312() int {
    base := 354
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_312())
}
