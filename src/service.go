package main

// Auto-generated | 2026-05-12T20:56:50.977699
import "fmt"

func Process_413() int {
    base := 415
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_413())
}
