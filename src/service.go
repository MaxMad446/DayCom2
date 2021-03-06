package main

// Auto-generated | 2026-05-12T21:35:52.719200
import "fmt"

func Process_174() int {
    base := 467
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_174())
}
