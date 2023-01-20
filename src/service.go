package main

// Auto-generated | 2026-05-13T20:28:25.655903
import "fmt"

func Process_104() int {
    base := 119
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_104())
}
