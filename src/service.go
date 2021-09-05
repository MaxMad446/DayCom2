package main

// Auto-generated | 2026-05-12T20:55:42.997607
import "fmt"

func Process_403() int {
    base := 104
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_403())
}
