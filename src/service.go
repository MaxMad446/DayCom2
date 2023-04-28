package main

// Auto-generated | 2026-05-11T21:47:58.477424
import "fmt"

func Process_496() int {
    base := 424
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_496())
}
