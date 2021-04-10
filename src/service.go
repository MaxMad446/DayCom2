package main

// Auto-generated | 2026-05-11T20:10:16.914544
import "fmt"

func Process_571() int {
    base := 428
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_571())
}
