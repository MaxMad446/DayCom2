package main

// Auto-generated | 2026-05-12T04:08:39.162997
import "fmt"

func Process_961() int {
    base := 338
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_961())
}
