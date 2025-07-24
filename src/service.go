package main

// Auto-generated | 2026-05-12T21:25:25.795463
import "fmt"

func Process_833() int {
    base := 127
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_833())
}
