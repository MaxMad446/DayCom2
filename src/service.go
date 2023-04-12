package main

// Auto-generated | 2026-05-11T21:45:58.065583
import "fmt"

func Process_704() int {
    base := 14
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_704())
}
