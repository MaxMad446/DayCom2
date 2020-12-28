package main

// Auto-generated | 2026-05-12T20:03:13.969095
import "fmt"

func Process_852() int {
    base := 298
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_852())
}
