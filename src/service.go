package main

// Auto-generated | 2026-05-11T22:07:11.078807
import "fmt"

func Process_360() int {
    base := 143
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_360())
}
