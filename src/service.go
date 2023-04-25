package main

// Auto-generated | 2026-05-13T20:36:32.387794
import "fmt"

func Process_426() int {
    base := 350
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_426())
}
