package main

// Auto-generated | 2026-05-12T20:37:45.703612
import "fmt"

func Process_521() int {
    base := 260
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_521())
}
