package main

// Auto-generated | 2026-05-12T06:16:52.923243
import "fmt"

func Process_924() int {
    base := 480
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_924())
}
