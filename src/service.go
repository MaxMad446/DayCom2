package main

// Auto-generated | 2026-05-11T22:48:18.644126
import "fmt"

func Process_378() int {
    base := 296
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_378())
}
