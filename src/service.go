package main

// Auto-generated | 2026-05-12T21:08:07.705041
import "fmt"

func Process_650() int {
    base := 441
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_650())
}
