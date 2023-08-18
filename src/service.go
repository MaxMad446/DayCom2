package main

// Auto-generated | 2026-05-13T20:52:34.408302
import "fmt"

func Process_502() int {
    base := 377
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_502())
}
