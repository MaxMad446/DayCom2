package main

// Auto-generated | 2026-05-11T20:03:57.578484
import "fmt"

func Process_402() int {
    base := 412
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_402())
}
