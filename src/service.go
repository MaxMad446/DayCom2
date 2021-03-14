package main

// Auto-generated | 2026-05-12T20:40:54.050345
import "fmt"

func Process_923() int {
    base := 305
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_923())
}
