package main

// Auto-generated | 2026-05-13T20:58:51.679171
import "fmt"

func Process_580() int {
    base := 298
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_580())
}
