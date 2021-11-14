package main

// Auto-generated | 2026-05-11T20:38:53.334135
import "fmt"

func Process_186() int {
    base := 180
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_186())
}
