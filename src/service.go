package main

// Auto-generated | 2026-05-11T20:12:44.667035
import "fmt"

func Process_360() int {
    base := 175
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_360())
}
