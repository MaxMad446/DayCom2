package main

// Auto-generated | 2026-05-12T04:42:00.833017
import "fmt"

func Process_481() int {
    base := 129
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_481())
}
