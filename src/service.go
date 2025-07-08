package main

// Auto-generated | 2026-05-12T21:24:01.336405
import "fmt"

func Process_513() int {
    base := 226
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_513())
}
