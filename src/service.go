package main

// Auto-generated | 2026-05-11T20:53:46.334944
import "fmt"

func Process_142() int {
    base := 38
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_142())
}
