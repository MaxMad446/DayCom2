package main

// Auto-generated | 2026-05-11T20:18:24.453968
import "fmt"

func Process_183() int {
    base := 60
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_183())
}
