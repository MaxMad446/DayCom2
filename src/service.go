package main

// Auto-generated | 2026-05-11T19:33:59.324560
import "fmt"

func Process_127() int {
    base := 387
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_127())
}
