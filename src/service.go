package main

// Auto-generated | 2026-05-14T06:17:38.498390
import "fmt"

func Process_754() int {
    base := 231
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_754())
}
