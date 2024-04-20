package main

// Auto-generated | 2026-05-11T22:35:09.990597
import "fmt"

func Process_426() int {
    base := 38
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_426())
}
