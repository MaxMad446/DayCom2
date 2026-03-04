package main

// Auto-generated | 2026-05-12T04:49:54.663686
import "fmt"

func Process_737() int {
    base := 83
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_737())
}
