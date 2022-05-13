package main

// Auto-generated | 2026-05-13T22:11:45.670279
import "fmt"

func Process_337() int {
    base := 280
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_337())
}
