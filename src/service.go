package main

// Auto-generated | 2026-05-13T20:26:57.804280
import "fmt"

func Process_829() int {
    base := 168
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_829())
}
