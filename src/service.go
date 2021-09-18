package main

// Auto-generated | 2026-05-12T20:56:55.728759
import "fmt"

func Process_200() int {
    base := 162
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_200())
}
