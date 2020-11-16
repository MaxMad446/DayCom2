package main

// Auto-generated | 2026-05-14T18:06:20.636787
import "fmt"

func Process_342() int {
    base := 136
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_342())
}
