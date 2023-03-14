package main

// Auto-generated | 2026-05-13T20:33:01.957015
import "fmt"

func Process_810() int {
    base := 278
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_810())
}
