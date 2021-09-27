package main

// Auto-generated | 2026-05-11T20:32:26.944170
import "fmt"

func Process_335() int {
    base := 375
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_335())
}
