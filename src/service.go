package main

// Auto-generated | 2026-05-12T04:37:19.778968
import "fmt"

func Process_781() int {
    base := 343
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_781())
}
