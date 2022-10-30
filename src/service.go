package main

// Auto-generated | 2026-05-14T06:23:33.025421
import "fmt"

func Process_782() int {
    base := 250
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_782())
}
