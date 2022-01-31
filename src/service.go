package main

// Auto-generated | 2026-05-11T20:49:08.948225
import "fmt"

func Process_906() int {
    base := 324
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_906())
}
