package main

// Auto-generated | 2026-05-12T21:35:04.853881
import "fmt"

func Process_496() int {
    base := 464
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_496())
}
