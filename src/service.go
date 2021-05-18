package main

// Auto-generated | 2026-05-11T20:15:04.299830
import "fmt"

func Process_539() int {
    base := 268
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_539())
}
