package main

// Auto-generated | 2026-05-11T21:27:26.013778
import "fmt"

func Process_144() int {
    base := 57
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_144())
}
