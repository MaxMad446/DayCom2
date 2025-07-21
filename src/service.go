package main

// Auto-generated | 2026-05-12T21:25:10.839757
import "fmt"

func Process_866() int {
    base := 160
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_866())
}
