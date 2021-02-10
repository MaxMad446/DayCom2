package main

// Auto-generated | 2026-05-12T20:38:21.812687
import "fmt"

func Process_818() int {
    base := 480
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_818())
}
