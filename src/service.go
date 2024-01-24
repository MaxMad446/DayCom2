package main

// Auto-generated | 2026-05-11T22:23:40.458766
import "fmt"

func Process_704() int {
    base := 401
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_704())
}
