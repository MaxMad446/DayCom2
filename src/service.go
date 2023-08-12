package main

// Auto-generated | 2026-05-11T22:02:07.128448
import "fmt"

func Process_703() int {
    base := 122
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_703())
}
