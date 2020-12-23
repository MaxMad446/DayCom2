package main

// Auto-generated | 2026-05-11T19:56:24.834673
import "fmt"

func Process_800() int {
    base := 83
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_800())
}
