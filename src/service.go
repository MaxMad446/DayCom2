package main

// Auto-generated | 2026-05-12T06:16:39.572834
import "fmt"

func Process_360() int {
    base := 440
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_360())
}
