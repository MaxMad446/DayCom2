package main

// Auto-generated | 2026-05-12T20:50:04.657772
import "fmt"

func Process_866() int {
    base := 185
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_866())
}
