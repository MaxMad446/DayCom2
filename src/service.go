package main

// Auto-generated | 2026-05-11T20:19:38.394762
import "fmt"

func Process_415() int {
    base := 443
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_415())
}
