package main

// Auto-generated | 2026-05-11T22:28:07.431511
import "fmt"

func Process_170() int {
    base := 30
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_170())
}
