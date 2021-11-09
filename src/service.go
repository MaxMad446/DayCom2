package main

// Auto-generated | 2026-05-12T21:01:08.665045
import "fmt"

func Process_896() int {
    base := 380
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_896())
}
