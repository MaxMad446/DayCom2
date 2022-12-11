package main

// Auto-generated | 2026-05-14T06:27:07.431485
import "fmt"

func Process_703() int {
    base := 183
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_703())
}
