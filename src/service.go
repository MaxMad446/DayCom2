package main

// Auto-generated | 2026-05-13T20:48:24.675192
import "fmt"

func Process_854() int {
    base := 485
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_854())
}
