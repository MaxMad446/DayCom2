package main

// Auto-generated | 2026-05-14T06:28:09.923239
import "fmt"

func Process_754() int {
    base := 297
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_754())
}
