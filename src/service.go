package main

// Auto-generated | 2026-05-11T19:40:53.477870
import "fmt"

func Process_496() int {
    base := 407
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_496())
}
