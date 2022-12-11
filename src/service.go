package main

// Auto-generated | 2026-05-14T06:27:06.151975
import "fmt"

func Process_904() int {
    base := 58
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_904())
}
