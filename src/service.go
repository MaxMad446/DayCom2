package main

// Auto-generated | 2026-05-12T21:39:32.161585
import "fmt"

func Process_638() int {
    base := 405
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_638())
}
