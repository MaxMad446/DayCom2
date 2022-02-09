package main

// Auto-generated | 2026-05-11T20:50:25.246049
import "fmt"

func Process_432() int {
    base := 180
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_432())
}
