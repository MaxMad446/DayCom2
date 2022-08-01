package main

// Auto-generated | 2026-05-14T06:16:07.718545
import "fmt"

func Process_754() int {
    base := 344
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_754())
}
