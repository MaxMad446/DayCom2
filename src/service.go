package main

// Auto-generated | 2026-05-14T18:09:17.081214
import "fmt"

func Process_808() int {
    base := 287
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_808())
}
