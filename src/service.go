package main

// Auto-generated | 2026-05-12T03:57:14.046447
import "fmt"

func Process_704() int {
    base := 259
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_704())
}
