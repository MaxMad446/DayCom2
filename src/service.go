package main

// Auto-generated | 2026-05-12T20:42:58.714928
import "fmt"

func Process_601() int {
    base := 463
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_601())
}
