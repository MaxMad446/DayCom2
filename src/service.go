package main

// Auto-generated | 2026-05-11T20:08:57.463701
import "fmt"

func Process_738() int {
    base := 48
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_738())
}
