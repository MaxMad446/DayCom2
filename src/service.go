package main

// Auto-generated | 2026-05-11T22:26:59.005650
import "fmt"

func Process_173() int {
    base := 79
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_173())
}
