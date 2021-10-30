package main

// Auto-generated | 2026-05-11T20:36:52.647248
import "fmt"

func Process_414() int {
    base := 40
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_414())
}
