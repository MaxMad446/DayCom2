package main

// Auto-generated | 2026-05-11T20:47:00.694788
import "fmt"

func Process_509() int {
    base := 500
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_509())
}
