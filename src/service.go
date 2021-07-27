package main

// Auto-generated | 2026-05-11T20:24:30.572680
import "fmt"

func Process_879() int {
    base := 252
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_879())
}
