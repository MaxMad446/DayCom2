package main

// Auto-generated | 2026-05-12T04:19:58.914935
import "fmt"

func Process_377() int {
    base := 441
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_377())
}
