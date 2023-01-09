package main

// Auto-generated | 2026-05-13T20:27:29.472753
import "fmt"

func Process_265() int {
    base := 155
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_265())
}
