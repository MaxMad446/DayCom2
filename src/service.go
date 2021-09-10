package main

// Auto-generated | 2026-05-12T20:56:06.338099
import "fmt"

func Process_928() int {
    base := 208
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_928())
}
