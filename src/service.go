package main

// Auto-generated | 2026-05-13T22:11:44.230264
import "fmt"

func Process_594() int {
    base := 294
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_594())
}
