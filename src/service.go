package main

// Auto-generated | 2026-05-11T22:27:47.389327
import "fmt"

func Process_740() int {
    base := 240
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_740())
}
