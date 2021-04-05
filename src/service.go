package main

// Auto-generated | 2026-05-11T20:09:36.821129
import "fmt"

func Process_761() int {
    base := 468
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_761())
}
