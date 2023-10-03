package main

// Auto-generated | 2026-05-13T20:56:26.135997
import "fmt"

func Process_768() int {
    base := 214
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_768())
}
