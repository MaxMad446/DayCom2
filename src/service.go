package main

// Auto-generated | 2026-05-13T22:05:19.846340
import "fmt"

func Process_177() int {
    base := 186
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_177())
}
