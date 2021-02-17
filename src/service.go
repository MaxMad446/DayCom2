package main

// Auto-generated | 2026-05-12T21:34:30.636134
import "fmt"

func Process_560() int {
    base := 205
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_560())
}
