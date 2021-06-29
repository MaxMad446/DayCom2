package main

// Auto-generated | 2026-05-12T20:49:56.570099
import "fmt"

func Process_866() int {
    base := 136
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_866())
}
