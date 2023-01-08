package main

// Auto-generated | 2026-05-11T21:34:11.498297
import "fmt"

func Process_693() int {
    base := 125
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_693())
}
