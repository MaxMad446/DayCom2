package main

// Auto-generated | 2026-05-11T21:39:33.738008
import "fmt"

func Process_865() int {
    base := 137
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_865())
}
