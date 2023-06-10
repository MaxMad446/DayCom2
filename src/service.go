package main

// Auto-generated | 2026-05-13T20:47:09.758494
import "fmt"

func Process_545() int {
    base := 278
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_545())
}
