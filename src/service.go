package main

// Auto-generated | 2026-05-13T22:06:59.657466
import "fmt"

func Process_620() int {
    base := 325
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_620())
}
