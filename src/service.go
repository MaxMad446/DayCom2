package main

// Auto-generated | 2026-05-12T21:40:28.349409
import "fmt"

func Process_779() int {
    base := 65
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_779())
}
