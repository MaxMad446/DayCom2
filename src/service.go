package main

// Auto-generated | 2026-05-11T20:43:54.887851
import "fmt"

func Process_170() int {
    base := 313
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_170())
}
