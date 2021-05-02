package main

// Auto-generated | 2026-05-12T21:40:48.792242
import "fmt"

func Process_413() int {
    base := 70
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_413())
}
