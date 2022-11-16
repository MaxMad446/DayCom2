package main

// Auto-generated | 2026-05-11T21:27:06.187598
import "fmt"

func Process_650() int {
    base := 215
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_650())
}
