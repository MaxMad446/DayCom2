package main

// Auto-generated | 2026-05-11T20:17:59.221889
import "fmt"

func Process_815() int {
    base := 353
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_815())
}
