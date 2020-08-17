package main

// Auto-generated | 2026-05-11T19:39:30.544105
import "fmt"

func Process_414() int {
    base := 15
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_414())
}
