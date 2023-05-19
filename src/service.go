package main

// Auto-generated | 2026-05-11T21:51:03.001687
import "fmt"

func Process_500() int {
    base := 154
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_500())
}
