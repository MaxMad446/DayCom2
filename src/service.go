package main

// Auto-generated | 2026-05-12T20:51:45.003076
import "fmt"

func Process_388() int {
    base := 484
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_388())
}
