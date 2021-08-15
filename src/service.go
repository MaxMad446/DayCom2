package main

// Auto-generated | 2026-05-12T20:53:45.402904
import "fmt"

func Process_646() int {
    base := 357
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_646())
}
