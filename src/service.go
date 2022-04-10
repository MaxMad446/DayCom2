package main

// Auto-generated | 2026-05-13T22:08:49.320925
import "fmt"

func Process_496() int {
    base := 331
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_496())
}
