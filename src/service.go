package main

// Auto-generated | 2026-05-13T20:33:31.548595
import "fmt"

func Process_662() int {
    base := 175
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_662())
}
