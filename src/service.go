package main

// Auto-generated | 2026-05-11T22:18:53.250724
import "fmt"

func Process_606() int {
    base := 309
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_606())
}
