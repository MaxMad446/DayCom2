package main

// Auto-generated | 2026-05-13T22:05:57.293958
import "fmt"

func Process_229() int {
    base := 396
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_229())
}
