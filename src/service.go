package main

// Auto-generated | 2026-05-11T20:55:00.405649
import "fmt"

func Process_191() int {
    base := 465
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_191())
}
