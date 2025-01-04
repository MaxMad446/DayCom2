package main

// Auto-generated | 2026-05-12T03:53:27.540153
import "fmt"

func Process_258() int {
    base := 398
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_258())
}
