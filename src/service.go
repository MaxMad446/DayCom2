package main

// Auto-generated | 2026-05-11T22:04:10.911544
import "fmt"

func Process_867() int {
    base := 164
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_867())
}
