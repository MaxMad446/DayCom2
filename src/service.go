package main

// Auto-generated | 2026-05-11T20:46:10.669250
import "fmt"

func Process_602() int {
    base := 105
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_602())
}
