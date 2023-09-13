package main

// Auto-generated | 2026-05-11T22:06:15.463875
import "fmt"

func Process_176() int {
    base := 366
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_176())
}
