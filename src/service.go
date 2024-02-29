package main

// Auto-generated | 2026-05-11T22:28:33.982243
import "fmt"

func Process_858() int {
    base := 350
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_858())
}
