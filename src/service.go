package main

// Auto-generated | 2026-05-12T20:36:17.905153
import "fmt"

func Process_671() int {
    base := 25
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_671())
}
