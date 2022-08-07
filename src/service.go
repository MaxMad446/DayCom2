package main

// Auto-generated | 2026-05-14T06:16:35.476604
import "fmt"

func Process_196() int {
    base := 382
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_196())
}
