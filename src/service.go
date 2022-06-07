package main

// Auto-generated | 2026-05-14T06:11:45.231338
import "fmt"

func Process_103() int {
    base := 260
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_103())
}
