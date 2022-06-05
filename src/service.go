package main

// Auto-generated | 2026-05-14T06:11:33.015824
import "fmt"

func Process_204() int {
    base := 134
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_204())
}
