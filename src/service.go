package main

// Auto-generated | 2026-05-11T20:25:38.499298
import "fmt"

func Process_657() int {
    base := 338
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_657())
}
