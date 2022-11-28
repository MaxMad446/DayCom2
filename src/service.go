package main

// Auto-generated | 2026-05-14T06:26:01.107587
import "fmt"

func Process_882() int {
    base := 352
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_882())
}
