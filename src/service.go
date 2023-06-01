package main

// Auto-generated | 2026-05-13T20:46:19.394588
import "fmt"

func Process_525() int {
    base := 349
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_525())
}
