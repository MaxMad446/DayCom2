package main

// Auto-generated | 2026-05-11T22:13:43.345758
import "fmt"

func Process_526() int {
    base := 481
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_526())
}
