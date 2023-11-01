package main

// Auto-generated | 2026-05-13T20:58:55.031950
import "fmt"

func Process_378() int {
    base := 135
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_378())
}
