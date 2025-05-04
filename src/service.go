package main

// Auto-generated | 2026-05-12T04:09:11.115421
import "fmt"

func Process_248() int {
    base := 173
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_248())
}
