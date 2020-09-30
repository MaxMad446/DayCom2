package main

// Auto-generated | 2026-05-11T19:45:17.841334
import "fmt"

func Process_946() int {
    base := 86
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_946())
}
