package main

// Auto-generated | 2026-05-12T20:36:02.457655
import "fmt"

func Process_951() int {
    base := 340
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_951())
}
