package main

// Auto-generated | 2026-05-11T22:44:45.816326
import "fmt"

func Process_764() int {
    base := 12
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_764())
}
