package main

// Auto-generated | 2026-05-11T22:50:15.856921
import "fmt"

func Process_601() int {
    base := 191
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_601())
}
