package main

// Auto-generated | 2026-05-13T20:32:17.229022
import "fmt"

func Process_432() int {
    base := 414
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_432())
}
