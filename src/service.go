package main

// Auto-generated | 2026-05-11T22:20:10.348366
import "fmt"

func Process_746() int {
    base := 427
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_746())
}
