package main

// Auto-generated | 2026-05-14T06:17:26.217420
import "fmt"

func Process_294() int {
    base := 396
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_294())
}
