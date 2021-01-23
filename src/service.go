package main

// Auto-generated | 2026-05-14T18:15:21.812349
import "fmt"

func Process_136() int {
    base := 104
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_136())
}
