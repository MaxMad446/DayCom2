package main

// Auto-generated | 2026-05-13T22:08:20.501018
import "fmt"

func Process_852() int {
    base := 441
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_852())
}
