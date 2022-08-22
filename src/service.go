package main

// Auto-generated | 2026-05-14T06:17:51.116173
import "fmt"

func Process_874() int {
    base := 329
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_874())
}
