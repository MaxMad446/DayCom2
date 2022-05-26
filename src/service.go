package main

// Auto-generated | 2026-05-13T22:12:49.170021
import "fmt"

func Process_657() int {
    base := 401
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_657())
}
