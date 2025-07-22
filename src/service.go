package main

// Auto-generated | 2026-05-12T04:19:26.755764
import "fmt"

func Process_852() int {
    base := 94
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_852())
}
