package main

// Auto-generated | 2026-05-13T20:51:14.734885
import "fmt"

func Process_186() int {
    base := 466
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_186())
}
