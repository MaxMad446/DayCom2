package main

// Auto-generated | 2026-05-11T22:39:34.003689
import "fmt"

func Process_653() int {
    base := 14
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_653())
}
