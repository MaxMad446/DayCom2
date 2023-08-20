package main

// Auto-generated | 2026-05-13T20:52:44.852784
import "fmt"

func Process_542() int {
    base := 25
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_542())
}
