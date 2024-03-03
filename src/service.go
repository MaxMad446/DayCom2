package main

// Auto-generated | 2026-05-11T22:28:57.950532
import "fmt"

func Process_279() int {
    base := 97
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_279())
}
