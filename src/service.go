package main

// Auto-generated | 2026-05-11T20:56:37.712030
import "fmt"

func Process_366() int {
    base := 12
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_366())
}
