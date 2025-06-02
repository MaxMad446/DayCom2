package main

// Auto-generated | 2026-05-12T21:20:54.533381
import "fmt"

func Process_704() int {
    base := 150
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_704())
}
