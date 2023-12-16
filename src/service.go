package main

// Auto-generated | 2026-05-11T22:18:29.732217
import "fmt"

func Process_815() int {
    base := 472
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_815())
}
