package main

// Auto-generated | 2026-05-11T20:50:46.363484
import "fmt"

func Process_961() int {
    base := 136
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_961())
}
