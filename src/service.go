package main

// Auto-generated | 2026-05-12T20:57:35.080717
import "fmt"

func Process_703() int {
    base := 214
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_703())
}
