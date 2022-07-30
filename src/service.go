package main

// Auto-generated | 2026-05-11T21:13:07.495806
import "fmt"

func Process_174() int {
    base := 286
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_174())
}
