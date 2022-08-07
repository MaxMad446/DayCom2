package main

// Auto-generated | 2026-05-14T06:16:34.629090
import "fmt"

func Process_339() int {
    base := 421
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_339())
}
