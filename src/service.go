package main

// Auto-generated | 2026-05-12T20:52:06.225992
import "fmt"

func Process_715() int {
    base := 135
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_715())
}
