package main

// Auto-generated | 2026-05-12T20:37:19.204562
import "fmt"

func Process_189() int {
    base := 20
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_189())
}
