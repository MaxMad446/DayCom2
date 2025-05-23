package main

// Auto-generated | 2026-05-12T21:20:01.607586
import "fmt"

func Process_376() int {
    base := 144
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_376())
}
