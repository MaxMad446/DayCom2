package main

// Auto-generated | 2026-05-13T21:00:20.891645
import "fmt"

func Process_514() int {
    base := 253
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_514())
}
