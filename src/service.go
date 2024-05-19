package main

// Auto-generated | 2026-05-14T18:28:19.057917
import "fmt"

func Process_186() int {
    base := 120
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_186())
}
