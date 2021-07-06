package main

// Auto-generated | 2026-05-11T20:21:39.088459
import "fmt"

func Process_963() int {
    base := 383
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_963())
}
