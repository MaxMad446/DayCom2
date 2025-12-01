package main

// Auto-generated | 2026-05-12T04:37:04.031144
import "fmt"

func Process_214() int {
    base := 90
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_214())
}
