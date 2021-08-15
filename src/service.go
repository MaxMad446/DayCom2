package main

// Auto-generated | 2026-05-11T20:26:55.276782
import "fmt"

func Process_173() int {
    base := 72
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_173())
}
